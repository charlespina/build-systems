project('hello')

locala_dep = dependency('locala', fallback: ['locala', 'locala_dep'])
localb_dep = dependency('localb', fallback: ['localb', 'localb_dep'])

exe = executable('hello', 'main.cpp', dependencies: [locala_dep, localb_dep])

test('app runs', exe)
