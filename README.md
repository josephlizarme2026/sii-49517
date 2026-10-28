# Nombre del proyecto

Juego del pang.

## 📋 Índice

- [Descripción](#-descripción)
- [Actualizaciones](#-actualizaciones)
- [Estructura del proyecto](#-estructura-del-proyecto)
- [Requisitos](#-requisitos)
- [Compilación](#-compilación)
- [Ejecución](#-ejecución)
- [Autor](#-autor)
- [Licencia](#-licencia)

## 📖 Descripción

Implementacion del juego del pang, mejorandolo en cada practica, añadiendo nuevas funcionalidades. El juego de pang consiste en que se controlan unas raquetas representadas con rectangulos para hacer rebotar pelota representada por una esfera. De tal forma que si el jugador no es capaz de golpear la pelota con la raqueta pierde un punto.

## 📖 Actualizaciones

-Se crea escenario
-Se añade dinamica entre objetos del escenario en concreto rebote raqueta pelota
-Se crea un logger que registre los puntos y se cierra el programa cuando se algun jugador llega a los tres puntos

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
