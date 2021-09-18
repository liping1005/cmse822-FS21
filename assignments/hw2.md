---
layout: page
title: Homework 2
---
# Homework 2, due 9/23

## Coding problem


1. With your group, write a program that multiplies two matrices together (see: <http://mathworld.wolfram.com/MatrixMultiplication.html>).

2. For a given matrix size _N_, what is the total number of floating point operations performed by this operator?

3. Compute the performance in Mflop/s of the matrix-matrix multiply for _N_=100\. Be sure to perform enough repeat calculations of the timing to overcome any statistical noise in the measurement.

4. For the system you are running on, determine the clock speed of the processor and the cache size/layout. On Linux the command `lscpu` can be helpful for this. Assuming that the processor is capable of one flop per clock cycle, how does the performance you measures in (3) compare to the theoretical peak performance of your system?

5. Now repeat the performance measurement for a range of matrix size `N` from 1 to 10,000,000. Make a plot of the resulting measured Gflop/s vs. `N`. On this plot place a horizontal line representing the theoretical peak performance based upon your system's clock speed.

6. How does the measured performance for multiple _N_'s compare to peak? Are there any "features" in your plot? Explain them in the context of the hardware architecture of your system. Include in your write-up a description of your system's architecture (processor, cache, etc.).

## Working together
When you are in a group, work together. For example, pick a classmate to be the "driver" and do all the actual typing of the code. The driver should share their screen. The other group members will be "navigators," guiding the overall direction of the code toward the ultimate goal. Feel free to switch roles as frequently as needed. Feel free to discuss the programming problem with your other group mates, too. At the conclusion, you may submit identical code and write-ups as your group mates, specifying your group number. 

### What to turn-in

Turn in your code for performing the matrix-matrix multiply performance measurements, the plot of your results, and a brief write-up (in plain text or markdown) addressing the above questions and discussing your results. 
