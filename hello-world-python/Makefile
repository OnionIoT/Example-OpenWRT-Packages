## sample package makefile for a Python program

include $(TOPDIR)/rules.mk

# set the package name
PKG_NAME:=hello-world-python
# set package version info
PKG_VERSION:=1.0
PKG_RELEASE:=1


include $(INCLUDE_DIR)/package.mk
$(call include_mk, python3-package.mk)

# general package definition
#   the DEPENDS line determines the dependencies of the package
#   OPKG will try to install the dependencies when installing this pacakge
# Python programs should depend on python3-light - that makes sure python is installed as well
define Package/$(PKG_NAME)
	SECTION:=utils
	CATEGORY:=Utilities
	TITLE:=An example Python program for OpenWRT.
	DEPENDS:=+python3-light
endef

define Package/$(PKG_NAME)/description
	A simple Python program for OpenWRT.
endef


define Build/Compile
# Nothing to compile
endef

# package installation instructions
#   on the device it will be installed at /usr/bin/
define Package/$(PKG_NAME)/install
	$(INSTALL_DIR) $(1)/usr/bin
	$(INSTALL_BIN) $(PKG_BUILD_DIR)/main.py $(1)/usr/bin/$(PKG_NAME)
endef

# required command 
$(eval $(call BuildPackage,$(PKG_NAME)))
