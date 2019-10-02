project('liblocalb', 'cpp')

locala_dep = dependency('locala', fallback: ['locala', 'locala_dep'])

inc = include_directories('include')
liblocalb = static_library('localb',
  'src/b.cpp',
  include_directories: inc,
  dependencies: locala_dep,
  install: true)

localb_dep = declare_dependency(include_directories: inc,
  link_with: liblocalb)
