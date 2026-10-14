# Nombre del proyecto

Breve descripción del proyecto y de su objetivo principal.

## 📋 Índice

- [Descripción](#-descripción)
- [Estructura del proyecto](#-estructura-del-proyecto)
- [Requisitos](#-requisitos)
- [Compilación](#-compilación)
- [Ejecución](#-ejecución)
- [Autor](#-autor)
- [Licencia](#-licencia)

## 📖 Descripción

Describe el propósito del proyecto, su funcionamiento y las funcionalidades principales.

## 📁 Estructura del proyecto

proyecto/ ├── README.md ├── src/ │ └── main.cpp ├── include/ │ └── funciones.hpp ├── build/ ├── CMakeLists.txt └── Makefile


## ⚙️ Requisitos

- Compilador de C++ (GCC/G++).
- GNU Make.
- CMake (opcional, si se utiliza).
- Sistema operativo compatible.

## 🔨 Compilación

### Con Make

make


### Con CMake

cmake -S . -B build cmake --build build


## ▶️ Ejecución

Si el ejecutable se encuentra en el directorio `build/`:

./build/programa


Ajusta la ruta según la configuración del proyecto.

## 👤 Autor

- **Nombre:** Tu nombre
- **GitHub:** [Tu perfil](https://github.com/tu-usuario)

## 📄 Licencia

Este proyecto se distribuye bajo la licencia MIT.
Consulta el archivo `LICENSE` para obtener más información.
