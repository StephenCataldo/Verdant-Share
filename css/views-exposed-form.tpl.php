<?php

die("Oh, this is used -- views-exposed-form")


// $Id: views-exposed-form.tpl.php,v 1.4.4.1 2009/11/18 20:37:58 merlinofchaos Exp $
/**
 * @file views-exposed-form.tpl.php
 *
 * This template handles the layout of the views exposed filter form.
 *
 * Variables available:
 * - $widgets: An array of exposed form widgets. Each widget contains:
 * - $widget->label: The visible label to print. May be optional.
 * - $widget->operator: The operator for the widget. May be optional.
 * - $widget->widget: The widget itself.
 * - $button: The submit button for the form.
 *
 * @ingroup views_templates
 */
?>
<?php if (!empty($q)): ?>
  <?php
    // This ensures that, if clean URLs are off, the 'q' is added first so that
    // it shows up first in the URL.
    print $q;
  ?>
<?php endif; ?>

<?php
  $content = '<div class="views-exposed-form"><div class="views-exposed-widgets clear-block">';
  foreach ($widgets as $id => $widget) {
    $content .= '<div class="views-exposed-widget">';
    if (!empty($widget->label)) {
      $content .= '<label>' . $widget->label . '</label>';
    }
    if (!empty($widget->operator)) {
      $content .= '<div class="views-operator">' . $widget->operator . '</div>';
    }
    $content .= '<div class="views-widget">' . $widget->widget . '</div></div>';
  }
  $content .= '<div class="views-exposed-widget">' . $button . '</div></div></div>';

  $element = array();
  $element['#collapsible'] = TRUE;
  $element['#collapsed'] = FALSE;
  $element['#title'] = t('Filter');
  $element['#value'] = $content;
  print theme('fieldset', $element);

