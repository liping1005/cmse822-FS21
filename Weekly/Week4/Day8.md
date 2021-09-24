---
layout: page
title: Week4, Day8
---

## Day 8 preclass
### Video to watch
[Thread video, part 1](https://www.youtube.com/watch?v=F6Ipn7gCOsY&t=415s)
Up to you to watch more of this (beyond what was asked previously), but there is really good stuff in there.
## Read
Look at the slides:
- [concurrency2](Concurrency2.pdf)

Look at these code exercises as well:
- [condition_variable](comm.cpp)
- [self deadlock](selflock.cpp)
- [order deadlock](order.cpp)
- [barrier](barrier_order.cpp)
	+ the above requires g++11/clang++11 and -std=c++20. Easiest on the hpc.
## Turn in
Answer the following questions:
1. What is a way one can help avoid a race condition. Look around on the internet if you like (Stack Overflow is fun)
2. Give two things you can do to avoid deadlock (again, look around)
2. How can you find a race condition (what are the symptoms)?
## Day 08 Inclass

Look at the self deadlock and order deadlock problems, how can we fix them?
