---
layout: page
title:  Day1
---
# Day 01 Preclass
## What's your Linux
There's lots of ways to get a local linux. Find one that suits your
style. Get it done now.
### Mac
You already have a unix on your system, just open your terminal app
- if you want to add software to your unix, you can use
     [macports](https://www.macports.org) or
     [homebrew](https://brew.sh) to get public domain stuff (latest
     gcc/g++, clang/clang++, openmp, openmpi, etc.
### Windows
You should try ubuntu on windows using  [wsl2](https://pureinfotech.com/install-windows-subsystem-linux-2-windows-10/) 
- You can also get [windows terminal](https://aka.ms/terminal) 
### Both, get a Virtual Machine
Another approach is to download a virtual machine interpreter. A good,
free one is [Virtual Box](https://virtualbox.org), for your OS of
course.
- The advantage is that you can try mulitple distributions and setups
  by downloading and purging
- The bad news is that this is more resource intensive than the
  previous elements. Mininum of 8GB of memory, and 16GB would be
  better.
### Just work online
If you don't want something local, and as long as you have good
internet, you can just use things online through a browser (or a
terminal emulator)
- [Open Ondemand](https://wiki.hpcc.msu.edu/display/ITH/Open+OnDemand)
  is a web browser interface to the MSU HPCC. Look at the linked demo
  for more info. 
- [ssh terminal](https://wiki.hpcc.msu.edu/display/ITH/Install+SSH+Client)
  HPC provides some instruction on setting up your local terminal. 
- [godbolt](https://godbolt.org). Website where you can try different
  compilers and see the resulting assembler, as well as run things
  (though you can't use it for performance work).
### To Read
- Remember pointers? A [quick review](ptrs.pdf) is available. Also
  example code from the slides
  - [pointers](pointers.cpp)
  - [references](references.cpp)
- Look at the [module system](https://wiki.hpcc.msu.edu/display/ITH/Module+System+and+Software+Installation?src=contextnavpagetreemode)
  on the iCER web pages.
- Look at the [slurm scheduling](https://wiki.hpcc.msu.edu/display/ITH/Job+Scheduling+by+SLURM?src=contextnavpagetreemode)
on the iCER web pages. We'll work with that for the inclass 
### Written Work
- Look at the [pointer code](ptr.cpp) and turn it in as a **text file** and augment the file to say what the various lines would output. Obviously you could run it and find out, but try and guess and *then* run it.
- Do the survey, [Interests Survey](https://docs.google.com/forms/d/e/1FAIpQLScNrBSEy66HVweYwTNIS8b5vyYnRviaVEqZRsQDcO4rhSnqYQ/viewform?usp=sf_link) 
# Day 01 Inclass
Write a C++ program (any program) and run it on the HPCC. 
## Turn in
- the first C code
- your slurm scriptcp 

