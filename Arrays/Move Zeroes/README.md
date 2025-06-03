# 🟦 Problem: Move Zeroes

## 🔗 Problem Link  
[LeetCode - Move Zeroes](https://leetcode.com/problems/move-zeroes/)

---

## 📄 Problem Statement  
Given an integer array `nums`, move all `0`s to the **end** of it while maintaining the **relative order** of the non-zero elements.  
You must perform this operation **in-place** without making a copy of the array.

---

## 🧠 Approach & Thought Process  
- Use two pointers:
  - `zero` points to the position where the next non-zero element should be placed.
  - `index` traverses the array.
- When `nums[index]` is non-zero, swap it with the element at `nums[zero]` and increment both pointers.
- If `nums[index]` is zero, just move `index` forward.
- This ensures all non-zero elements are shifted to the front in their original order, and zeros are pushed to the end.

---

## 🔍 Algorithm Steps  
1. Initialize `zero = 0` and `index = 0`.
2. While `index < n`:
   - If `nums[index]` is zero, increment `index`.
   - Else, swap `nums[zero]` and `nums[index]`, then increment both `zero` and `index`.
3. The array is modified in place with all zeros moved to the end.

---

## ⏱️ Time Complexity  
**O(n)** — Single pass through the array.

---

## 🧮 Space Complexity  
**O(1)** — In-place modification, no extra space.

---
