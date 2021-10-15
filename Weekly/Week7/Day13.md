---
layout: page
title: Week7, Day13
---

## Day 13 preclass
### Video to watch
- [openmp worksharing](https://www.youtube.com/watch?v=4MiXzs0d1eE&ab_channel=ArgonneInternalChannel). Start at 29:00, go to 38:00
- [openmp tasks](https://www.youtube.com/watch?v=AioeS_Jo0Yg&ab_channel=OpenMP)

## Read
We are in the [Eijkhout Parallel Programming book]({{ site.baseurl }}/assets/EijkhoutParallelProgramming.pdf) now. This link is to a .pdf copy of the book so we get our references right. You only need to download it once.

- Read chapter  19.3 (loop schedules)
- Read chapter 21.1 (sections)
- Read chapter 24 (tasks). Just get the general idea

Look at the slides:
- [openmp3](OpenMP3.pdf)

Look at the code exercises as well:
- [sections](section.cpp)
- [progressive](progressive.cpp)
- [task 1](task1.cpp)
- [task 2](task2.cpp)
- [fibonacci](fibo.cpp)
- [fibonacci-memoized](fibo-memoized.cpp)


## Turn in
Answer the following questions:
Exercise 19.6 asks about chunk size. Answer the question and discuss what an optimal chunk size would be.

## Day 13 Inclass

The [progressive](progressive.cpp) has a function that gets "harder" as you go through the loop. Make another simple function (maybe trapezoid?) that is uniform as the loop goes through.

Contrast how schedules affect doing the progressive and simple function.