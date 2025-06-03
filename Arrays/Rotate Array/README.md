# 🔄 Problem: Rotate Array

## 🔗 Problem Link  
[LeetCode - Rotate Array](https://leetcode.com/problems/rotate-array/)

---

## 📄 Problem Statement  
Given an integer array `nums`, rotate the array to the **right** by `k` steps, where `k` is non-negative.  
You must modify the array such that each element is shifted `k` positions to the right, wrapping around to the beginning.

---

## 🧠 Approach & Thought Process  
- The idea is to shift each element to a new index calculated by `(i + k) % n`.
- Since we cannot directly rearrange in-place without overwriting, we use a temporary array `ans` of the same size.
- We copy each element from `nums[i]` to `ans[(i + k) % n]`.
- Finally, we assign `ans` back to `nums`.

This approach is simple, clear, and avoids edge case bugs for large `k` values.

---

## 🔍 Algorithm Steps  
1. Let `n = nums.size()`.
2. Create a new array `ans` of size `n`.
3. For every `i` from `0` to `n - 1`:
   - Set `ans[(i + k) % n] = nums[i]`.
4. Set `nums = ans`.

---

## ⏱️ Time Complexity  
**O(n)** — Every element is moved exactly once.

---

## 🧮 Space Complexity  
**O(n)** — Extra space used for the temporary array `ans`.

---
