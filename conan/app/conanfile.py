from conans import CMake, ConanFile, tools

class App(ConanFile):
    name = "app"
    version = "0.1"
    license = "MIT"
    settings = []
    generators = "cmake"
    requires = [
        "component-a/0.1@user/testing",
        "component-b/0.1@user/testing"
    ]

    def build(self):
        cmake = CMake(self)
        cmake.configure(source_folder="src")
        cmake.build()
    
    def package(self):
        self.copy("app", dst="bin", keep_path=False)