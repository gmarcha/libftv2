# libftv2

A cleaner libft version, using static and dynamic library (`libft.a` and `libft.so` respectively).

# Usage

- `make all` uses `make ar` and `make so` internally,
- `make ar` links static version,
- `make so` links dynamic version.

- `make install` links dynamic library and installs it to `$INSTALL_DIR` directory (default to `/usr/local/lib/`),
- `make uninstall` removes dynamic library from `$INSTALL_DIR` directory.

- `make clean` removes building files (object and dependency files) and linked libraries,
- `make re` uses `make clean` and `make all` internally.

<!---
Markdown visualiser in VSCode: Ctrl + Shift + V
-->
