# forever

A program that runs forever and does nothing.

It also doesn't take a lot of resources while doing so.

## Compilation

Simply use `make` with the provided Makefile

    make

## Debian package

The source contains `debian/` subdirectory with the meta files
required to create a Debian package with `debuild`.

## Implementation

The program uses a call to `select()` without file descriptors
to sleep indefinitely without taking much ressurces.

`select()` without file descriptor does this, see for example the
following excerpt from the Linux man page for `select()`:

> Some code calls `select()` with all three sets empty, `nfds` zero, and a
> non-`NULL` timeout as a fairly  portable  way  to  sleep with subsecond
> precision.

