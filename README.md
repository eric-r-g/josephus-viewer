# josephus-viewer
A visual solver for the Josephus Problem designed to demonstrate 
the step-by-step progress of the algorithm for small instances.

## Project Description
This project implements a Josephus problem solver paired with an interactive viewer. 
The main objective is to provide a clear, visual representation of how the algorithm 
works in real-time, making it an excellent educational tool.

## file struct
Before compiling the project, you need to create a build directory and execute 
all compilation commands inside it to keep the root directory clean.

> mkdir build
> cd build

## how to compile and execite
Follow the steps below based on your operating system. Make sure you have CMake 
and a compatible compiler (like GCC, Clang, or MSVC) installed.

inside the build directory, run:
> cmake .. -G "Unix Makefiles"

next, compile the binary using:
> make

After a successful compilation, you can run the executable:
in Linux/macOS:
> ./JosephusProblem

in Windows:
> JosephusProblem.exe