# hello-app-sample
Hello app to invoke [wangyoucao577/hello-sdk-sample](https://github.com/wangyoucao577/hello-sdk-sample) for trying out [Conan, the C/C++ Package Manager](https://conan.io/) and [GitVersion](https://gitversion.net/).     

## Local Development
### Prerequisites
- latest [conan](https://docs.conan.io/en/latest/installation.html)      
- latest [cmake](https://cmake.org/)
- latest `C/C++` compiler on your platform:          
  - `g++` on `linux`
  - `clang` on `macosx`
  - `visual studio` on `windows`      
- install my conan repo    
`conan remote add my-conan-repo https://wangyoucao577.jfrog.io/artifactory/api/conan/test-conan-local`

### Build
```bash
$ mkdir -p build 
$ cd build 
$ 
$ # install dependencies, build it on the fly if the binary package doesn't exist
$ conan install .. --build=missing
$ 
$ cmake ../src/
$ cmake --build . 
$ ./bin/helloapp
```

