# 🔗 Problem: Search in Rotated Sorted Array

**Problem Link:**  
[LeetCode - Search in Rotated Sorted Array](https://leetcode.com/problems/search-in-rotated-sorted-array/description/)

---

## 📄 Problem Statement

You are given a sorted array `nums` which is possibly rotated at an unknown pivot, and an integer `target`. Return the index of `target` if it is in `nums`, otherwise return `-1`.

### Example:
Input: `nums = [4,5,6,7,0,1,2]`, `target = 0`  
Output: `4`

---

## ✅ Constraints

- `1 <= nums.length <= 5000`
- `-10^4 <= nums[i] <= 10^4`
- All values in `nums` are **distinct**
- Array is sorted and then rotated
- Solution must run in **O(log n)** time

---

## 🧠 Approach

This is a classic **modified binary search** problem:

1. We start with standard binary search.
2. At each step, we check which half is **sorted** (left or right).
3. Once the sorted half is identified:
   - We determine whether the `target` lies in that half.
   - If it does, we discard the other half.
   - Otherwise, we continue in the unsorted portion.

---

## 🔍 Key Observations

- If `nums[low] <= nums[mid]`: Left part is sorted.
- If `nums[mid] <= nums[high]`: Right part is sorted.
- Check if the `target` lies in the **sorted part** using range comparison.

---

## ⏱️ Time Complexity

- **O(log n)** — Binary search is used, so the complexity remains logarithmic.

---

## 🧮 Space Complexity

- **O(1)** — No additional data structures are used.

---