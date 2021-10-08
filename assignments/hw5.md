---
layout: page
title: Homework 5
---
# Homework 5, due 10/15

## Coding problem

Our first OpenMP program! We looked at various implementations of the trapezoid rule. Let's redo that with a slightly different example. Let's use [Composite Simpson's](https://en.wikipedia.org/wiki/Simpson%27s_rule#Composite_Simpson's_rule) to do integration. Let's use the `humps` and `sinc` functions in the trapezoid code for testing.

Composite Simpsons gives you the opportunity to do more than one parallel region, take advantage of that. Also, no results vectors, use mutual exclusion, reduction or the like to do the total area update.

## Working together
When you are in a group, work together. For example, pick a classmate to be the "driver" and do all the actual typing of the code. The driver should share their screen. The other group members will be "navigators," guiding the overall direction of the code toward the ultimate goal. Feel free to switch roles as frequently as needed. Feel free to discuss the programming problem with your other group mates, too. At the conclusion, you may submit identical code and write-ups as your group mates, specifying your group members. 

### What to turn-in
Turn in:
- the threaded code
- a graph of the area under the curve as the number of elements is increased.
- let's do two graphs here of time vs thread:
	+ strong scaling. Constant number of trapezoids but increasing threads (less trapezoids/thread).
	+ weak scaling. Increasing number of threads but the same number of trapezoids/thread (increasing trapezoids overall as thread number increases)

