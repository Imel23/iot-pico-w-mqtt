# IoT Pico W MQTT Project

A Zephyr RTOS-based IoT project for the Raspberry Pi Pico W microcontroller. This project demonstrates embedded IoT capabilities using the Zephyr real-time operating system on the RP2040-based Pico W platform.

## Overview

This project showcases how to build IoT applications on the Raspberry Pi Pico W using Zephyr RTOS. The current implementation includes basic GPIO control for LED blinking, with planned expansion to include MQTT connectivity for IoT communication.

## Features

- Zephyr RTOS running on Raspberry Pi Pico W
- GPIO control for onboard LED
- Structured for IoT application development
- Built with Zephyr's robust device drivers and kernel

## Requirements

- Raspberry Pi Pico W
- Zephyr RTOS development environment
- CMake build system
- ARM GCC toolchain

## Building and Flashing

The project uses the standard Zephyr build system. To build:

```
west build -b rpi_pico_w hello_world
```

To flash to the Raspberry Pi Pico W:

```
west flash
```

## Project Structure

- `hello_world/` - Main application directory
  - `src/` - Source code
  - `CMakeLists.txt` - CMake build configuration
  - `prj.conf` - Zephyr project configuration

## License

See the [LICENSE](LICENSE) file for details.
