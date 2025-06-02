# 🧮 Problem: Selection Sort

**Problem Statement**  
> Given an array `arr[]`, use **Selection Sort** to sort the array in increasing order.

**Problem Link**  
> [Selection Sort – GeeksforGeeks](https://www.geeksforgeeks.org/problems/selection-sort/1)

---

## 🧠 Approach & Thought Process

Selection Sort is an in-place, comparison-based sorting algorithm. The idea is to **repeatedly select the minimum element from the unsorted part of the array and place it at the beginning** of the unsorted region.

---

## 🔍 Algorithm

1. Loop through the array from index `i = 0` to `n - 2`.
2. For each index `i`, find the index of the minimum element from the unsorted portion (`i` to `n - 1`).
3. Swap the minimum element with the element at index `i`.

---

## ⏱️ Time Complexity

| Case       | Time Complexity |
|------------|-----------------|
| Best Case  | O(n²)           |
| Average    | O(n²)           |
| Worst Case | O(n²)           |

> Selection Sort always performs O(n²) comparisons, regardless of the initial order of elements.

---

## 🧮 Space Complexity

- **O(1)** – Sorting is done in-place without using extra space.
