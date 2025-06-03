# 🔗 Problem: Missing Number

**Problem Link:**  
[LeetCode - Missing Number](https://leetcode.com/problems/missing-number/)

---

## 📄 Problem Statement  
Given an array `nums` containing `n` distinct numbers in the range `[0, n]`, return the **only number** in the range that is missing from the array.

---

## 🧠 Approach & Thought Process  
- The sum of the first `n` natural numbers including zero is given by the formula:  
  \[
  \text{totalSum} = \frac{n \times (n+1)}{2}
  \]
- Calculate the sum of elements currently in the array.  
- The missing number is the difference between `totalSum` and the sum of the array elements.

---

## 🔍 Algorithm Steps  
1. Compute `n = nums.size()`.  
2. Calculate `totalSum = n * (n + 1) / 2`.  
3. Initialize `currentSum = 0`.  
4. Iterate over `nums` and accumulate the sum into `currentSum`.  
5. Return `totalSum - currentSum` as the missing number.

---

## ⏱️ Time Complexity  
**O(n)** — Single traversal through the array.

---

## 🧮 Space Complexity  
**O(1)** — Constant extra space used.

---
