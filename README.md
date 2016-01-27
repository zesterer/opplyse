# Opplyse

A clean, efficient GTK3 text editor for programmers. The big brother of Vulcan.

## What is Opplyse?

Opplyse is a text editor created with C++ and GTK 3. It is designed to be clean but capable in design while being quick and efficient in operation. It is total redesign of the original Vulcan text editor (https://github.com/zesterer/vulcan).

## What can Opplyse do?

Here's the planned / implemented feature list. Implemented features are denoted with a '✔', incomplete features are denoted with a '~' and absent features are denoted with a '✘'.

```
[✘] Multi-file editing
[✘] Edit detection
[✘] Basic theming / configuration
[✘] Smooth, animated UI
[✘] Keyboard shortcuts for quick access to functionality
[✘] Syntax highlighting
[✘] Built-in VTE Terminal
[✘] Line numbering
[✘] Plugin support
```

## Why recreate Vulcan?

Vulcan's codebase became increasingly untidy and difficult to maintain. I decided that, since the project had been inactive for a number of months anyway, I should redesign and rebuild Vulcan in the same style as the original.

## How do I get a copy of Opplyse?

Clone the GitHub repository onto your local machine.

`git clone https://www.github.com/zesterer/opplyse`

## What build system does Opplyse use?

Opplyse uses the Meson (https://github.com/mesonbuild/meson) build system. It is fast and well-suited to the needs to Opplyse. Those familiar with CMake will have no trouble handling it.

## How do I compile Opplyse?

Those familiar with Meson will already know.

First, navigate to the opplyse directory.

`cd opplyse`

Create a directory for Opplyse to be built within, then navigate to it.

`mkdir build && cd build`

Use Meson to set up a build environment for Opplyse.

`meson ..`

Compile Opplyse with Ninja.

`ninja-build`

## How do I run Opplyse?

Once you have performed the steps above, simply do:

`./opplyse`

## How can I contribute to Opplyse?

Currently, the best way to contribute to Opplyse would be to run it and report any bugs or issues that you have with it. Suggestions for improving Opplyse are also greatly welcome. You can report issues with the 'Issues' tab on the GitHub page.

## Credits

Anybody who provides significant contribution to Opplyse will be credited here. For now, have a unicode top hat.

🎩
