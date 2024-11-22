# webserver-example-python Package for Omega2

## Overview

This package contains a simple Python web application named `webserver-example-python` designed for the Omega2 device. The program utilizes the Bottle framework to create a RESTful API and serve a static web interface. It serves as an example of how to package a Python web application for OpenWRT on the Omega2, demonstrating the basics of creating an installable package that can be managed using the `opkg` package manager.

## Package Makefile

The build and installation process is defined in the package Makefile. Since the program does not include its own Makefile, the package Makefile handles the integration with OpenWRT's build system by defining the package to be built. Here's a brief overview of the key sections:

- **Package Definition**: Sets the package name, section, category, title, and specifies dependencies (in this case, `python3-light` and `python3-bottle`).
- **Build Instructions**: Specifies that there is nothing to compile for this Python program.
- **Installation Instructions**: Defines where to install the Python script and supporting static files on the Omega2 device.

## Building the Package

To build this package and create an installable `.ipk` file, follow the [Python Package Example guide in the new Onion Documentation](https://documentation.onioniot.com/guides/packages/python-package-example). 

The guide provides step-by-step instructions on:
1. Setting up a Docker-based OpenWRT build environment 
1. Compiling the package
1. Transferring the compiled package binary to your Omega device
1. Installing the package using the OPKG package manager
1. Running the program

> The guide is focused on the `hello-word-python` package, but the same steps apply for the `webserver-example-python` Package

## Usage

Once installed, you can run the web application by simply typing:

```bash
webserver-example-python
```

This will start the web server on port `5000`. You can access the web interface by navigating to `http://<Omega2_IP>:5000/` in your web browser. Replace `<Omega2_IP>` with the actual IP address of your Omega2 device.

### Example:

1. **Start the Web Server:**

    ```bash
    webserver-example-python
    ```

2. **Access the Web Interface:**

    Open your web browser and go to `http://192.168.1.100:5000/` (replace `192.168.1.100` with your Omega2's IP address).

3. **Interact with the Application:**

    - View the current message.
    - Update the message using the input field and button provided in the web interface.

## Dependencies

This package depends on `python3-light` and `python3-bottle`. The dependencies are specified in the package Makefile, ensuring that Python and the Bottle framework are installed when this package is installed. This is essential because the program is a Python script that relies on the Bottle library to function correctly.

## License

This project is licensed under the [MIT License](../LICENSE.md).

## Additional Resources

- **Onion Omega2 Documentation**: [https://documentation.onioniot.com/](https://documentation.onioniot.com/)
- **OpenWRT Package Development Guide**: [OpenWRT Wiki](https://openwrt.org/docs/guide-developer/packages)
- **Python Package Example Guide**: [https://documentation.onioniot.com/guides/packages/python-package-example](https://documentation.onioniot.com/guides/packages/python-package-example)

## Contributing

Contributions are welcome! Please open an issue or submit a pull request on the GitHub repository.

---

*This README was generated to assist users in understanding and building the webserver-example-python package for the Omega2 device.*
