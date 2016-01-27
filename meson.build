project(
'opplyse',
['vala', 'c']
)

name = 'opplyse'

sources = []

dependencies = []
dependencies += dependency('glib-2.0')
dependencies += dependency('gee-0.8')
dependencies += dependency('gobject-2.0')
dependencies += dependency('gtk+-3.0')

subdir('src')

executable(
name,
sources,
dependencies : dependencies,
)
