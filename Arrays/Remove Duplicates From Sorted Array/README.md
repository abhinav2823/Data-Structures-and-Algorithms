# 🚫 Problem: Remove Duplicates from Sorted Array

## 🔗 Problem Link  
[LeetCode - Remove Duplicates from Sorted Array](https://leetcode.com/problems/remove-duplicates-from-sorted-array/)

---

## 📄 Problem Statement  
Given an integer array `nums` sorted in non-decreasing order, remove the duplicates **in-place** such that each unique element appears only once.  
- The relative order of the elements should be maintained.
- Return `k`, the number of unique elements.
- Modify the array such that the first `k` elements contain the unique values. The rest of the array does not matter.

---

## 🧠 Approach & Thought Process  
- Since the array is already **sorted**, duplicates are adjacent.
- Use the **two-pointer technique**:
  - `i` points to the last unique element found.
  - `j` traverses the array to find new unique elements.
- When a new unique element is found at `j`, increment `i` and update `nums[i] = nums[j]`.

This way:
- All unique elements are grouped at the front.
- We ensure **O(1)** extra space and in-place modification.

---

## 🔍 Algorithm Steps  
1. Initialize `i = 0` (points to last unique index).
2. Loop `j` from 1 to end of array:
   - If `nums[i] != nums[j]`:
     - Increment `i`.
     - Set `nums[i] = nums[j]`.
3. Return `i + 1` as the count of unique elements.

---

## ⏱️ Time Complexity  
**O(n)** — Every element is visited once.

---

## 🧮 Space Complexity  
**O(1)** — No extra space used; modifications are done in-place.

---
