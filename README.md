<div align="center">

<img src="https://readme-typing-svg.demolab.com?font=Fira+Code&weight=600&size=28&pause=1200&color=00599C&center=true&vCenter=true&width=700&lines=DSA+in+C%2B%2B;Think+in+Patterns%2C+Not+Problems;Write+Fast.+Write+Clean.+Write+Efficient." alt="Typing SVG" />

<br>

### Data Structures and Algorithms in modern C++
*Built from scratch. Tested. Explained. Interview-ready.*

<br>

![C++](https://img.shields.io/badge/C%2B%2B-17%2F20-00599C?style=for-the-badge&logo=cplusplus&logoColor=white)
![CMake](https://img.shields.io/badge/CMake-Build-064F8C?style=for-the-badge&logo=cmake&logoColor=white)
![Solved](https://img.shields.io/badge/Problems_Solved-0-success?style=for-the-badge)
![License](https://img.shields.io/badge/License-MIT-yellow?style=for-the-badge)
![PRs](https://img.shields.io/badge/PRs-Welcome-brightgreen?style=for-the-badge)

<br>

[🚀 Quick Start](#-quick-start) &nbsp;•&nbsp;
[🗺️ Roadmap](#%EF%B8%8F-learning-roadmap) &nbsp;•&nbsp;
[🎯 Patterns](#-pattern-recognition-guide) &nbsp;•&nbsp;
[📋 Problems](#-problem-index) &nbsp;•&nbsp;
[⚡ STL Cheat Sheet](#-stl-cheat-sheet) &nbsp;•&nbsp;
[🤝 Contribute](#-contributing)

</div>

---

## 💡 What is this?

A curated, pattern-first collection of **data structures and algorithms in C++**. Every implementation is written to teach, not just to pass: you get the intuition, the brute-force baseline, the optimized solution, and the complexity reasoning behind each one.

<table>
<tr>
<td width="50%" valign="top">

### 🧩 Pattern-First
Problems are grouped by the **technique** behind them: sliding window, monotonic stack, binary search on answer. Learn the idea once and apply it everywhere.

</td>
<td width="50%" valign="top">

### 🪜 Brute Force → Optimal
Each solution shows the naive approach first, then how and **why** it improves, with complexity at every step.

</td>
</tr>
<tr>
<td width="50%" valign="top">

### 🧱 Built From Scratch
Linked lists, heaps, tries, union-find, and graphs are implemented by hand with templates, RAII, and smart pointers.

</td>
<td width="50%" valign="top">

### ✅ Tested & Clean
Every file is self-contained, compiles with `-Wall -Wextra`, and ships with edge-case tests.

</td>
</tr>
</table>

---

## 🚀 Quick Start

**Requirements:** a C++17 compiler (`g++` 9+, `clang++` 10+, or MSVC 2019+) and optionally CMake 3.16+.

```bash
# Clone
git clone https://github.com/<your-username>/dsa-cpp.git
cd dsa-cpp

# Compile and run any solution (each file has its own tests)
g++ -std=c++17 -O2 -Wall -Wextra problems/arrays/two_sum.cpp -o two_sum
./two_sum
```

<details>
<summary><b>🔧 Build everything with CMake</b></summary>

<br>

```bash
cmake -S . -B build -DCMAKE_BUILD_TYPE=Release
cmake --build build -j
ctest --test-dir build --output-on-failure
```

</details>

<details>
<summary><b>🐞 Debug with sanitizers</b></summary>

<br>

```bash
g++ -std=c++17 -g -fsanitize=address,undefined -Wall -Wextra file.cpp -o file
./file
```

Catches out-of-bounds access, memory leaks, and undefined behavior early.

</details>

---

## 🗺️ Learning Roadmap

```mermaid
flowchart LR
    A["🔢 Foundations<br/>Big-O · Arrays · Strings"] --> B["🔗 Linear DS<br/>List · Stack · Queue"]
    B --> C["🗂️ Hashing<br/>Map · Set · Prefix Sum"]
    C --> D["🔍 Search & Sort<br/>Binary Search · Sorts"]
    D --> E["🔄 Recursion<br/>Backtracking"]
    E --> F["🌳 Trees<br/>BST · Heap · Trie"]
    F --> G["🕸️ Graphs<br/>BFS · DFS · Dijkstra"]
    G --> H["🧮 DP & Greedy<br/>Bit Tricks"]
    H --> I["🏆 Interview Ready"]

    style A fill:#00599C,color:#fff,stroke:none
    style B fill:#00599C,color:#fff,stroke:none
    style C fill:#00599C,color:#fff,stroke:none
    style D fill:#00599C,color:#fff,stroke:none
    style E fill:#00599C,color:#fff,stroke:none
    style F fill:#00599C,color:#fff,stroke:none
    style G fill:#00599C,color:#fff,stroke:none
    style H fill:#00599C,color:#fff,stroke:none
    style I fill:#2ea043,color:#fff,stroke:none
```

### 📊 Progress

| Stage | Topic | Progress | Status |
|:-:|---|:-:|:-:|
| 1 | Arrays, Strings, Two Pointers, Sliding Window | ![](https://img.shields.io/badge/-0%25-lightgrey) | ⬜ Planned |
| 2 | Linked List, Stack, Queue, Deque | ![](https://img.shields.io/badge/-0%25-lightgrey) | ⬜ Planned |
| 3 | Hash Maps, Sets, Prefix Sums | ![](https://img.shields.io/badge/-0%25-lightgrey) | ⬜ Planned |
| 4 | Binary Search, Sorting | ![](https://img.shields.io/badge/-0%25-lightgrey) | ⬜ Planned |
| 5 | Recursion, Backtracking | ![](https://img.shields.io/badge/-0%25-lightgrey) | ⬜ Planned |
| 6 | Trees, BST, Heap, Trie | ![](https://img.shields.io/badge/-0%25-lightgrey) | ⬜ Planned |
| 7 | Graphs, Union-Find, Shortest Paths | ![](https://img.shields.io/badge/-0%25-lightgrey) | ⬜ Planned |
| 8 | Dynamic Programming | ![](https://img.shields.io/badge/-0%25-lightgrey) | ⬜ Planned |
| 9 | Greedy, Bit Manipulation, Intervals | ![](https://img.shields.io/badge/-0%25-lightgrey) | ⬜ Planned |

> Update as you go: ⬜ Planned → 🟨 In progress → ✅ Complete

---

## 🎯 Pattern Recognition Guide

> [!TIP]
> The real skill in interviews is spotting the pattern in the first 2 minutes. Use this table to train that instinct.

| 🔎 If the problem says... | 🛠️ Reach for... | ⏱️ Typical Cost |
|---|---|:-:|
| Sorted array, find a pair or target | **Two Pointers** | `O(n)` |
| Longest / shortest subarray under a condition | **Sliding Window** | `O(n)` |
| Sorted input or "minimize the maximum" | **Binary Search** (on index or answer) | `O(log n)` |
| Next greater / smaller element | **Monotonic Stack** | `O(n)` |
| Count, group, detect duplicates | **`unordered_map` / `unordered_set`** | `O(n)` |
| Many range-sum queries | **Prefix Sum** | `O(1)` query |
| Cycle in list, middle node | **Fast & Slow Pointers** | `O(n)` |
| Top K, K-th largest, running median | **`priority_queue`** | `O(n log k)` |
| All subsets, permutations, combinations | **Backtracking** | `O(2ⁿ)` / `O(n!)` |
| Shortest path, unweighted | **BFS** | `O(V+E)` |
| Components, islands, cycles | **DFS / Union-Find** | `O(V+E)` |
| Tasks with dependencies | **Topological Sort** | `O(V+E)` |
| Shortest path, weighted | **Dijkstra** | `O((V+E) log V)` |
| Overlapping subproblems | **Dynamic Programming** | varies |
| Local choice is globally optimal | **Greedy** | `O(n log n)` |
| Prefix matching, autocomplete | **Trie** | `O(L)` |

---

## ✍️ Solution Template

Every file in this repo follows the same structure, which makes revision fast.

```cpp
/*
 * Problem    : Two Sum
 * Source     : https://leetcode.com/problems/two-sum/
 * Pattern    : Hash Map
 * Difficulty : Easy
 *
 * Intuition
 *   For each x, the partner we need is (target - x).
 *   Remember seen values so each lookup is O(1).
 *
 * Approaches
 *   1. Brute force : check all pairs        -> O(n^2) time, O(1) space
 *   2. Hash map    : single pass (chosen)   -> O(n)   time, O(n) space
 *
 * Edge cases
 *   - Duplicates (3 + 3 = 6)
 *   - Negative numbers
 */

#include <cassert>
#include <iostream>
#include <unordered_map>
#include <vector>

std::vector<int> twoSum(const std::vector<int>& nums, int target) {
    std::unordered_map<int, int> seen;               // value -> index
    for (int i = 0; i < static_cast<int>(nums.size()); ++i) {
        if (auto it = seen.find(target - nums[i]); it != seen.end()) {
            return {it->second, i};
        }
        seen[nums[i]] = i;
    }
    return {};
}

int main() {
    assert((twoSum({2, 7, 11, 15}, 9) == std::vector<int>{0, 1}));
    assert((twoSum({3, 3}, 6)         == std::vector<int>{0, 1}));
    assert((twoSum({-1, -2, -3}, -5)  == std::vector<int>{1, 2}));
    std::cout << "✅ All tests passed\n";
    return 0;
}
```

---

## 📂 Repository Structure

```text
dsa-cpp/
│
├── 📁 data_structures/         # Header-only, templated implementations
│   ├── linked_list.hpp
│   ├── stack.hpp
│   ├── queue.hpp
│   ├── min_heap.hpp
│   ├── trie.hpp
│   ├── union_find.hpp
│   └── graph.hpp
│
├── 📁 algorithms/
│   ├── sorting/                # merge, quick, heap, counting
│   ├── searching/              # binary search variants
│   ├── graphs/                 # BFS, DFS, Dijkstra, Kruskal, Topo
│   └── dynamic_programming/
│
├── 📁 problems/                # Solutions grouped by topic
│   ├── arrays/
│   ├── strings/
│   ├── linked_list/
│   ├── trees/
│   ├── graphs/
│   └── dynamic_programming/
│
├── 📁 notes/                   # Concept notes and lessons learned
├── 📁 tests/                   # Shared test helpers
├── 📄 CMakeLists.txt
├── 📄 .clang-format
├── 📄 LICENSE
└── 📄 README.md
```

---

## 📋 Problem Index

> Difficulty: 🟢 Easy &nbsp;·&nbsp; 🟡 Medium &nbsp;·&nbsp; 🔴 Hard &nbsp;·&nbsp; ⭐ Revisit later

| # | Problem | Pattern | Level | Time | Space | Code | ⭐ |
|--:|---|---|:-:|:-:|:-:|:-:|:-:|
| 1 | Two Sum | Hash Map | 🟢 | `O(n)` | `O(n)` | [📄](problems/arrays/two_sum.cpp) | |
| 3 | Longest Substring Without Repeating Characters | Sliding Window | 🟡 | `O(n)` | `O(k)` | [📄](problems/strings/longest_substring.cpp) | ⭐ |
| 42 | Trapping Rain Water | Two Pointers | 🔴 | `O(n)` | `O(1)` | [📄](problems/arrays/trapping_rain_water.cpp) | ⭐ |

*Replace the sample rows with your own as you solve problems.*

---

## ⚡ STL Cheat Sheet

The containers and algorithms you will use in almost every problem.

| Need | Use | Notes |
|---|---|---|
| Dynamic array | `std::vector<T>` | Default choice; cache-friendly |
| Hash map / set | `std::unordered_map`, `std::unordered_set` | `O(1)` average |
| Ordered map / set | `std::map`, `std::set` | `O(log n)`, sorted keys |
| Stack / Queue | `std::stack`, `std::queue`, `std::deque` | Adapters over `deque` |
| Max-heap | `std::priority_queue<int>` | Default is max-heap |
| Min-heap | `std::priority_queue<int, vector<int>, greater<int>>` | Use `greater<>` |
| Sort | `std::sort(v.begin(), v.end())` | `O(n log n)` |
| Binary search | `std::lower_bound`, `std::upper_bound` | On sorted ranges |
| Min / max element | `std::min_element`, `std::max_element` | Returns iterator |
| Accumulate | `std::accumulate(b, e, 0)` | Needs `<numeric>` |
| Permutations | `std::next_permutation` | Sort first for all |

> [!NOTE]
> Prefer `std::vector` over raw arrays, `emplace_back` over `push_back` for objects, and pass large inputs by `const&`.

---

## 📈 Complexity Reference

<details>
<summary><b>Data Structures</b></summary>

<br>

| Structure | Access | Search | Insert | Delete |
|---|:-:|:-:|:-:|:-:|
| Array / Vector | `O(1)` | `O(n)` | `O(n)` | `O(n)` |
| Linked List | `O(n)` | `O(n)` | `O(1)`* | `O(1)`* |
| Stack / Queue | `O(n)` | `O(n)` | `O(1)` | `O(1)` |
| Hash Table | n/a | `O(1)` avg | `O(1)` avg | `O(1)` avg |
| Balanced BST | `O(log n)` | `O(log n)` | `O(log n)` | `O(log n)` |
| Binary Heap | n/a | `O(n)` | `O(log n)` | `O(log n)` |
| Trie | n/a | `O(L)` | `O(L)` | `O(L)` |

<sub>*When a pointer to the node is already known.</sub>

</details>

<details>
<summary><b>Sorting Algorithms</b></summary>

<br>

| Algorithm | Best | Average | Worst | Space | Stable |
|---|:-:|:-:|:-:|:-:|:-:|
| Merge Sort | `n log n` | `n log n` | `n log n` | `O(n)` | ✅ |
| Quick Sort | `n log n` | `n log n` | `n²` | `O(log n)` | ❌ |
| Heap Sort | `n log n` | `n log n` | `n log n` | `O(1)` | ❌ |
| Counting Sort | `n + k` | `n + k` | `n + k` | `O(k)` | ✅ |

</details>

---

## 🧭 How to Use This Repo

1. **Read** the concept note in `notes/` for the topic.
2. **Implement** the data structure yourself before opening mine.
3. **Solve** 5 to 10 problems on that topic, easiest first.
4. **Explain** the intuition in your own words in the file header.
5. **Revisit** ⭐ problems after **3, 7, and 30 days**.

> [!IMPORTANT]
> Stuck for more than 25 minutes? Read the hint, not the solution. Then close it and code it from memory.

---

## 🧰 Code Standards

- **C++17** minimum, compiled with `-Wall -Wextra -Wpedantic`
- Formatted with `clang-format` (config included)
- `const&` for large parameters, `auto` only when the type is obvious
- RAII and `std::unique_ptr` over raw `new` / `delete`
- No `using namespace std;` in headers
- Every file is self-contained, with `assert`-based tests including edge cases

---

## 🤝 Contributing

Contributions are welcome: a new problem, a cleaner approach, or a bug fix.

1. 🍴 Fork the repository
2. 🌿 Create a branch: `git checkout -b feature/segment-tree`
3. ✍️ Follow the [solution template](#%EF%B8%8F-solution-template)
4. ✅ Make sure it compiles cleanly and tests pass
5. 📬 Open a pull request with a clear description

---

## 📖 Resources

| | |
|---|---|
| 📘 | *Introduction to Algorithms* (CLRS) |
| 📗 | *Cracking the Coding Interview*, Gayle Laakmann McDowell |
| 📙 | *Competitive Programmer's Handbook*, Antti Laaksonen |
| 🎥 | [NeetCode](https://neetcode.io): pattern-based roadmap |
| 🌐 | [VisuAlgo](https://visualgo.net): algorithm visualizations |
| 📚 | [cppreference](https://en.cppreference.com): the C++ reference |
| 🧪 | [LeetCode](https://leetcode.com) · [Codeforces](https://codeforces.com) · [CSES](https://cses.fi/problemset/) |

---

## 📄 License

Distributed under the **MIT License**. See [`LICENSE`](LICENSE) for details.

---

<div align="center">

### ⭐ If this repo helps you, please give it a star

*Happy coding, and may your complexity always be low.*

<br>

![Made with C++](https://img.shields.io/badge/Made%20with-C%2B%2B-00599C?style=flat-square&logo=cplusplus&logoColor=white)
![Made with Love](https://img.shields.io/badge/Made%20with-%E2%9D%A4-red?style=flat-square)

</div>
