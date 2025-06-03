# 🔄 Problem: Check if Array is Sorted and Rotated

## 🔗 Problem Link  
[LeetCode - Check if Array is Sorted and Rotated](https://leetcode.com/problems/check-if-array-is-sorted-and-rotated/)

---

## 📄 Problem Statement  
Given an array `nums`, return `true` if the array was **originally sorted in non-decreasing order**, then rotated **some number of positions** (including zero). Otherwise, return `false`.

> Note: An array A rotated by x positions results in an array B of the same length such that  
> B[i] == A[(i+x) % A.length] for every valid index i.  
> The array may contain duplicate elements.

---

## 🧠 Approach & Thought Process  
- A sorted and rotated array will have **at most one point** where `nums[i] > nums[(i+1)%n]`.
- This is called a **"drop"** or **"rotation point"**.
- If the number of such drops is **more than one**, the array is not sorted and rotated.
- The modulo operator `%` is used to wrap around and compare the last element with the first.

---

## 🔍 Algorithm Steps  
1. Initialize a counter `peak = 0`.
2. Loop through the array from `i = 0` to `i = n-1`:
   - If `nums[i] > nums[(i+1)%n]`, increment `peak`.
3. If `peak > 1`, return `false`; otherwise return `true`.

---

## ⏱️ Time Complexity  
**O(n)** — We make a single pass over the array to count the drops.

---

## 🧮 Space Complexity  
**O(1)** — Only a constant counter variable is used.

---
