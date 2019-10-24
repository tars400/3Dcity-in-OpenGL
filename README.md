# 3Dcity-in-OpenGL

The main idea of this project is to design a 3D City using openGL. The project simulates 
the 3D art of the city. This city includes objects like buildings, houses, roads etc. These 
objects together comes to form a real like city. It includes a 3D view of the city and we 
can move through the city. This creates a virtual environment of the city and enables us 
move freely through the city helping user and architects to view in every dimention.

### Installation and Execution

#### Instructions for Ubuntu
Install the dependencies

```sh
$ sudo apt-get install freeglut3-dev
```

Compiling and executing the program once freeglut3-dev is installed

```sh
$ g++ gl.cpp -lGL -lGLU -lglut
$ ./a.out
```

### Movements

| Key(s) | Action |
| ------ | ------ |
| W, A, S, D, Y, H | Move the view |
| T, G | Rotate the view |
| P | Reset the view | 
