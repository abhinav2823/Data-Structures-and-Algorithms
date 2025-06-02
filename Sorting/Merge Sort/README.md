# 🧮 Problem: Merge Sort

**Problem Statement**  
> Given an array `arr[]`, its starting position `l` and its ending position `r`, sort the array using the **Merge Sort** algorithm.

**Problem Link**  
> [Merge Sort – GeeksforGeeks](https://www.geeksforgeeks.org/problems/merge-sort/1)

---

## 🧠 Approach & Thought Process

Merge Sort is a classic **Divide and Conquer** algorithm. The idea is to recursively split the array into halves, sort the two halves independently, and then **merge** the two sorted halves into a single sorted array.

---

## 🔍 Algorithm

1. **Divide**: Split the array into two halves recursively until each sub-array has one element.
2. **Conquer**: Sort the two halves recursively.
3. **Merge**: Merge the sorted halves using a temporary array:
   - Compare the front elements of both halves.
   - Append the smaller one to the temporary array.
   - Repeat until all elements are merged in sorted order.

---

## ⏱️ Time Complexity

| Case       | Time Complexity |
|------------|-----------------|
| Best Case  | O(n log n)      |
| Average    | O(n log n)      |
| Worst Case | O(n log n)      |

> Merge Sort always divides the array into halves and processes each half recursively, leading to logarithmic depth and linear work per level.

---

## 🧮 Space Complexity

- **O(n)** – Extra space is used for the temporary array during merging.
