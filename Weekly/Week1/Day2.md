---
layout: page
title:  Day2
---

# Day 02 Preclass
### Video to watch
[Intel CPU Video](https://www.youtube.com/watch?v=o_WXTRS2qTY) 1:50 to
23:30. It's a little simplistic but the ideas are good enough to work
on
## Read
In the Intro to HPC book, from the beginning through Section 1.2
## Turn in
Exercise 1.1
# Day 02 Inclass
Take a look at what is purported to be the [most viewed
post stack overflow post](https://stackoverflow.com/questions/11227809/why-is-processing-a-sorted-array-faster-than-processing-an-unsorted-array). 
- write that code
  - do a better job with random numbers, see [slides](random_numbers.pdf) and
    [example](random.cpp). In case you didn't know, [rand
    sucks](https://codeforces.com/blog/entry/61587). 
- try it un-optimized and optimized. Is it true that sorted is faster?
- to do timing you can:
  - use the `time` function on the command line: `time ./a.out`
  - use the [chrono example](timing.cpp) to mark the part of the
    code you explicitly want to time. Better control this way.
- Can you modify that basic code so that the branch does matter? Is it easy to do?
## Turn in
- the original StackOverflow code
  - also whatever modification you did that made the branch matter.


