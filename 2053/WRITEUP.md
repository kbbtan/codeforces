# Contest 2053: Good Bye 2024: 2025 is NEAR

## A. Tender Carpenter

[Link](https://codeforces.com/problemset/problem/2053/A)

Note that if a set consists of only one element, it is guaranteed to be stable. Hence, each array already has at least one stable partition by partitoning each element into its own set.

Also note that if there exists an unstable set, it will continue to be unstable as more elements are added into the set.

Therefore, we can just attempt to find a second partition where an adjacent pair of elements are in a set and the remaining elements are each in their own set. If no such partition exists, we know that no partitions consisting of sets with two or more elements can exist, and that there is only one valid partition as discussed above.

To determine if a set of two distinct positive integers $a$ and $b$ is stable, we only have to check for the inqualities $a + a > b$ and $b + b > a$. The remaining inequalities will always hold: 

- $a + a > a$
- $b + b > b$
- $a + b > a$
- $a + b > b$