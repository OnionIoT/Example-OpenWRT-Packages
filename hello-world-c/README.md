# Hello World C Package for Omega2

## Overview

This package contains a simple "Hello World" C program designed for the Omega2 device. It serves as an example of how to package a simple C application without a makefile for OpenWRT on the Omega2, demonstrating the basics of creating an installable package that can be managed using the `opkg` package manager.

## Package Makefile

The build and installation process is defined in the package Makefile. Since the program doesn't include its own Makefile, the package Makefile handles the compilation using OpenWrt's build system. Here's a brief overview of the key sections:

- **Package Definition**: Sets the package name, section, category, and title.
- **Build Instructions**: Specifies how to compile the program using the OpenWrt toolchain.
- **Installation Instructions**: Defines where to install the compiled binary on the Omega2 device.

## Building the Package

To build this package and create an installable `.ipk` file, follow the [C Package Example guide in the new Onion Documentation](https://documentation.onioniot.com/guides/packages/c-package-example). 

The guide provides step-by-step instructions on:
1. Setting up a Docker-based OpenWRT build environment 
1. Compiling the package
1. Transferring the compiled package binary to your Omega device
1. Installing the package using the OPKG package manager
1. Running the program

## Usage

Once installed, you can run the program by simply typing:

```bash
hello-world-c
```

You should see the following output:

```
Hello, Omega2!
```

## License

This project is licensed under the [MIT License]../LICENSE.md).


## Additional Resources

- **Onion Omega2 Documentation**: [https://documentation.onioniot.com/](https://documentation.onioniot.com/)
- **OpenWrt Package Development Guide**: [OpenWrt Wiki](https://openwrt.org/docs/guide-developer/packages)

## Contributing

Contributions are welcome! Please open an issue or submit a pull request on the GitHub repository.

---

*This README was generated to assist users in understanding and building the Hello World C package for the Omega2 device.*
