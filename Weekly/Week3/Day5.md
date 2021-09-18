---
layout: page
title: Week3, Day5
---

# Day 05 Preclass

### C background slides
Take a look at some information about using command line arguments and some examples
- [slides](CommandLineArgs.pdf)
- [echo](echoCommandLine.c)
- [CL file](CLcheck.c)

### Video to watch
[Thread video, part 1](https://www.youtube.com/watch?v=F6Ipn7gCOsY&t=415s)
beginning to 12:30. 
## Read
Look at the slides:
- [thread intro](threads1.pdf)

Look at these code exercises as well:
- [thread hello](1.1-thread-hello.cpp)
- [thread lambda](1.2-thread-hello-lambda.cpp)
- [thread obj](1.3-thread-hello-obj.cpp)
## Turn in
Answer the following questions (turn in text or markdown)
1. What happens if you try to `.join` a thread that has ended.
2. what happens if you try to `.join` a thread you have already joined
	1. What method can help you avoid this problem?
2. What happens to any thread after the `main` program ends?
3. What values can you return from a `thread` call?

## Day 05 Inclass
Write some code that:
- requires a number of threads on command line
	+ checks to make sure the thread count is provided
- each thread prints "Hello from" and its ID
- join all the threads before ending the main

