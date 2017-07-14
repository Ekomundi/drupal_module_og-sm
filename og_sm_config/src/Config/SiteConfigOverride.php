<?php

namespace Drupal\og_sm_config\Config;

use Drupal\Core\Cache\Cache;
use Drupal\Core\Config\StorableConfigBase;
use Drupal\Core\Config\StorageInterface;
use Drupal\Core\Config\TypedConfigManagerInterface;

/**
 * Defines language configuration overrides.
 */
class SiteConfigOverride extends StorableConfigBase {

  use SiteConfigCollectionNameTrait;

  /**
   * Constructs a site override object.
   *
   * @param string $name
   *   The name of the configuration object being overridden.
   * @param \Drupal\Core\Config\StorageInterface $storage
   *   A storage controller object to use for reading and writing the
   *   configuration override.
   * @param \Drupal\Core\Config\TypedConfigManagerInterface $typedConfig
   *   The typed configuration manager service.
   */
  public function __construct($name, StorageInterface $storage, TypedConfigManagerInterface $typedConfig) {
    $this->name = $name;
    $this->storage = $storage;
    $this->typedConfigManager = $typedConfig;
  }

  /**
   * {@inheritdoc}
   */
  public function save($has_trusted_data = FALSE) {
    if (!$has_trusted_data) {
      foreach ($this->data as $key => $value) {
        $this->validateValue($key, $value);
      }
    }

    $this->storage->write($this->name, $this->data);
    Cache::invalidateTags($this->getCacheTags());
    $this->isNew = FALSE;
    $this->originalData = $this->data;
    return $this;
  }

  /**
   * {@inheritdoc}
   */
  public function delete() {
    $this->data = [];
    $this->storage->delete($this->name);
    Cache::invalidateTags($this->getCacheTags());
    $this->isNew = TRUE;
    $this->originalData = $this->data;
    return $this;
  }

  /**
   * Returns the site id of this site config override.
   *
   * @return int
   *   The site id.
   */
  public function getSiteId() {
    return $this->getSiteIdFromCollectionName($this->getStorage()->getCollectionName());
  }

}
