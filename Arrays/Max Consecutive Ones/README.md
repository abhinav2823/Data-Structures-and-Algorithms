# 🔗 Problem: Max Consecutive Ones

**Problem Link:**  
[LeetCode - Max Consecutive Ones](https://leetcode.com/problems/max-consecutive-ones/)

---

## 📄 Problem Statement  
Given a binary array `nums`, return the maximum number of consecutive 1's in the array.

---

## 🧠 Approach & Thought Process  
- Traverse the array and keep track of the current streak of consecutive 1's.
- When a 0 is encountered, update the maximum streak if the current one is larger, then reset the current count.
- After the traversal, check the maximum again in case the array ends with 1's.

---

## 🔍 Algorithm Steps  
1. Initialize two variables:  
   - `ones = 0` to keep track of the max consecutive ones found so far.  
   - `currentOnes = 0` to count the current consecutive ones streak.  
2. Iterate over each element in `nums`:  
   - If the element is `1`, increment `currentOnes`.  
   - If the element is `0`, update `ones = max(ones, currentOnes)` and reset `currentOnes = 0`.  
3. After the loop, update `ones = max(ones, currentOnes)` once more to account for the last streak.  
4. Return `ones`.

---

## ⏱️ Time Complexity  
**O(n)** — Single pass through the array.

---

## 🧮 Space Complexity  
**O(1)** — Uses a fixed number of variables.

---
