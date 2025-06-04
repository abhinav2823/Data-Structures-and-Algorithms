# 🔗 Problem: Find First and Last Position of Element in Sorted Array

**Problem Link:**  
[LeetCode - Find First and Last Position of Element in Sorted Array](https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/)

---

## 📄 Problem Statement

Given a **sorted** array `nums[]` in non-decreasing order and a **target** value, find the **first and last occurrence** of the target in the array.

- Return `[-1, -1]` if the target is not found.
- The algorithm must run in **O(log n)** time.

---

## 🧠 Approach & Thought Process

Since the array is sorted, binary search is the optimal choice:

- Use binary search twice:
  1. To find the **first position** of the target.
  2. To find the **last position** of the target.
- Keep updating the potential answer and continue searching left/right accordingly.

---

## 🔍 Algorithm Steps

1. Use binary search to find the **first occurrence**:
   - If `nums[mid] == target`, store `mid` and continue searching **left**.
2. Use binary search to find the **last occurrence**:
   - If `nums[mid] == target`, store `mid` and continue searching **right**.
3. Return `[first, last]`.

---

## ⏱️ Time Complexity

- **O(log n)** — Binary search is performed twice.

---

## 🧮 Space Complexity

- **O(1)** — No extra space used.
