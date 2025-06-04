# 🔗 Problem: Search Insert Position

**Problem Link:**  
[LeetCode - Search Insert Position](https://leetcode.com/problems/search-insert-position/)

---

## 📄 Problem Statement

Given a **sorted array** of **distinct integers** and a **target** value, return the **index** if the target is found.  
If not, return the **index where it would be** if it were inserted in order.

> ✨ You must write an algorithm with **O(log n)** runtime complexity.

---

## 🧠 Approach & Thought Process

- Since the array is **sorted**, **binary search** is the most efficient way to locate the target or determine its insertion point.
- Use the standard binary search approach:
  - If `nums[mid] == target`, return `mid`.
  - If `nums[mid] > target`, the target lies in the **left half**, but `mid` is also a potential insertion index.
  - If `nums[mid] < target`, the target lies in the **right half**.

---

## 🔍 Algorithm Steps

1. Initialize:
   - `low = 0`, `high = n - 1`, `result = n` (default insert position is end of array).
2. While `low <= high`:
   - Compute `mid = (low + high) / 2`.
   - If `nums[mid] == target`: return `mid`.
   - If `nums[mid] > target`:
     - Update `result = mid`.
     - Move `high = mid - 1`.
   - Else:
     - Move `low = mid + 1`.
3. Return `result` as the final insertion index.

---

## ⏱️ Time Complexity

**O(log n)** — Efficient search using binary search.

---

## 🧮 Space Complexity

**O(1)** — Only constant extra space is used.
