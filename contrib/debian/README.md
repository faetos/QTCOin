
Debian
====================
This directory contains files used to package quirkyturtcoind/quirkyturtcoin-qt
for Debian-based Linux systems. If you compile quirkyturtcoind/quirkyturtcoin-qt yourself, there are some useful files here.

## quirkyturtcoin: URI support ##


quirkyturtcoin-qt.desktop  (Gnome / Open Desktop)
To install:

	sudo desktop-file-install quirkyturtcoin-qt.desktop
	sudo update-desktop-database

If you build yourself, you will either need to modify the paths in
the .desktop file or copy or symlink your quirkyturtcoin-qt binary to `/usr/bin`
and the `../../share/pixmaps/quirkyturtcoin128.png` to `/usr/share/pixmaps`

quirkyturtcoin-qt.protocol (KDE)

