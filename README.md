# 10D_Monte_Carlo
[![Generic badge](https://img.shields.io/badge/<GCC>-<11.0.3>-<COLOR>.svg)](https://shields.io/) 
[![No Maintenance Intended](http://unmaintained.tech/badge.svg)](http://unmaintained.tech/)



main.c is an simple C program that usese a random number generator and some simple math to approximate the integral 

<a href="https://www.codecogs.com/eqnedit.php?latex=I&space;=&space;\int^1_0{dx_1}\int^1_0{dx_2}\cdots\int^1_0(x_1&plus;x_2&plus;\cdots&plus;x_{10})^2" target="_blank"><img src="https://latex.codecogs.com/gif.latex?I&space;=&space;\int^1_0{dx_1}\int^1_0{dx_2}\cdots\int^1_0(x_1&plus;x_2&plus;\cdots&plus;x_{10})^2" title="I = \int^1_0{dx_1}\int^1_0{dx_2}\cdots\int^1_0(x_1+x_2+\cdots+x_{10})^2" /></a>. 

## Table of contents
* [Installation](#installations)
* [Technical Overview](#technical-overview)
* [Usage](#authors)
* [Setup](#setup)
* [Contributing](#contributing)
* [License](#license)

## Installation

This code was developed using [Xcode](https://developer.apple.com/xcode/) on a MAC OS Catalina 10.15.2 with the Apple clang version 11.0.3 (clang-1103.0.32.62) compiler.

## Technical Overview

The integral given in the introduction is being evaluted in main.c using the numerical equivalant of the mean value theorem. Recall that the mean value theorem is given by,

<a href="https://www.codecogs.com/eqnedit.php?latex=I&space;=&space;\int&space;f(x)dx&space;=&space;(b-a)\left&space;\langle&space;f&space;\right&space;\rangle" target="_blank"><img src="https://latex.codecogs.com/gif.latex?I&space;=&space;\int&space;f(x)dx&space;=&space;(b-a)\left&space;\langle&space;f&space;\right&space;\rangle" title="I = \int f(x)dx = (b-a)\left \langle f \right \rangle" /></a>.

The code samples for Nmax runs then takes the mean. Because the interval is 0 to 1 in this example the coefficeint (b-a) is 1 and we are just left with the <f>. This is integral can be evaluated analytically and we can see that the solution is 155/6. As we increase the number of runs by increasing the Nmax of the outer loop in main.c The error decreases somwhat linearlyas shown in the below figure:
  ![Linear dependence of eps](https://github.com/whutzel89/10d_Monte_Carlo/blob/master/quick_plot_error.png)

## Authors

William Hutze -- initial commit

## Contributing
Pull requests are welcome.

## License
[GNU](https://choosealicense.com/licenses/gpl-3.0/)
