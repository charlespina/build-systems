dependencies:
pip3 install meson
brew install ninja

building everything:
meson build
cd build
ninja

run tests:
ninja test
