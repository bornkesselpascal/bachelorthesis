# TestSuite

This folder contains the source code of the TestSuite. Version **7c120a0** is included for the **Performance Tests** and version **ada68a3** for the **Reliability Tests**. Both versions are built on the same basis, but are adapted to the requirements of the respective tests.

The TestSuite was created with C++ 20 and the Qt Creator IDE. Only the operating system 'Linux' is supported.


## Folder Structure
The subfolders of both versions have the same structure. A description of the structure can be found below.

- **config** – XML configuration files *('Client Description' and 'Server Description')*
    - **creator** – Contains Python scripts to automatically create the XML configuration files
    - **samples** – Contains examples for the XML configuration files

- **src** – Source code of the TestSuite and the used libraries (pugixml and uCE)


## Build Process
The TestSuite is using CMake as build system, which allows an easy build and link.

1. Install the required software
    1. gcc 11.4.0 or newer
    2. CMake 3.5 or newer (see [cmake.org](https://cmake.org))
2. Build with CMake (`cmake --build .`)

When using certain features (like stress generation and system log) of the TestSuite, additional software is required.

3. Install additional software
    1. stress-ng 0.14.03
    2. nmon


## Libraries
The TestSuite uses the libraires pugixml and uCE (only Version 7c120a0).

### pugixml
[pugixml](https://github.com/zeux/pugixml) is used for creating and processing XML files. It is available under *MIT License*.

````
Copyright (c) 2006-2023 Arseny Kapoulkine

Permission is hereby granted, free of charge, to any person obtaining a copy of this software and associated documentation files (the “Software”), to deal in the Software without restriction, including without limitation the rights to use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of the Software, and to permit persons to whom the Software is furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED “AS IS”, WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
````

### uCE
uCE is a self-created library as a socket abstraction layer for sending UDP packets with UDP, RAW and PACKET sockets.


## Documentation
A complete documentation of the software is currently not available. The software was created to be as comprehensible as possible. Comments have been inserted at certain points. A description of the TestSuite concept can be found in Chapter 3.3 of the Bachelor's thesis.