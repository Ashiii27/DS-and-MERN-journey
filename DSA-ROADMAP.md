# 🧠 DSA Roadmap — Placement Prep 2026

> **Resource:** Striver's A2Z Sheet  
> **Language:** C++  
> **Target:** Product-based company placements

---

## Why This Order

Each topic builds directly on the one before it.
Arrays teach you iteration and indexing. Linked Lists teach you pointers. Trees build on pointers. Graphs build on trees. DP builds on recursion. Do not skip ahead.

---

## Phase 1 — Linear Data Structures
· The non-negotiable foundation

### 1. Arrays
Everything starts here. The patterns you learn in arrays — two pointers, prefix sum, sliding window — appear in every topic that follows.

**Patterns**
- Two Pointers
- Sliding Window
- Prefix Sum / Suffix Sum
- Kadane's Algorithm
- Dutch National Flag
- Boyer-Moore Voting
- Cyclic Sort
- Interval Merging

---

### 2. Strings
Strings are character arrays. Most string problems reduce to array patterns you already know. Learn the string-specific ones on top.

**Patterns**
- HashMap / Frequency Count
- Two Pointers on Strings
- Sliding Window on Strings
- Palindrome Expansion from Center
- String Hashing

---

### 3. Linked List
First real data structure. Pointer manipulation is the core skill — get comfortable with it here because trees and graphs demand it.

**Patterns**
- Iterative and Recursive Reversal
- Floyd's Cycle Detection (Fast / Slow Pointers)
- Two Pointer with Gap
- Merge Operations
- In-place Node Manipulation
- Doubly Linked List Design

---

### 4. Stack and Queue
Monotonic stack alone is worth weeks of practice — it appears in a huge percentage of product company OAs.

**Patterns**
- Monotonic Stack (Increasing + Decreasing)
- Monotonic Deque
- Stack for Balanced Brackets
- Stack for Expression Evaluation
- Queue using Stacks and vice versa
- Circular Queue / Deque Design

---

## Phase 2 — Searching + Non-Linear Structures
> April – May 2026 · Interview differentiators

### 5. Binary Search
Not just sorted arrays. Binary search on the answer space is one of the most powerful patterns in competitive interviews.

**Patterns**
- Classic Lo / Hi / Mid Template
- Binary Search on Rotated Arrays
- Binary Search on Answer Space
- Binary Search on 2D Matrix
- First and Last Occurrence (Boundary Finding)

---

### 6. Trees
The most asked data structure in technical rounds. BFS and DFS on trees must be automatic — no thinking required.

**Patterns**
- DFS — Preorder, Inorder, Postorder (Iterative + Recursive)
- BFS — Level Order Traversal
- Bottom-Up Post-order Computation
- Tree Construction from Traversals
- BST Insert, Delete, Search, Validate
- Lowest Common Ancestor
- Path Sum Problems
- Diameter and Height Variants
- Serialization and Deserialization
- Morris Traversal (O(1) space)

---

### 7. Heaps / Priority Queue
Solves the entire class of "K-th largest / smallest / most frequent" problems that appear constantly in OAs.

**Patterns**
- Min Heap and Max Heap operations
- Fixed Size Heap of K elements
- Two Heaps pattern (Running Median)
- Heap + HashMap combination
- Greedy decisions with Heap

---

## Phase 3 — Advanced Topics
· What separates strong from average candidates

### 8. Graphs
The deepest topic. Takes the most time to get comfortable with. Appears in almost every FAANG round. Give it the time it deserves.

**Patterns**
- BFS and DFS on Graphs
- Multi-source BFS
- Topological Sort — DFS based and Kahn's BFS based
- Cycle Detection — Directed and Undirected
- Union Find / Disjoint Set Union (with Path Compression + Rank)
- Dijkstra's Algorithm
- Bellman-Ford Algorithm
- Floyd-Warshall (All Pairs Shortest Path)
- Prim's and Kruskal's (Minimum Spanning Tree)
- Bipartite Graph Check
- Flood Fill

---

### 9. Recursion and Backtracking
The thinking framework behind many hard problems. Master the template — recognize when to prune, when to branch, when to backtrack.

**Patterns**
- Power Set / All Subsets
- Permutations with and without Duplicates
- Combinations with and without Reuse
- Constraint-based Backtracking
- Grid-based Backtracking
- String Partitioning

---

### 10. Dynamic Programming
The hardest topic. The one that determines whether you clear senior product company rounds. Do not rush this — depth matters more than speed here.

**Sub-topics in strict order**
1. 1D DP — Linear state transitions
2. Grid DP — 2D state transitions
3. String DP — LCS, Edit Distance, Palindrome variants
4. Knapsack — 0/1, Unbounded, Subset Sum variants
5. Stock Buy/Sell — State machine DP
6. Interval DP — Problems on ranges / subarrays
7. Counting DP — Number of ways problems
8. DP with Binary Search — LIS with patience sort optimization

---

## Phase 4 — Remaining Topics + Consolidation
· Lock everything in before placement season

### 11. Tries
Specialized prefix tree. Appears in word search, autocomplete, and XOR-based problems.

**Patterns**
- Trie Build, Insert, Search
- Prefix Matching and Count
- Wildcard Search with DFS
- Binary Trie for XOR Maximization

---

### 12. Greedy
The hardest part of greedy is proving correctness. Focus on the intuition — why does taking the local optimum work globally here?

**Patterns**
- Interval Scheduling (Sort by End Time)
- Activity Selection
- Custom Comparator Greedy
- Max Reach / Jump Game style
- Two-variable Min/Max tracking

---

### 13. Bit Manipulation
Small topic, high return. Shows up frequently as short problems in OA rounds. Know every trick cold.

**Patterns**
- XOR Properties and Tricks
- Brian Kernighan's Bit Count (n & n-1)
- Bit Masking for Subsets
- Left / Right Shift Operations
- Power of 2 checks

---

### 14. Math
Lightweight but shows up consistently. Focus only on what actually gets asked.

**Patterns**
- Sieve of Eratosthenes
- Binary Exponentiation
- Euclidean GCD / LCM
- Modular Arithmetic
- Number Theory Basics

---

### 15. Design Problems
Tests your ability to combine data structures intelligently. Common in round 2 interviews.

**Patterns**
- Doubly Linked List + HashMap (LRU Cache, LFU Cache)
- Heap + HashMap combination
- Stack / Queue from primitives
- Circular Buffer Design

---

### 16. Intervals
Scheduling and calendar-type problems. Appears frequently at companies like Google and Amazon.

**Patterns**
- Sort then Merge
- Sweep Line
- Min Heap for Active Interval Tracking
- Offline Query Processing

---

## Revision Strategy

**Weekly** — Go back to problems solved 2 weeks ago without looking at solutions. If you can't solve it independently, the pattern is not retained yet.

**Monthly** — One timed mock OA. 90 minutes. 2 to 3 problems. LeetCode contest or HackerRank. Simulate real conditions exactly.

**Pre-placement** — Company-tagged problem pass on LeetCode. Filter by your target companies. Go through top 30 for each.

---

## Golden Rules

- Understand the pattern, not the solution — solutions expire, patterns don't
- Analyse time and space complexity before moving on from any problem
- Attempt independently for at least 20 minutes before looking at hints
- After solving — ask yourself if you can do it in less space or less time
- Revisit hard problems after 2 weeks — retention is the actual goal

---

## End Goal 

Every pattern above is recognizable within 60 seconds of reading a problem.
OA rounds cleared consistently.
Time and space complexity explainable clearly for every solution.
Technical rounds navigated with confidence, not luck.
