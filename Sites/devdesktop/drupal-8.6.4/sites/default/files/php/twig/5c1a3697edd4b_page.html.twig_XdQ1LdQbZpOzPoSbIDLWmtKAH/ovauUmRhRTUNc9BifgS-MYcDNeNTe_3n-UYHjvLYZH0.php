<?php

/* themes/eftec/templates/page.html.twig */
class __TwigTemplate_dde4b21316b5994a6a32ed35ba44b79270ee78ca11bf37224034530ddb0f0764 extends Twig_Template
{
    public function __construct(Twig_Environment $env)
    {
        parent::__construct($env);

        $this->parent = false;

        $this->blocks = array(
            'header' => array($this, 'block_header'),
            'navbar' => array($this, 'block_navbar'),
            'main' => array($this, 'block_main'),
            'highlighted' => array($this, 'block_highlighted'),
            'help' => array($this, 'block_help'),
            'sidebar_first' => array($this, 'block_sidebar_first'),
            'content' => array($this, 'block_content'),
            'sidebar_second' => array($this, 'block_sidebar_second'),
            'footer' => array($this, 'block_footer'),
        );
    }

    protected function doDisplay(array $context, array $blocks = array())
    {
        $tags = array("set" => 55, "if" => 58, "block" => 59);
        $filters = array("clean_class" => 78, "t" => 90, "striptags" => 137, "render" => 137);
        $functions = array();

        try {
            $this->env->getExtension('Twig_Extension_Sandbox')->checkSecurity(
                array('set', 'if', 'block'),
                array('clean_class', 't', 'striptags', 'render'),
                array()
            );
        } catch (Twig_Sandbox_SecurityError $e) {
            $e->setSourceContext($this->getSourceContext());

            if ($e instanceof Twig_Sandbox_SecurityNotAllowedTagError && isset($tags[$e->getTagName()])) {
                $e->setTemplateLine($tags[$e->getTagName()]);
            } elseif ($e instanceof Twig_Sandbox_SecurityNotAllowedFilterError && isset($filters[$e->getFilterName()])) {
                $e->setTemplateLine($filters[$e->getFilterName()]);
            } elseif ($e instanceof Twig_Sandbox_SecurityNotAllowedFunctionError && isset($functions[$e->getFunctionName()])) {
                $e->setTemplateLine($functions[$e->getFunctionName()]);
            }

            throw $e;
        }

        // line 54
        echo "
";
        // line 55
        $context["container"] = (($this->getAttribute($this->getAttribute((isset($context["theme"]) ? $context["theme"] : null), "settings", array()), "fluid_container", array())) ? ("container-fluid") : ("container"));
        // line 56
        echo "        <div class=\"collapsing-wrapper\">
 ";
        // line 58
        echo "      ";
        if ($this->getAttribute((isset($context["page"]) ? $context["page"] : null), "header", array())) {
            // line 59
            echo "        ";
            $this->displayBlock('header', $context, $blocks);
            // line 65
            echo "      ";
        }
        // line 66
        echo "



";
        // line 71
        if (($this->getAttribute((isset($context["page"]) ? $context["page"] : null), "navigation", array()) || $this->getAttribute((isset($context["page"]) ? $context["page"] : null), "navigation_collapsible", array()))) {
            // line 72
            echo "  ";
            $this->displayBlock('navbar', $context, $blocks);
        }
        // line 110
        echo "
</div>



";
        // line 116
        $this->displayBlock('main', $context, $blocks);
        // line 176
        echo "
";
        // line 177
        if ($this->getAttribute((isset($context["page"]) ? $context["page"] : null), "footer", array())) {
            // line 178
            echo "  ";
            $this->displayBlock('footer', $context, $blocks);
        }
    }

    // line 59
    public function block_header($context, array $blocks = array())
    {
        // line 60
        echo "
          <div class=\"container-fluid clearfix top-bar\" role=\"heading\">
            ";
        // line 62
        echo $this->env->getExtension('Twig_Extension_Sandbox')->ensureToStringAllowed($this->env->getExtension('Drupal\Core\Template\TwigExtension')->escapeFilter($this->env, $this->getAttribute((isset($context["page"]) ? $context["page"] : null), "header", array()), "html", null, true));
        echo "
          </div>
        ";
    }

    // line 72
    public function block_navbar($context, array $blocks = array())
    {
        // line 73
        echo "    ";
        // line 74
        $context["navbar_classes"] = array(0 => "navbar", 1 => "minimise", 2 => (($this->getAttribute($this->getAttribute(        // line 77
(isset($context["theme"]) ? $context["theme"] : null), "settings", array()), "navbar_inverse", array())) ? ("navbar-inverse") : ("navbar-default")), 3 => (($this->getAttribute($this->getAttribute(        // line 78
(isset($context["theme"]) ? $context["theme"] : null), "settings", array()), "navbar_position", array())) ? (("navbar-" . \Drupal\Component\Utility\Html::getClass($this->getAttribute($this->getAttribute((isset($context["theme"]) ? $context["theme"] : null), "settings", array()), "navbar_position", array())))) : ((isset($context["container"]) ? $context["container"] : null))));
        // line 81
        echo "    <header";
        echo $this->env->getExtension('Twig_Extension_Sandbox')->ensureToStringAllowed($this->env->getExtension('Drupal\Core\Template\TwigExtension')->escapeFilter($this->env, $this->getAttribute((isset($context["navbar_attributes"]) ? $context["navbar_attributes"] : null), "addClass", array(0 => (isset($context["navbar_classes"]) ? $context["navbar_classes"] : null)), "method"), "html", null, true));
        echo " id=\"navbar\" role=\"banner\">
      ";
        // line 82
        if ( !$this->getAttribute((isset($context["navbar_attributes"]) ? $context["navbar_attributes"] : null), "hasClass", array(0 => (isset($context["container"]) ? $context["container"] : null)), "method")) {
            // line 83
            echo "        <div class=\"";
            echo $this->env->getExtension('Twig_Extension_Sandbox')->ensureToStringAllowed($this->env->getExtension('Drupal\Core\Template\TwigExtension')->escapeFilter($this->env, (isset($context["container"]) ? $context["container"] : null), "html", null, true));
            echo "\">
      ";
        }
        // line 85
        echo "      <div class=\"navbar-header\">
        ";
        // line 86
        echo $this->env->getExtension('Twig_Extension_Sandbox')->ensureToStringAllowed($this->env->getExtension('Drupal\Core\Template\TwigExtension')->escapeFilter($this->env, $this->getAttribute((isset($context["page"]) ? $context["page"] : null), "navigation", array()), "html", null, true));
        echo "
        ";
        // line 88
        echo "        ";
        if ($this->getAttribute((isset($context["page"]) ? $context["page"] : null), "navigation_collapsible", array())) {
            // line 89
            echo "          <button type=\"button\" class=\"navbar-toggle collapsed\" data-toggle=\"collapse\" data-target=\"#navbar-collapse\">
            <span class=\"sr-only\">";
            // line 90
            echo $this->env->getExtension('Twig_Extension_Sandbox')->ensureToStringAllowed($this->env->getExtension('Drupal\Core\Template\TwigExtension')->renderVar(t("Toggle navigation")));
            echo "</span>
            <span class=\"icon-bar\"></span>
            <span class=\"icon-bar\"></span>
            <span class=\"icon-bar\"></span>
          </button>
        ";
        }
        // line 96
        echo "      </div>

      ";
        // line 99
        echo "      ";
        if ($this->getAttribute((isset($context["page"]) ? $context["page"] : null), "navigation_collapsible", array())) {
            // line 100
            echo "        <div id=\"navbar-collapse\" class=\"navbar-collapse collapse\">
          ";
            // line 101
            echo $this->env->getExtension('Twig_Extension_Sandbox')->ensureToStringAllowed($this->env->getExtension('Drupal\Core\Template\TwigExtension')->escapeFilter($this->env, $this->getAttribute((isset($context["page"]) ? $context["page"] : null), "navigation_collapsible", array()), "html", null, true));
            echo "
        </div>
      ";
        }
        // line 104
        echo "      ";
        if ( !$this->getAttribute((isset($context["navbar_attributes"]) ? $context["navbar_attributes"] : null), "hasClass", array(0 => (isset($context["container"]) ? $context["container"] : null)), "method")) {
            // line 105
            echo "        </div>
      ";
        }
        // line 107
        echo "    </header>
  ";
    }

    // line 116
    public function block_main($context, array $blocks = array())
    {
        // line 117
        echo "  <div role=\"main\" class=\"main-container ";
        echo $this->env->getExtension('Twig_Extension_Sandbox')->ensureToStringAllowed($this->env->getExtension('Drupal\Core\Template\TwigExtension')->escapeFilter($this->env, (isset($context["container"]) ? $context["container"] : null), "html", null, true));
        echo " js-quickedit-main-content\">
    <div class=\"row\">

     ";
        // line 121
        echo "        ";
        if ($this->getAttribute((isset($context["page"]) ? $context["page"] : null), "highlighted", array())) {
            // line 122
            echo "          ";
            $this->displayBlock('highlighted', $context, $blocks);
            // line 125
            echo "        ";
        }
        // line 126
        echo "
        ";
        // line 128
        echo "        ";
        if ($this->getAttribute((isset($context["page"]) ? $context["page"] : null), "help", array())) {
            // line 129
            echo "          ";
            $this->displayBlock('help', $context, $blocks);
            // line 132
            echo "        ";
        }
        // line 133
        echo "


      ";
        // line 137
        echo "      ";
        if (strip_tags($this->env->getExtension('Drupal\Core\Template\TwigExtension')->renderVar($this->getAttribute((isset($context["page"]) ? $context["page"] : null), "sidebar_first", array())))) {
            // line 138
            echo "        ";
            $this->displayBlock('sidebar_first', $context, $blocks);
            // line 143
            echo "      ";
        }
        // line 144
        echo "
";
        // line 147
        $context["content_classes"] = array(0 => (((strip_tags($this->env->getExtension('Drupal\Core\Template\TwigExtension')->renderVar($this->getAttribute(        // line 148
(isset($context["page"]) ? $context["page"] : null), "sidebar_first", array()))) && strip_tags($this->env->getExtension('Drupal\Core\Template\TwigExtension')->renderVar($this->getAttribute((isset($context["page"]) ? $context["page"] : null), "sidebar_second", array()))))) ? ("col-sm-6") : ("")), 1 => (((strip_tags($this->env->getExtension('Drupal\Core\Template\TwigExtension')->renderVar($this->getAttribute(        // line 149
(isset($context["page"]) ? $context["page"] : null), "sidebar_first", array()))) && twig_test_empty(strip_tags($this->env->getExtension('Drupal\Core\Template\TwigExtension')->renderVar($this->getAttribute((isset($context["page"]) ? $context["page"] : null), "sidebar_second", array())))))) ? ("col-sm-9") : ("")), 2 => (((strip_tags($this->env->getExtension('Drupal\Core\Template\TwigExtension')->renderVar($this->getAttribute(        // line 150
(isset($context["page"]) ? $context["page"] : null), "sidebar_second", array()))) && twig_test_empty(strip_tags($this->env->getExtension('Drupal\Core\Template\TwigExtension')->renderVar($this->getAttribute((isset($context["page"]) ? $context["page"] : null), "sidebar_first", array())))))) ? ("col-sm-9") : ("")), 3 => (((twig_test_empty(strip_tags($this->env->getExtension('Drupal\Core\Template\TwigExtension')->renderVar($this->getAttribute(        // line 151
(isset($context["page"]) ? $context["page"] : null), "sidebar_first", array())))) && twig_test_empty(strip_tags($this->env->getExtension('Drupal\Core\Template\TwigExtension')->renderVar($this->getAttribute((isset($context["page"]) ? $context["page"] : null), "sidebar_second", array())))))) ? ("col-sm-12") : ("")));
        // line 154
        echo "      <section";
        echo $this->env->getExtension('Twig_Extension_Sandbox')->ensureToStringAllowed($this->env->getExtension('Drupal\Core\Template\TwigExtension')->escapeFilter($this->env, $this->getAttribute((isset($context["content_attributes"]) ? $context["content_attributes"] : null), "addClass", array(0 => (isset($context["content_classes"]) ? $context["content_classes"] : null)), "method"), "html", null, true));
        echo " role=\"main\">



        ";
        // line 159
        echo "        ";
        $this->displayBlock('content', $context, $blocks);
        // line 163
        echo "      </section>

      ";
        // line 166
        echo "      ";
        if ($this->getAttribute((isset($context["page"]) ? $context["page"] : null), "sidebar_second", array())) {
            // line 167
            echo "        ";
            $this->displayBlock('sidebar_second', $context, $blocks);
            // line 172
            echo "      ";
        }
        // line 173
        echo "    </div>
  </div>
";
    }

    // line 122
    public function block_highlighted($context, array $blocks = array())
    {
        // line 123
        echo "            <div class=\"highlighted\">";
        echo $this->env->getExtension('Twig_Extension_Sandbox')->ensureToStringAllowed($this->env->getExtension('Drupal\Core\Template\TwigExtension')->escapeFilter($this->env, $this->getAttribute((isset($context["page"]) ? $context["page"] : null), "highlighted", array()), "html", null, true));
        echo "</div>
          ";
    }

    // line 129
    public function block_help($context, array $blocks = array())
    {
        // line 130
        echo "            ";
        echo $this->env->getExtension('Twig_Extension_Sandbox')->ensureToStringAllowed($this->env->getExtension('Drupal\Core\Template\TwigExtension')->escapeFilter($this->env, $this->getAttribute((isset($context["page"]) ? $context["page"] : null), "help", array()), "html", null, true));
        echo "
          ";
    }

    // line 138
    public function block_sidebar_first($context, array $blocks = array())
    {
        // line 139
        echo "          <aside class=\"col-sm-3\" role=\"complementary\">
            ";
        // line 140
        echo $this->env->getExtension('Twig_Extension_Sandbox')->ensureToStringAllowed($this->env->getExtension('Drupal\Core\Template\TwigExtension')->escapeFilter($this->env, $this->getAttribute((isset($context["page"]) ? $context["page"] : null), "sidebar_first", array()), "html", null, true));
        echo "
          </aside>
        ";
    }

    // line 159
    public function block_content($context, array $blocks = array())
    {
        // line 160
        echo "          <a id=\"main-content\"></a>
          ";
        // line 161
        echo $this->env->getExtension('Twig_Extension_Sandbox')->ensureToStringAllowed($this->env->getExtension('Drupal\Core\Template\TwigExtension')->escapeFilter($this->env, $this->getAttribute((isset($context["page"]) ? $context["page"] : null), "content", array()), "html", null, true));
        echo "
        ";
    }

    // line 167
    public function block_sidebar_second($context, array $blocks = array())
    {
        // line 168
        echo "          <aside class=\"col-sm-3\" role=\"complementary\">
            ";
        // line 169
        echo $this->env->getExtension('Twig_Extension_Sandbox')->ensureToStringAllowed($this->env->getExtension('Drupal\Core\Template\TwigExtension')->escapeFilter($this->env, $this->getAttribute((isset($context["page"]) ? $context["page"] : null), "sidebar_second", array()), "html", null, true));
        echo "
          </aside>
        ";
    }

    // line 178
    public function block_footer($context, array $blocks = array())
    {
        // line 179
        echo "    <footer class=\"footer ";
        echo $this->env->getExtension('Twig_Extension_Sandbox')->ensureToStringAllowed($this->env->getExtension('Drupal\Core\Template\TwigExtension')->escapeFilter($this->env, (isset($context["container"]) ? $context["container"] : null), "html", null, true));
        echo "\" role=\"contentinfo\">
      ";
        // line 180
        echo $this->env->getExtension('Twig_Extension_Sandbox')->ensureToStringAllowed($this->env->getExtension('Drupal\Core\Template\TwigExtension')->escapeFilter($this->env, $this->getAttribute((isset($context["page"]) ? $context["page"] : null), "footer", array()), "html", null, true));
        echo "
    </footer>
  ";
    }

    public function getTemplateName()
    {
        return "themes/eftec/templates/page.html.twig";
    }

    public function isTraitable()
    {
        return false;
    }

    public function getDebugInfo()
    {
        return array (  337 => 180,  332 => 179,  329 => 178,  322 => 169,  319 => 168,  316 => 167,  310 => 161,  307 => 160,  304 => 159,  297 => 140,  294 => 139,  291 => 138,  284 => 130,  281 => 129,  274 => 123,  271 => 122,  265 => 173,  262 => 172,  259 => 167,  256 => 166,  252 => 163,  249 => 159,  241 => 154,  239 => 151,  238 => 150,  237 => 149,  236 => 148,  235 => 147,  232 => 144,  229 => 143,  226 => 138,  223 => 137,  218 => 133,  215 => 132,  212 => 129,  209 => 128,  206 => 126,  203 => 125,  200 => 122,  197 => 121,  190 => 117,  187 => 116,  182 => 107,  178 => 105,  175 => 104,  169 => 101,  166 => 100,  163 => 99,  159 => 96,  150 => 90,  147 => 89,  144 => 88,  140 => 86,  137 => 85,  131 => 83,  129 => 82,  124 => 81,  122 => 78,  121 => 77,  120 => 74,  118 => 73,  115 => 72,  108 => 62,  104 => 60,  101 => 59,  95 => 178,  93 => 177,  90 => 176,  88 => 116,  81 => 110,  77 => 72,  75 => 71,  69 => 66,  66 => 65,  63 => 59,  60 => 58,  57 => 56,  55 => 55,  52 => 54,);
    }

    /** @deprecated since 1.27 (to be removed in 2.0). Use getSourceContext() instead */
    public function getSource()
    {
        @trigger_error('The '.__METHOD__.' method is deprecated since version 1.27 and will be removed in 2.0. Use getSourceContext() instead.', E_USER_DEPRECATED);

        return $this->getSourceContext()->getCode();
    }

    public function getSourceContext()
    {
        return new Twig_Source("", "themes/eftec/templates/page.html.twig", "/Users/mikeshaw/Sites/devdesktop/drupal-8.6.4/themes/eftec/templates/page.html.twig");
    }
}
