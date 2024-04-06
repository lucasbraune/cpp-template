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
## LLVM tools

This project uses `clang-format`, which can be installed on MacOS as follows:

```shell
brew install llvm
ln -s "$(brew --prefix llvm)/bin/clang-format" "/usr/local/bin/clang-format"
ln -s "$(brew --prefix llvm)/bin/git-clang-format" "/usr/local/bin/git-clang-format"
```

To reformat all source files, run

```shell
clang-format -i src/*
```

## TODO

- [x] Add library
- [x] Set up language server (clangd). Should work for headers.
- [ ] Integrate clangtidy (linter) with cmake and vim.
- [ ] Set up code formatter (clangformat) to run on build
- [ ] Set up vcpkg as a git submodule, in manifest mode. Add dependency on boost
  library.
- [ ] Add tests using GoogleTest


