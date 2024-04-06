# C++ Project Template

## Building and running

Generate build system (once):

```shell
cmake -B build
```

Build and run project:

```
make -C build
./build/Main
```

## TODO

- [x] Add library
- [x] Set up language server (clangd). Should work for headers.
- [ ] Integrate clangtidy (linter) with cmake and vim.
- [ ] Set up code formatter (clangformat) to run on build
- [ ] Set up vcpkg as a git submodule, in manifest mode. Add dependency on boost
  library.
- [ ] Add tests using GoogleTest


