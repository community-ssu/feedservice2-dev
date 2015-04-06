SRC = ./
DESTDIR =
INCLUDEDIR = $(DESTDIR)/usr/include/facebook
PKGCONFIGDIR = $(DESTDIR)/usr/lib/pkgconfig
LIBDIR = $(DESTDIR)/usr/lib

INSTALL = install
INSTALL_PROGRAM = $(INSTALL)

INSTALL_INCLUDES = include/facebook/feedserviceutils2.h
INSTALL_PKGCONFIG = feedservice2.pc
INSTALL_LIBS = libfeedserviceutils2.so.0.0.0

libfeedserviceutils2.so.0.0.0: feedservice2.c
	$(CC) $(CPPFLAGS) $(CFLAGS) $(LDFLAGS) $(shell pkg-config --cflags --libs glib-2.0 conic) -fPIC -O2 -shared $^ -o $@

all:

install:
	$(INSTALL_PROGRAM) -d $(INCLUDEDIR)
	$(INSTALL_PROGRAM) -m644 $(INSTALL_INCLUDES) $(INCLUDEDIR)
	$(INSTALL_PROGRAM) -d $(PKGCONFIGDIR)
	$(INSTALL_PROGRAM) -m644 $(INSTALL_PKGCONFIG) $(PKGCONFIGDIR)
	$(INSTALL_PROGRAM) -d $(LIBDIR)
	$(INSTALL_PROGRAM) -m644 $(INSTALL_LIBS) $(LIBDIR)

clean:
	$(RM) *.o *~ libfeedserviceutils2.so.0.0.0
