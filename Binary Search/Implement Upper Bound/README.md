# 🔗 Problem: Implement Upper Bound

**Problem Link:**  
[GeeksforGeeks - Implement Upper Bound](https://www.geeksforgeeks.org/problems/implement-upper-bound/1)

---

## 📄 Problem Statement

Given a **sorted array** `arr[]` and a number `target`, find the **upper bound** of `target` in the array.

> 📌 The **upper bound** of a number is the **smallest index** in the array such that `arr[index] > target`.

If **no such index exists** (i.e., all elements are ≤ target), return the **length of the array**.

---

## 🧠 Approach & Thought Process

- Since the array is **sorted**, we can efficiently apply **binary search**.
- We want to find the **first element greater than `target`**.
- Use binary search to check if the `mid` value is greater than `target`:
  - If **yes**, it’s a potential answer → store the index and search **left half** for a smaller valid index.
  - If **no**, move to the **right half**.

---

## 🔍 Algorithm Steps

1. Initialize:
   - `low = 0`, `high = n - 1`, `result = n` (default if no element > target).
2. While `low <= high`:
   - Compute `mid = (low + high) / 2`.
   - If `arr[mid] > target`:
     - Store `mid` in `result`.
     - Move left: `high = mid - 1`.
   - Else:
     - Move right: `low = mid + 1`.
3. After the loop, return `result`.

---

## ⏱️ Time Complexity

**O(log n)** — Efficient binary search.

---

## 🧮 Space Complexity

**O(1)** — Only a few variables are used.
