# C++ Project Template

## Building and running

Generate build system (once):

Initialize vcpkg submodule and generate build system (once):

```shell
# Initialize vcpkg submodule
git submodule update --init
# Generate build system
cmake -B build
```

Build the project:

```shell
make -C build
```

This regenerates the build system and downloads dependencies if necessary.

Run executables:

```shell
./build/main
./build/main2
```

## LLVM tools

This project uses `clang-tidy` and `clang-format`, which can be installed on MacOS as follows:

```shell
brew install llvm
ln -s "$(brew --prefix llvm)/bin/clang-format" "/usr/local/bin/clang-format"
ln -s "$(brew --prefix llvm)/bin/git-clang-format" "/usr/local/bin/git-clang-format"
ln -s "$(brew --prefix llvm)/bin/clang-tidy" "/usr/local/bin/clang-tidy"
```

To reformat all source files, run

```shell
clang-format -i src/*
```

The build process runs `clang-tidy` with the appropriate options. Unfortunately,
running `clang-tidy src/* -p build` yields errors.

## TODO

- [x] Add library
- [x] Set up language server (clangd). Should work for headers.
- [x] Integrate clangtidy (linter) with cmake ~~and vim~~.
- [x] Set up code formatter (clangformat) to run on build
- [x] Set up vcpkg as a git submodule, in manifest mode. Add dependency on boost
  library.
- [ ] Add tests using GoogleTest


