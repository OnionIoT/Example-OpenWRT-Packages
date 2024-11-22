# hello-world-python Package for Omega2

## Overview

This package contains a simple Python program named `hello-world-python` designed for the Omega2 device. The program prints "Hello World!" to the console. It serves as an example of how to package a Python application for OpenWRT on the Omega2, demonstrating the basics of creating an installable package that can be managed using the `opkg` package manager.

## Package Makefile

The build and installation process is defined in the package Makefile. Since the program does not include its own Makefile, the package Makefile handles the integration with OpenWRT's build system. Here's a brief overview of the key sections:

- **Package Definition**: Sets the package name, section, category, title, and specifies dependencies (in this case, `python3-light`).
- **Build Instructions**: Specifies that there is nothing to compile for this Python program.
- **Installation Instructions**: Defines where to install the Python script on the Omega2 device.

## Building the Package

To build this package and create an installable `.ipk` file, follow the [Python Package Example guide in the new Onion Documentation](https://documentation.onioniot.com/guides/packages/python-package-example). 

The guide provides step-by-step instructions on:
1. Setting up a Docker-based OpenWRT build environment 
1. Compiling the package
1. Transferring the compiled package binary to your Omega device
1. Installing the package using the OPKG package manager
1. Running the program

## Usage

Once installed, you can run the program by simply typing:

```bash
hello-world-python
```

You should see the following output:

```
Hello World!
```

## Dependencies

This package depends on `python3-light`. The dependency is specified in the package Makefile, ensuring that Python is installed when this package is installed. This is essential because the program is a Python script and requires Python to run.

## License

This project is licensed under the [MIT License](../LICENSE.md).

## Additional Resources

- **Onion Omega2 Documentation**: [https://documentation.onioniot.com/](https://documentation.onioniot.com/)
- **OpenWRT Package Development Guide**: [OpenWRT Wiki](https://openwrt.org/docs/guide-developer/packages)
- **Python Package Example Guide**: [https://documentation.onioniot.com/guides/packages/python-package-example](https://documentation.onioniot.com/guides/packages/python-package-example)

## Contributing

Contributions are welcome! Please open an issue or submit a pull request on the GitHub repository.

---

*This README was generated to assist users in understanding and building the hello-world-python package for the Omega2 device.*
