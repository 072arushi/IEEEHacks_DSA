ALGORITHM

## Explanation of problem
Tower of Hanoi is a mathematical puzzle where we have three rods (A, B, and C) and N disks. Initially, all the disks are stacked in decreasing value of diameter i.e., the smallest disk is placed on the top and they are on rod A. The objective of the puzzle is to move the entire stack to another rod (here considered C), obeying the following simple rules:

## Rules
 Only one disk can be moved at a time.
Each move consists of taking the upper disk from one of the stacks and placing it on top of another stack i.e. a disk can only be moved if it is the uppermost disk on a stack.
No disk may be placed on top of a smaller disk.

## Our idea to proceed question

The idea is to use the helper node to reach the destination using recursion. Below is the pattern for this problem:

Shift ‘N-1’ disks from ‘A’ to ‘B’, using C.
## Code
towerOfHanoi(n-1, source, destination , auxiliary);

Shift last disk from ‘A’ to ‘C’.
## Code
cout<< source<<" "<< destination<< endl;

Shift ‘N-1’ disks from ‘B’ to ‘C’, using A.
## Code 
towerOfHanoi(n-1, auxiliary,source,destination);

## Image Explanation
image.png

## Example 
A to rod C
 A to rod B
  C to rod B
 A to rod C
 B to rod A
 B to rod C
 A to rod C

## Space Complexity
is O(N),

## Time Complexity
is O(2^N)

