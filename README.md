
# DeviceDriverDemo

## Project Overview
This C++ project demonstrates a simple device driver abstraction using object-oriented programming principles. The goal is to showcase the flexibility and power of C++ for hardware abstraction by simulating device drivers, such as keyboards and mice, in a way that makes adding new devices simple and maintainable.

The project is built with the following core features:
- **Polymorphism:** The `Device` abstract class is the base for all devices. Each specific device (like `Keyboard` and `Mouse`) overrides its virtual methods for initialization and data reading.
- **Extensibility:** New devices can be added by simply subclassing the `Device` class and implementing its pure virtual methods.
- **Simplicity:** A function `setupDevice()` abstracts the initialization and data reading operations, demonstrating how dynamic dispatch can be used to handle different device types at runtime.

## Table of Contents
1. [Project Overview](#project-overview)
2. [Project Structure](#project-structure)
3. [How to Build](#how-to-build)
4. [How to Run](#how-to-run)
5. [Future Enhancements](#future-enhancements)
6. [License](#license)

## Project Structure
```
DeviceDriverDemo/
├── src/
│   └── main.cpp       # Main C++ source code
├── CMakeLists.txt      # CMake configuration file (if using CMake)
├── .gitignore          # Git ignore file for C++/CLion projects
└── README.md           # Project documentation
```

### main.cpp
The main source file where the `Device` class and its derived classes `Keyboard` and `Mouse` are implemented. It demonstrates:
- The use of abstract base classes.
- The initialization of devices.
- Polymorphism through virtual functions and dynamic dispatch.

## How to Build
To compile and run this project locally, follow these steps:

1. **Ensure you have a C++ compiler installed** (e.g., g++, clang).
2. **Open the project in CLion** or use a terminal/command prompt for manual builds.
3. If using CLion, simply click on the **Build** button.

### Manual Compilation (Command Line):
If you're not using an IDE like CLion, you can compile the project using g++:

```bash
g++ src/main.cpp -o DeviceDriverDemo
```

### CMake Build (Optional):
If you want to set up CMake:
1. Create a `CMakeLists.txt` file and configure your project (optional).
2. Use the following CMake commands:
    ```bash
    mkdir build
    cd build
    cmake ..
    make
    ```

## How to Run
To run the compiled executable:
```bash
./DeviceDriverDemo
```
This will initialize and simulate interactions with the `Keyboard` and `Mouse` devices.

## Future Enhancements
Some of the potential future enhancements for this project include:
1. **Additional Devices:** Adding more types of devices, such as printers, monitors, and network interfaces, to further demonstrate extensibility.
2. **Error Handling:** Implementing more robust error handling for device initialization and data reading.
3. **Device Manager Class:** Creating a manager class to handle multiple devices, including connection and disconnection events.
4. **Unit Tests:** Add unit tests for device functionality using a testing framework like Google Test.
5. **Real Device Simulation:** Extend the project to interact with actual hardware, using OS-level APIs for real device drivers.
6. **Configuration Files:** Adding support for reading device configurations from a file to enhance scalability.

## License
This project is licensed under the **MIT License**. All rights reserved by Jerry Tan.

**Copyright 2024 Jerry Tan**
