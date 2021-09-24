---
layout: page
title: Week4, Day7
---

## Day 7 preclass
### Video to watch
[Thread video, part 1](https://www.youtube.com/watch?v=F6Ipn7gCOsY&t=415s)
Up to you to watch more of this (beyond what was asked previously), but there is really good stuff in there.
## Read
Look at the slides:
- [concurrency1](Concurrency1.pdf)

Look at these code exercises as well:
- [a race](3-race.cpp)
- [unprotected access](listing_3.2.cpp)
- [mutex](mutex.cpp)
- [lock guard](3.5-lock_guard.cpp)

## Turn in
Answer the following questions:
1. What is a way one can help avoid a race condition. Look around on the internet if you like (Stack Overflow is fun)
2. Give two things you can do to avoid deadlock (again, look around)
2. How can you find a race condition (what are the symptoms)?
## Day 07 Inclass

There's a version of the [t-vector2](t-vector2.cpp) in the directory. It uses a results vector to gather the square of each thread's id then adds them all up at the end. Modify it so that it has just a single result value (not a vector), change the function, and use mutual exclusion to update that value.
