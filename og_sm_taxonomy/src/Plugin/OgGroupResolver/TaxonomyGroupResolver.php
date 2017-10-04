<?php

namespace Drupal\og_sm_taxonomy\Plugin\OgGroupResolver;

use Drupal\og\OgResolvedGroupCollectionInterface;
use Drupal\og_sm_context\Plugin\OgGroupResolver\OgSmGroupResolverBase;

/**
 * Tries to get the context based on the fact that we are on a node page.
 *
 * @OgGroupResolver(
 *   id = "og_sm_context_taxonomy",
 *   label = "Site Taxonomy",
 *   description = @Translation("Determine Site context based on the fact that we are on a Site taxonomy term.")
 * )
 */
class TaxonomyGroupResolver extends OgSmGroupResolverBase {

  /**
   * {@inheritdoc}
   */
  public function resolve(OgResolvedGroupCollectionInterface $collection) {
    $route_object = $this->routeMatch->getRouteObject();
    if (!$route_object) {
      return;
    }
    if (strpos($route_object->getPath(), '/taxonomy/term/{taxonomy_term}') !== 0) {
      return;
    }
    $term = $this->routeMatch->getParameter('taxonomy_term');

    if ($site = $this->siteManager->getSiteFromEntity($term)) {
      $collection->addGroup($site, ['url']);
      $this->stopPropagation();
    }

  }

}
