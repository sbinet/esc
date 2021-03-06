import sys, os

extensions = ['sphinx.ext.autodoc', 'sphinx.ext.doctest',
              'sphinx.ext.intersphinx', 'sphinx.ext.todo',
              'sphinx.ext.ifconfig', 'sphinx.ext.inheritance_diagram',
              'sphinx.ext.viewcode']
templates_path = ['_templates']
source_suffix = '.rst'
source_encoding = 'utf-8'
master_doc = 'index'
project = 'ESC exercises'
copyright = 'Fermilab, CERN, Princeton University'
version = '2012'
release = '2012'
today_fmt = '%B %d, %Y'
#unused_docs = []
#exclude_trees = []
#default_role = None
add_function_parentheses = True
add_module_names = True
show_authors = True
pygments_style = 'sphinx'
#modindex_common_prefix = []

autoclass_content = 'both'

html_theme = 'nature'
#html_theme_options = {}
#html_theme_path = []
html_title = "ESC12 exercises"
#html_short_title = None
#html_logo = None
#html_favicon = None
#html_static_path = ['_static']
html_last_updated_fmt = '%b %d, %Y'
#html_use_smartypants = True
#html_sidebars = {}
#html_additional_pages = {}
#html_use_modindex = True
#html_use_index = True
#html_split_index = False
html_show_sourcelink = False
#html_use_opensearch = ''
#html_file_suffix = ''
htmlhelp_basename = 'doc'

latex_paper_size = 'a4'
#latex_font_size = '10pt'
# (source start file, target name, title, author, documentclass [howto/manual]).
latex_documents = [
  ('index', 'ESC.tex', u'ESC12 Exercises',
   u'Lassi Tuura', 'manual'),
]

#latex_logo = None
#latex_use_parts = False
#latex_preamble = ''
#latex_appendices = []
#latex_use_modindex = True

# Example configuration for intersphinx: refer to the Python standard library.
intersphinx_mapping = {'http://docs.python.org/': None}
