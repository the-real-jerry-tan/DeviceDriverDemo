/**
 * © 2024 Jerry Tan. All Rights Reserved.
 *
 * This software is the confidential and proprietary information of Jerry Tan
 * ("Confidential Information"). You shall not disclose such Confidential Information
 * and shall use it only in accordance with the terms under which this software
 * was distributed or otherwise published, and solely for the prior express purposes
 * explicitly communicated and agreed upon, and only for those specific permissible purposes.
 *
 * This software is provided "AS IS," without a warranty of any kind. All express or implied
 * conditions, representations, and warranties, including any implied warranty of merchantability,
 * fitness for a particular purpose, or non-infringement, are disclaimed, except to the extent
 * that such disclaimers are held to be legally invalid.
 *
 * * This source file is part of the Device Driver Demo project.
 */

#include <iostream>

class Device {
public:
    // Virtual method for initializing the device
    virtual void initialize() = 0;
    
    // Virtual method for reading data from the device
    virtual void readData() = 0;

    // Virtual destructor to ensure proper cleanup of derived objects
    virtual ~Device() = default;
};

class Keyboard : public Device {
public:
    // Initialize the keyboard
    void initialize() override {
        std::cout << "Initializing Keyboard..." << std::endl;
    }
    
    // Read data from the keyboard
    void readData() override {
        std::cout << "Reading keyboard data..." << std::endl;
    }
};

class Mouse : public Device {
public:
    // Initialize the mouse
    void initialize() override {
        std::cout << "Initializing Mouse..." << std::endl;
    }

    // Read data from the mouse
    void readData() override {
        std::cout << "Reading mouse data..." << std::endl;
    }
};

// Helper function to set up and interact with a device
void setupDevice(Device* device) {
    device->initialize();  // Call the initialize method (polymorphism in action)
    device->readData();    // Call the read data method (dynamic dispatch)
}

int main() {
    // Create Keyboard and Mouse objects
    Keyboard keyboard;
    Mouse mouse;

    // Setup the devices using the helper function
    setupDevice(&keyboard);  // Works with the Keyboard object
    setupDevice(&mouse);     // Works with the Mouse object

    return 0;  // Indicate that the program ended successfully
}
