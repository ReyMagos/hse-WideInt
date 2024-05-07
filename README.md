# hse-WideInt

Implementation of arbitary precision arithmetic written in C++

## Build

Tools: `cmake>=3.28`, `clang>=16`, `ninja>=1.11`

```bash
git clone https://github.com/ReyMagos/hse-WideInt.git
cd hse-WideInt

mkdir build
cmake . -B ./build -G Ninja

cmake --build ./build --target <target>
```

Targets:

* `WideInt` - Library target
* `WideInt-CLI` - Command-line interface to interact with library
* `WideInt-Test` - GTest testing suite
* `WideInt-PI` - Calculate PI

Options:

* `-DCMAKE_BUILD_TYPE=[Debug|Release]` - specify build type.

<br>

---
_Potapov Andrey @ HSE Software Engineering 2024_
