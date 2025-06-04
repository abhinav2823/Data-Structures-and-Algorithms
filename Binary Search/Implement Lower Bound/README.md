# 🔗 Problem: Floor in a Sorted Array

**Problem Link:**  
[GeeksforGeeks - Floor in a Sorted Array](https://www.geeksforgeeks.org/problems/floor-in-a-sorted-array-1587115620/1)

---

## 📄 Problem Statement

Given a **sorted array** `arr[]` and an integer `x`, find the **index (0-based)** of the **largest element** in `arr[]` that is **less than or equal to `x`**.  
This element is called the **floor of `x`**.  
If such an element does **not exist**, return `-1`.

> 📌 Note: In case of **multiple occurrences**, return the **index of the last occurrence** of the floor.

---

## 🧠 Approach & Thought Process

- Since the array is **sorted**, **binary search** is ideal to solve this in `O(log n)` time.
- We'll maintain a variable `result` initialized to `-1` (in case no floor exists).
- During binary search:
  - If `arr[mid] <= x`, it **may be a floor**, but we continue searching in the **right half** to find a larger (but still valid) floor.
  - If `arr[mid] > x`, the floor must be in the **left half**.

---

## 🔍 Algorithm Steps

1. Initialize `low = 0`, `high = n - 1`, `result = -1`.
2. While `low <= high`:
   - Calculate `mid = (low + high) / 2`.
   - If `arr[mid] <= x`:
     - Update `result = mid`.
     - Move right: `low = mid + 1`.
   - Else:
     - Move left: `high = mid - 1`.
3. After the loop, return `result`.

---

## ⏱️ Time Complexity

**O(log n)** — Efficient due to binary search on sorted array.

---

## 🧮 Space Complexity

**O(1)** — No extra space used.

---
