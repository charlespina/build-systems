project('liblocala', 'cpp',
    default_options: 'cpp_std=c++17')

inc = include_directories('include')
liblocala = static_library('locala',
  'src/a.cpp',
  include_directories: inc,
  install: true)

locala_dep = declare_dependency(include_directories: inc,
  link_with: liblocala)

catch2_dep = dependency('catch2', fallback: ['catch2', 'catch2_dep'])

testexe = executable('unit_test', 'test/test.cpp', dependencies: [locala_dep, catch2_dep])

test('unit tests (locala)', testexe)