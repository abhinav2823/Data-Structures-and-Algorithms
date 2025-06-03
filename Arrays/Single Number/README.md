# 🔗 Problem: Single Number

**Problem Link:**  
[LeetCode - Single Number](https://leetcode.com/problems/single-number/)

---

## 📄 Problem Statement  
Given a non-empty array of integers `nums`, every element appears twice except for one. Find that single one.

You must implement a solution with linear runtime complexity and use only constant extra space.

---

## 🧠 Approach & Thought Process  
- Use the XOR operation which has the property:  
  - `x ^ x = 0` (XOR of a number with itself is zero)  
  - `x ^ 0 = x` (XOR of a number with zero is the number itself)  
- XORing all elements results in cancelling out the numbers appearing twice, leaving only the single unique number.

---

## 🔍 Algorithm Steps  
1. Initialize an integer variable `ans = 0`.  
2. Iterate through each element in `nums`:  
   - Update `ans` as `ans = ans ^ nums[i]`.  
3. After the loop ends, `ans` will hold the single number that appears once.  
4. Return `ans`.

---

## ⏱️ Time Complexity  
**O(n)** — Single pass through the array.

---

## 🧮 Space Complexity  
**O(1)** — Only a few variables used, constant space.

---
