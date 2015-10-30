# Opplyse

A clean, efficient GTK3 text editor for programmers. The big brother of Vulcan.

## What is Opplyse?

Opplyse is a text editor created with C++ and GTK 3. It is designed to be clean but capable in design while being quick and efficient in operation. It is total redesign of the original Vulcan text editor (https://github.com/zesterer/vulcan).

## Why recreate Vulcan?

Vulcan's codebase became increasingly untidy and difficult to maintain. I decided that, since the project had been inactive for a number of months anyway, I should redesign and rebuild Vulcan in the same style of the original.

## How do I get a copy of Opplyse?

Clone the GitHub repository onto your local machine.

`git clone https://www.github.com/zesterer/opplyse`

## How do I compile Opplyse?

Those familiar with CMake will already know.

First, navigate to the opplyse directory.

`cd opplyse`

Create a directory for Opplyse to be built within, the navigate to it.

`mkdir build && cd build`

Use CMake to set up a build environment for Opplyse.

`cmake ..`

Compile Opplyse with MAKE.

`make`

## How do I run Opplyse?

Once you have performed the steps above, simply do:

`./opplyse`

## How can I contribute to Opplyse?

Currently, the best way to contribute to Opplyse would be to run it and report any bugs or issues that you have with it. Suggestions for improving Opplyse are also greatly welcome. You can report issues with the 'Issues' tab on the GitHub page.
