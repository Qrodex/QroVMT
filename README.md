
# QroDev
A C Library for building QroOS programs, Based on [MikeOS-CLib](https://github.com/ZeroKelvinKeyboard/MikeOS-CLib).

## Requirements
- Smaller C Compiler
- Netwide Assembler
- QroOS 5.1 (Or Later)

## Building
QroDev only supports Linux at the moment. To build your programs, run  `make (name).bin`  to build. (e.g. for 'foo.c' run  `make foo.bin`). And a QroOS binary app will be produced.

## Examples
The `QroVMT.c` file contains the basics of making a QroOS program. While other examples can be found in [MikeOS-CLib](https://github.com/ZeroKelvinKeyboard/MikeOS-CLib).