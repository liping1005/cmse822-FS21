---
layout: page
title: Homework 7
---

# CMSE822 Project Proposal, Homework 7
## due 10/29


# 1. Project overview

You are tasked with doing a Final Project for the class, worth 30% of your final grade. To make sure you are on-track, we are going to do this in two stages: First, a Project Proposal to be turned in by Friday, 10/29. You will also set up your git repo for your group at this time.

The second stage will be a final report, details of which I will provide. The final report will be due the last day of class.

The git repo will be the place where all project related files (including this pre-proposal) will be located. No D2L for the final project, only Git.

---

# 2. Project Proposal

## Group
I'm perfectly happy to have you continue to work in groups. I'm also fine with you selecting your own group members at this point. The ideal group size would likely be two but **no** group with more than 4 members. You can also choose to work by yourself. I leave these decisions to you.

## Proposal
Please write a proposal, on the order of two or so pages, that describes:

- who your group members are (including just yourself if you so choose)
- Project title
- Abstract - summary about the problem you are going to explore and why.
- Parallelization strategies you wish to explore, including software beyond what we have covered in class.
- Benchmark and optimization - Given your problem, what "standards" have you found to compare your work against.
	- Have you found some references yet?
	- How are you going to verify your success?
		+ scaling studies, memory usage, load balancing etc.

## 3. Potential Projects
I would *much* prefer if you selected a project that had some meaning to you. Consider this an opportunity to explore some parallel processing ideas for research you are interested in. Branch out, try something new!

Given the above, it might well be the case that what you tried did not work as well as you would have liked. That happens, that's what research is about. My goal is to make sure you do a through job of exploring and documenting what you did. Failure should not be a goal, but it could well be an outcome. For example: your problem didn't work well with cuda because of the memory transfers, the problem required too much communication hindering MPI, the problem didn't scale well because of memory bandwidth problems in OpenMP, etc. etc. 

Your job is to *document* what you did and analyze how it went!

Consider, especially if you are working with a larger group, doing **hybrid** approaches to the problem. 

However, if you can't think of anything on your own, consider some of these topics from the [Eijkhout Parallel Programming book]({{ site.baseurl }}/assets/EijkhoutIntroToHPC.pdf). Note that for many of these project topics, parallel code can easily be obtained online. _You must develop your own original code to address your problem_. Researching your problem on the web is expected and encouraged, but I recommend you avoid looking directly at someone's code for inspiration.

### 1. Heat Equation

See Section 36.3

### 2. Poisson Equation

See Section 4.2.2 

### 3. Conjugate Gradient

See Section 5.5.11 

### 4. Gaussian Elimination

See Section 5.1 

### 5. Molecular Dynamics

See Chapter 7 

### 6. Sorting and Combinatorics

See Chapter 8 

### 7. Graph analytics

See Chapter 9 

### 8. N-body Simulation

See Chapter 10 

### 9. Monte Carlo 

See Chapter 11 

## 4. Software to consider

As was discussed in class, consider using software other than what we have covered, if using what we have covered dive deeper into some aspect of the that tool(s), or generally branch out in different ways. I would **definitely** consider doing some hybrid parallelization (MPI using OpenMP, MPI with CUDA, MPI with C++ threads, etc.), especially if your group is larger. 

Also, there are lots of parallel software out there you might find interesting. If you try something "different", I would encourage you to compare it somehow with other approaches. Here is a (completely, non-exhaustive) list. Consider it a broad suggestion, but do as you like.

- OpenFlow
- Blast
- Petsci
- OpenMM
- MKL
- BLAS
- FFTW
- Kokkos
- Charm++
- Python 
	- Numba
	- Numpy with AVX 512 extensions	(just coming out)
	- pycuda, cython (has OpenMP), mpi4py, blah blah blah)
- Tensorflow
- OpenACC
- OpenCl
- MakeFlow
- Hadoop
- Thread Building Blocks (TBB)
- Tensorflow
- Torch
- Twister
- Condor
- XSEDE

## 5. Turn in
You will turn in to D2L only your git project URL. You will share your git project with myself (punch@msu.edu) and Nathan Haut, TA (hautnath@msu). In your github account will be the proposal in some readable format. You can do it in markdown, that would be the most portable, but if you need to do it otherwise just store a PDF.
