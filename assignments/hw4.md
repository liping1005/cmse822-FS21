---
layout: page
title: Homework 4
---
# Homework 4, due 10/8

## Coding problem

Let's work a little with concurrency. Let's make a simple ATM system. Only one class, the ATM

## `ATM`
The ATM maintains a list of accounts by a customer id. Associated with each id is a monetary amount (only one account per id). 
- constructor(). I gave you in the prototype. Adds a customer:cash pair to the ATM to start things off

The ATM provides the following methods for access:
- `query(id)`: returns the amount presently in the account of the `id` passed. 
	+ if the `id` is unknown, returns 0 and prints an error message.
- `deposit(id, amount)`: deposit the indicated amount into the account at id.
	+ return is a Boolean indicating success (true) or failure (false) of deposit, print an error message on failure.
- `withdraw(id, amount)`: returns the amount withdrawn
	+ if the `id` is unknown or the `amount` is unavailable, then return 0 and print a message.

### Workstreams	
You need to make a workstream, a sequence of events that occur at our ATM. For this we make a function(s) that perform ATM operations. We want to thread these workstreams, so each workstream gets a reference to our ATM instance and performs operations on the ATM. We should have multiple threads running workstreams (maybe the same stream, maybe not). I leave it to you to design some tests to see.

### Overall.
Obviously access to the ATM via our methods are going to need to be handled so they can be concurrent. That is what you have to do, write those methods and provide a workstream(s) that tests that they are concurrent.
- To start with I would only allow one method to run in your ATM.
- You can then try to improve upon that by having multiple readers but only 1 writer (which method(s) is/are the writer). Something to think about at least.


### Prototype
As I don't really want you to have to focus too much on the C++ kind of stuff, I made a prototype [prototype](hw4-proto.cpp) You can change it however you like, but as it stands:
- I put in a bunch of `includes`. You may not need them all, you may need others. Change as you like.
- the ATM has a `private` `map<long,double>` for accounts. You could do it a different way, up to you. Might have to look up a few things such as "how do I know if a key (here an id) is in the map" or "how to print the contents of a map", stuff like that. You can change it if you like
	+ You are almost surely going to need other `private` data members. Add as you like.
- I made a constructor for the ATM that takes a list of pairs, each pair an `{id, cash}` value. This way we don't have to make accounts, we can just start with some initial values. If you change the `map` you'll have to pay attention to this.
- I made a global prng with a distribution between 100-500. Use it as you like (change the distribution, whatever you need).
- I left hints here and there about what to do. Use them or not.

### Hints
- when I built it, the workstream functions ran so fast that one thread will have done all the work before another starts. You might wait them, or make the workstream crazy long.
- at least the `shared_mutex` requires `-std=c++17`, perhaps other elements also require it.
## Working together
When you are in a group, work together. For example, pick a classmate to be the "driver" and do all the actual typing of the code. The driver should share their screen. The other group members will be "navigators," guiding the overall direction of the code toward the ultimate goal. Feel free to switch roles as frequently as needed. Feel free to discuss the programming problem with your other group mates, too. At the conclusion, you may submit identical code and write-ups as your group mates, specifying your group members. 

### What to turn-in
Turn in:
- the threaded code
	+ multiple threads should be started in the main
- a written rationale about why you think the workstreams you designed tested concurrency.


