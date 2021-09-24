---
layout: page
title: Homework 3
---
# Homework 3, due 10/1

## Coding problem

We are going to thread a Monte Carlo algorithm to calculate $\pi$. A word about this. This is a **terrible** algorithm if your goal is to actually calculate $\pi$. It converges **very** slowly, requiring 100's of millions of points to get even  minimal accuracy. However, for testing parallel algorithms it is quite wonderful. It is numeric, it is tunable and it is "pleasantly parallel", meaning that no shared memory is required to make the calculation. We'll use it as our "Hello World" for writing a parallel programs.

1. First, write an outline, in words, of how to do it. Yes, actual words! Could be just a list. Be smart about how computationally expensive it is. 

2. Next, write a serial version of the algorithm. When you write the algorithm, use command line arguments where the argument is the number of iterations of the algorithm. It will be useful if you make the calculation a function, as it will be easier to time and easier to thread. 

3. Finally, write a threaded version of the algorithm. In this code, the command line arguments should represent the number of iterations (in total) and the number of threads used.
	1. The total iterations should be divided among the threads evenly (more or less).

4. For the system you are running on, list how many cores (and hyper-threads if that is available) you have on your system.
	1. run the threaded algorithm with various core counts, starting with the single and running up to well beyond the number of cores/hyperthreads of the system.
	2. make a graph of the per-thread time for the various thread counts. 
	
Again, remember that to get anything resembling an accurate $\pi$ you are going to have to run 100's of millions (or more) total iterations. 

## Working together
When you are in a group, work together. For example, pick a classmate to be the "driver" and do all the actual typing of the code. The driver should share their screen. The other group members will be "navigators," guiding the overall direction of the code toward the ultimate goal. Feel free to switch roles as frequently as needed. Feel free to discuss the programming problem with your other group mates, too. At the conclusion, you may submit identical code and write-ups as your group mates, specifying your group members. 

### What to turn-in
Turn in:
- your algorithm description
- the serial code
- the threaded code
- a graph of per thread time as the thread number is increased.

