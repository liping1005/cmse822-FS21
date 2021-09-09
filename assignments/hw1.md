---
layout: page
title: Homework 1
---
# Homework 1, due 9/16

## Coding problem

1. Take a look at what is purported to be the [most viewed post stack overflow post](https://stackoverflow.com/questions/11227809/why-is-processing-a-sorted-array-faster-than-processing-an-unsorted-array)

2. The big question is this. We are interested in the timing of the loop labeled "Primary Loop". If we sort the array before running that loop, does that loop run faster.
	1. We are only interested in that loop. It is true that sorting the array will take more time, but we are ignoring that. We are only timing that loop

2. Write that code using the supplied random number and timing code in the Day2 directory.
	1. Do **not** use `rand` in your code. Use the `mt19937_64` prng we discussed in class.

3. Time the "Primary Loop" under the following conditions:
	1. With optimization (something like `-O2`) turned on and turned off (`-O0`).
	2. With a larger or smaller array (try some different sizes, see if it matters).

4. Is it true? Is the "Primary Loop" faster if we pre-sort the array? If so, why, if not then speculate as to why not.

## Working together
When you are in a group, work together. For example, pick a classmate to be the "driver" and do all the actual typing of the code. The driver should share their screen. The other group members will be "navigators," guiding the overall direction of the code toward the ultimate goal. Feel free to switch roles as frequently as needed. Feel free to discuss the programming problem with your other group mates, too. At the conclusion, you may submit identical code and write-ups as your group mates, specifying your group number. 

## What to turn-in

Turn in your code, and a brief write-up (in plain text or markdown) addressing the above questions and discussing your results. Your final write-up and code are due in one week, on 9/16.
