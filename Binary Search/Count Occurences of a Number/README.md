# 🔗 Problem: Number of Occurrence

**Problem Link:**  
[GeeksforGeeks - Number of Occurrence](https://www.geeksforgeeks.org/problems/number-of-occurrence2259/1)

---

## 📄 Problem Statement

Given a **sorted** array `arr[]` and a number `target`, find the **number of occurrences** of `target` in `arr[]`.

Return `0` if the target is not present.

---

## 🧠 Approach & Thought Process

- Since the array is **sorted**, binary search is the optimal approach.
- We find:
  1. The **first occurrence** of the target using `lowerBound`.
  2. The **last occurrence** of the target using `upperBound`.
- The number of occurrences is:  
  `lastIndex - firstIndex + 1`.

---

## 🔍 Algorithm Steps

1. Perform a binary search to find the **first index** of the target.
2. Perform a binary search to find the **last index** of the target.
3. If `target` is not found (`firstIndex == -1`), return `0`.
4. Otherwise, return `lastIndex - firstIndex + 1`.

---

## ⏱️ Time Complexity

- **O(log n)** — Two binary searches are performed.

---

## 🧮 Space Complexity

- **O(1)** — No extra space used.
