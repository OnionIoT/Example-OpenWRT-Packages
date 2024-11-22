## sample package makefile for a Python program

include $(TOPDIR)/rules.mk

# set the package name
PKG_NAME:=webserver-example-python
# set package version info
PKG_VERSION:=1.0
PKG_RELEASE:=1

PKG_BUILD_DEPENDS:=python3

include $(INCLUDE_DIR)/package.mk
$(call include_mk, python3-package.mk)

# general package definition
#   the DEPENDS line determines the dependencies of the package
#   OPKG will try to install the dependencies when installing this pacakge
# Python programs should depend on python3-light - that makes sure python is installed as well
define Package/$(PKG_NAME)
	SECTION:=utils
	CATEGORY:=Utilities
	TITLE:=An example Python webapp for OpenWRT.
	DEPENDS:=+python3-light +python3-bottle
endef

define Package/$(PKG_NAME)/description
	A simple Python Web App for OpenWRT.
endef

define Build/Compile
# Nothing to compile
endef

# package installation instructions
#   on the device it will be installed at /usr/bin/
define Package/$(PKG_NAME)/install
	$(INSTALL_DIR) $(1)/usr/bin
	$(INSTALL_BIN) $(PKG_BUILD_DIR)/main.py $(1)/usr/bin/$(PKG_NAME)

	# Install supporting files or libraries to /usr/lib/
	$(INSTALL_DIR) $(1)/usr/lib/$(PKG_NAME)
	$(CP) $(PKG_BUILD_DIR)/static/* $(1)/usr/lib/$(PKG_NAME)/

endef

# required command 
$(eval $(call BuildPackage,$(PKG_NAME)))
