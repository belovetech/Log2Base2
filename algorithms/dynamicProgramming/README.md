# Dynamic programming

Dynamic Programming is mainly an optimization over plain recursion. Wherever we see a recursive solution that has repeated calls for same inputs, we can optimize it using Dynamic Programming. The idea is to simply store the results of subproblems, so that we do not have to re-compute them when needed later. This simple optimization reduces time complexities from exponential to polynomial.

## Approaches of Dynamic programming

- Bottom-Up Approach - Solving problem step by step from base case

- Top-Down Approach - Breaking Big problem into smaller ones recursively

##### Memoization - Is the effective way of avoiding recomputation issue in Top-Down approach. It is a technique used for storing all the solved sub-problems so that we do ot need to recalculate the soli=ution of the already solved subproblems.
