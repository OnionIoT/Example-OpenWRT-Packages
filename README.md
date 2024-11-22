# Example OpenWRT Packages for Omega2

## Overview

Welcome to the Example OpenWRT Packages repository for the Omega2 device. This repository contains a collection of sample software packages written in C and Python. These examples are designed to accompany our documentation guides, providing practical source code that demonstrates how to build and package software for OpenWRT on the Omega2.

## Example Packages

### C Packages

#### Hello World C Package

A simple "Hello World" C program designed to demonstrate the basics of packaging a C application for OpenWRT on the Omega2. This package includes a Makefile and serves as an introductory example for building installable packages.

**Repository Path:** `hello-world-c`

#### C Example Package

An example C program that fetches content from a URL using `libcurl`. This package illustrates handling dependencies, using a makefile, and integrating external libraries in your OpenWRT packages.

**Repository Path:** `c-example`

### Python Packages

#### Hello World Python Package

A straightforward Python program that prints "Hello World!" to the console. This package showcases how to package Python applications for OpenWRT, ensuring proper dependency management with `python3-light`.

**Repository Path:** `hello-world-python`

#### Webserver Example Python Package

A more advanced Python web application using the Bottle framework to create a RESTful API and serve a static web interface. This package demonstrates packaging Python web applications with additional dependencies like `python3-bottle`.

**Repository Path:** `webserver-example-python`

## Documentation

Comprehensive guides for building each example package are available in our documentation:

- [C Package Example Guide](https://documentation.onioniot.com/guides/packages/c-package-example)
- [Python Package Example Guide](https://documentation.onioniot.com/guides/packages/python-package-example)

These guides provide step-by-step instructions on setting up the build environment, compiling the packages, and installing them on your Omega2 device.

## License

This repository is licensed under the [MIT License](../LICENSE.md). Feel free to use, modify, and distribute the code as per the license terms.

---

*This repository provides example packages to assist users in understanding and building software for the Omega2 device using OpenWRT.*
