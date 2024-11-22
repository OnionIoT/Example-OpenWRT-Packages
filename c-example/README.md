# c-example Package for Omega2

## Overview

This package contains a simple C program named `c-example` designed for the Omega2 device. The program, which includes its own Makefile, fetches content from a specified URL using `libcurl`. It serves as an example of how to package a C application that has dependencies for OpenWRT on the Omega2, demonstrating the basics of creating an installable package that can be managed using the `opkg` package manager.

## Package Makefile

The build and installation process is defined in the package Makefile. Since the program includes its own Makefile, the package Makefile handles the integration with OpenWRT's build system. Here's a brief overview of the key sections:

- **Package Definition**: Sets the package name, section, category, title, and specifies dependencies (in this case, `libcurl`).
- **Build Instructions**: Specifies how to compile the program using the OpenWRT toolchain.
- **Installation Instructions**: Defines where to install the compiled binary on the Omega2 device.

## Building the Package

To build this package and create an installable `.ipk` file, follow the [C Package Example guide in the new Onion Documentation](https://documentation.onioniot.com/guides/packages/c-package-example). 

The guide provides step-by-step instructions on:
1. Setting up a Docker-based OpenWRT build environment 
1. Compiling the package
1. Transferring the compiled package binary to your Omega device
1. Installing the package using the OPKG package manager
1. Running the program

> The guide is focused on the `c-example` package, but the same steps apply for the `hello-word-c` Package

## Usage

Once installed, you can run the program by simply typing:

```bash
c-example
```

The program will fetch content from the URL `https://dummyapi.online/api/todos/2` using `libcurl` and display the response.

## Dependencies

This package depends on `libcurl`. The dependency is specified in the package Makefile, and `opkg` will automatically handle the installation of this dependency when installing the package.

Additionally, during the compilation stage, the C compiler needs to link against the `libcurl` library. This is specified in the package Makefile with the `TARGET_LIB += -lcurl` line, which is passed to the source code Makefile to ensure the compiler includes the `libcurl` library during the build process.

## License

This project is licensed under the [MIT License](../LICENSE.md).

## Additional Resources

- **Onion Omega2 Documentation**: [https://documentation.onioniot.com/](https://documentation.onioniot.com/)
- **OpenWRT Package Development Guide**: [OpenWRT Wiki](https://openwrt.org/docs/guide-developer/packages)

## Contributing

Contributions are welcome! Please open an issue or submit a pull request on the GitHub repository.

---

*This README was generated to assist users in understanding and building the c-example package for the Omega2 device.*
