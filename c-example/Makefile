## sample package makefile for a C program

include $(TOPDIR)/rules.mk

# set the package name
PKG_NAME:=c-example
# set package version info
PKG_VERSION:=1.0
PKG_RELEASE:=1

include $(INCLUDE_DIR)/package.mk

# general package definition
#   the DEPENDS line determines the dependencies of the package
#   OPKG will try to install the dependencies when installing this pacakge
define Package/$(PKG_NAME)
	SECTION:=utils
	CATEGORY:=Utilities
	TITLE:=curl Example in C using libcurl 
	DEPENDS:=+libcurl
endef

define Package/$(PKG_NAME)/description
	A simple  C program for OpenWRT that fetches content from a URL using libcurl.
endef


TARGET_CFLAGS += $(FPIC)
# define which libraries to include when compiling the C program
TARGET_LIB += -lcurl

define Build/Compile
	$(MAKE) -C $(PKG_BUILD_DIR) \
	CC="$(TARGET_CC)" \
	CFLAGS="$(TARGET_CFLAGS)" \
	LDFLAGS="$(TARGET_LDFLAGS)" \
	LIB="$(TARGET_LIB)"
endef

# package installation instructions
#   the source makefile generates an executable named main
#   on the device it will be installed at /usr/bin/c-example
define Package/$(PKG_NAME)/install
	$(INSTALL_DIR) $(1)/usr/bin
	$(INSTALL_BIN) $(PKG_BUILD_DIR)/main $(1)/usr/bin/c-example
endef

# required command 
$(eval $(call BuildPackage,$(PKG_NAME)))
