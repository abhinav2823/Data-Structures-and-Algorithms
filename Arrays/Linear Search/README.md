# 🔎 Problem: Sorted Array Search


---

## 📄 Problem Statement  
Given an array `arr[]` sorted in ascending order and an integer `k`, return `true` if `k` is present in the array; otherwise, return `false`.

---

## 🧠 Approach & Thought Process  
- Since the array is sorted, a more optimal solution would be binary search, but here a simple linear search is implemented.
- Traverse the array from start to end.
- If any element matches `k`, return `true`.
- If traversal ends without finding `k`, return `false`.

---

## 🔍 Algorithm Steps  
1. Loop through each element in `arr`.
2. If `arr[i] == k`, return `true`.
3. If the loop finishes without a match, return `false`.

---

## ⏱️ Time Complexity  
**O(n)** — Linear scan through the array.

---

## 🧮 Space Complexity  
**O(1)** — No extra space used.

---
