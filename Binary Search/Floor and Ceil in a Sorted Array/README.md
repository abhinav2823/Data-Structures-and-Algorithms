# 🔗 Problem: Ceil The Floor

**Problem Link:**  
[GeeksforGeeks - Ceil The Floor](https://www.geeksforgeeks.org/problems/ceil-the-floor2802/1)

---

## 📄 Problem Statement

Given an **unsorted** array `arr[]` of integers and an integer `x`, find the **floor** and **ceiling** of `x`.

- **Floor of x:** Largest element ≤ `x`.
- **Ceil of x:** Smallest element ≥ `x`.

Return an array `[floor, ceil]`.  
If floor or ceil doesn't exist, return `-1` for that value.

---

## 🧠 Approach & Thought Process

- Since binary search works only on **sorted arrays**, first sort `arr[]`.
- Perform **binary search** twice:
  - One to find the **floor**.
  - Another to find the **ceil**.
- Track candidate values while narrowing the binary search.

---

## 🔍 Algorithm Steps

1. **Sort** the array `arr[]`.
2. **Floor Search:**
   - Use binary search.
   - If `arr[mid] <= x`, update `floor = arr[mid]`, search right.
   - Else search left.
3. **Ceil Search:**
   - Use binary search.
   - If `arr[mid] >= x`, update `ceil = arr[mid]`, search left.
   - Else search right.
4. Return `[floor, ceil]` in a vector.

---

## ⏱️ Time Complexity

- **O(n log n)** — Sorting the array.
- **O(log n)** — Each binary search for floor and ceil.

> **Total:** O(n log n)

---

## 🧮 Space Complexity

- **O(1)** — Only constant extra space used.
