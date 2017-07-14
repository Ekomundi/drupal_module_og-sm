<?php

namespace Drupal\og_sm_config\Form;

use Drupal\Core\Config\ConfigFactoryInterface;
use Drupal\Core\Form\ConfigFormBase;
use Drupal\og_sm\SiteManagerInterface;
use Drupal\og_sm_config\Config\SiteConfigFactoryOverrideInterface;
use Symfony\Component\DependencyInjection\ContainerInterface;

/**
 * Base class for implementing site configuration forms.
 */
abstract class SiteConfigFormBase extends ConfigFormBase {

  /**
   * The site configuration override service.
   *
   * @var \Drupal\og_sm_config\Config\SiteConfigFactoryOverrideInterface
   */
  protected $configFactoryOverride;

  /**
   * The current site.
   *
   * @var \Drupal\node\NodeInterface
   */
  protected $currentSite;

  /**
   * Constructs a \Drupal\system\SiteConfigFormBase object.
   *
   * @param \Drupal\Core\Config\ConfigFactoryInterface $configFactory
   *   The factory for configuration objects.
   * @param \Drupal\og_sm_config\Config\SiteConfigFactoryOverrideInterface $configFactoryOverride
   *   The site configuration override service.
   * @param \Drupal\og_sm\SiteManagerInterface $siteManager
   *   The site manager.
   */
  public function __construct(ConfigFactoryInterface $configFactory, SiteConfigFactoryOverrideInterface $configFactoryOverride, SiteManagerInterface $siteManager) {
    parent::__construct($configFactory);
    $this->currentSite = $siteManager->currentSite();
    $this->configFactoryOverride = $configFactoryOverride;
  }

  /**
   * {@inheritdoc}
   */
  protected function config($name) {
    if ($this->currentSite) {
      return $this->configFactoryOverride->getOverride($this->currentSite, $name);
    }
    return parent::config($name);
  }

  /**
   * {@inheritdoc}
   */
  public static function create(ContainerInterface $container) {
    return new static(
      $container->get('config.factory'),
      $container->get('og_sm.config_factory_override'),
      $container->get('og_sm.site_manager')
    );
  }

}
