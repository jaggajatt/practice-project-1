# practice-project-1

[![Build Status](https://travis-ci.org/jaggajatt/practice-project-1.svg?branch=master)](https://travis-ci.org/jaggajatt/practice-project-1)

Practive Project -- Demonstrates usage of CMake, Doxygen, git and Travis CI. Also, serves as a guide for C++ projects with emphasis on modern C++.


## Preparing the Documentation

### Doing it the first time

```bash
mkdir docs
cd docs
doxygen -g
doxygen Doxyfile
# Making pdf documentation from LaTeX files
cd latex
make
```

I have also included the pdf documentation in the root directory for reference and also I am not cleaning the build files as I assume Doxygen might not be installed on the evaluaters systems. If you feel comfortable in the html documentation, open this webpage `$PROJECT_ROOT/docs/html/index.html`.

I changed a few flags -- changes can be seen by looking for `Changed by ...`.

Also, I kept the flag ON to build documentation with static members and all the member functions and variable for the sake of clarity.

## Sublime Useful Packages

Download sublime text from their website, it will be a .deb. Then run in terminal using `subl`.

### Packages to install

* [DoxyDoxygen](https://packagecontrol.io/packages/DoxyDoxygen) -- Documentation
* [Anaconda](https://packagecontrol.io/packages/Anaconda) -- Python Autocomplete etc.
* [EasyClangComplete](https://packagecontrol.io/packages/EasyClangComplete) -- C++ Autocomplete.
* [GitHub Flavored Markdown Preview](https://packagecontrol.io/packages/GitHub%20Flavored%20Markdown%20Preview) -- Markdown Preview