include $(TOPDIR)/rules.mk

PKG_NAME:=hello-world-c
PKG_RELEASE:=1

include $(INCLUDE_DIR)/package.mk

define Package/hello-world-c
	SECTION:=utils
	CATEGORY:=Utilities
	TITLE:=Hello World Example in C
endef

define Package/hello-world-c/description
	A example c program for OpenWRT.
endef

define Build/Compile
	$(MAKE) -C $(PKG_BUILD_DIR) \
		CC="$(TARGET_CC)" \
		CFLAGS="$(TARGET_CFLAGS)" \
		LDFLAGS="$(TARGET_LDFLAGS)" \
		hello-world-c
endef

define Package/hello-world-c/install
	$(INSTALL_DIR) $(1)/usr/bin
	$(INSTALL_BIN) $(PKG_BUILD_DIR)/hello-world-c $(1)/usr/bin/
endef

$(eval $(call BuildPackage,hello-world-c))
