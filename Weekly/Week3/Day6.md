---
layout: page
title: Week3, Day6
---

# Day 06 Preclass
### Video to watch
[Thread video, part 2](https://www.youtube.com/watch?v=F6Ipn7gCOsY&t=415s)
12:30 to 28:30
## Read
Look at the slides:
- [more threads](threads2.pdf)

Look at the code exercises as well:
- [passing ref args](2.1-thread-pass.cpp)
- [thread moving](2.2-move.cpp)
- [thread wait1](2.3-waiter.cpp)
- [thread wait2](2.4-waiter2.cpp)
- [thread vector](t-vector.cpp)
## Turn in
Answer the following and turn in (as text or markdown):
- what is the difference between a `.join` or a `.detach`on a thread?
- by default everything passed to a thread is a copy. How might we get around this?
- you cannot copy a thread, only move it? Why do you suppose that is
	+ what does it mean to "move" a thread?

# Day 06 Inclass

There is something wrong with the thread vector example. It does not scale well (try it with different thread numbers)? Can you:

- identify the problem?
- fix the problem?
