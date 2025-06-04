# 🔗 Problem: Binary Search

**Problem Link:**  
[LeetCode - Binary Search](https://leetcode.com/problems/binary-search/)

---

## 📄 Problem Statement  
Given an array of integers `nums` sorted in **ascending order**, and an integer `target`, write a function to search for `target` in `nums`.  
If `target` exists, return its **index**.  
Otherwise, return `-1`.

> 🔒 Constraint: You **must** write an algorithm with **O(log n)** runtime complexity.

---

## 🧠 Approach & Thought Process  
- The problem explicitly asks for **O(log n)** time complexity → indicates the use of **Binary Search**.
- Binary Search works by repeatedly dividing the search interval in half:
  - If the target equals the middle element, return the index.
  - If target is smaller, discard the right half.
  - If target is larger, discard the left half.

---

## 🔍 Algorithm Steps  
1. Initialize two pointers:  
   - `low = 0`  
   - `high = n - 1`
2. While `low <= high`:  
   - Calculate `mid = (low + high) / 2`
   - If `nums[mid] == target`: return `mid`
   - If `nums[mid] > target`: update `high = mid - 1`
   - If `nums[mid] < target`: update `low = mid + 1`
3. If no match found, return `-1`.

---

## ⏱️ Time Complexity  
**O(log n)** — The array is halved in each iteration.

---

## 🧮 Space Complexity  
**O(1)** — No extra space used (iterative approach).

---
