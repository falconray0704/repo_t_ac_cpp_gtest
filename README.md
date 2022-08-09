# repo_t_ac_cpp
Template repo for c/cpp with GNU autotools.

## Usage:

### Generate configure script
```bash
$ autoreconfig --install
```

### Configure the project
```bash
$ ./configure --prefix=${PWD}/installDir --enable-debug --enable-static --enable-shared 
```

### Build
```bash
make
```

### Install
```bash
make install
```

### Build release package
```bash
make dist
```

