<?php

/**
 * @file
 * Default theme implementation for entities.
 *
 * Available variables:
 * - $content: An array of comment items. Use render($content) to print them all, or
 *   print a subset such as render($content['field_example']). Use
 *   hide($content['field_example']) to temporarily suppress the printing of a
 *   given element.
 * - $title: The (sanitized) entity label.
 * - $url: Direct url of the current entity if specified.
 * - $page: Flag for the full page state.
 * - $classes: String of classes that can be used to style contextually through
 *   CSS. It can be manipulated through the variable $classes_array from
 *   preprocess functions. By default the following classes are available, where
 *   the parts enclosed by {} are replaced by the appropriate values:
 *   - entity-{ENTITY_TYPE}
 *   - {ENTITY_TYPE}-{BUNDLE}
 *
 * Other variables:
 * - $classes_array: Array of html class attribute values. It is flattened
 *   into a string within the variable $classes.
 *
 * @see template_preprocess()
 * @see template_preprocess_entity()
 * @see template_process()
 */
?>
<?php $entity = $variables['borgerdk_article']; ?>
<div class="<?php print $classes; ?> clearfix"<?php print $attributes; ?>>

  <div class="content"<?php print $content_attributes; ?>>
    <?php

    $content['microarticles']['#label_display'] = 'hidden';
    print render($content['microarticles']);

    ?>

    <?php
      $legislation_links = bellcom_borgerdk_migrate_parse_links($entity->legislation);
      if (!empty($legislation_links)) :
    ?>
    <div class="pane-os2web-borger-dk-os2web-borger-dk-legislati">
      <div class="os2-accordion">
        <div class="os2-accordion-heading">
          <h2 class="os2-accordion-heading-title">
            <?php print(t('Lovgivning')); ?>
          </h2>
        </div>

        <div class="os2-accordion-body pane-content">
          <?php print(os2web_borger_dk_get_links_make_markup($legislation_links)); ?>
        </div>
      </div>
    </div>
    <?php endif; ?>

  </div>
</div>