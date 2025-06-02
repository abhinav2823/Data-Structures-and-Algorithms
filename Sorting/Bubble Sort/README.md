# 🧮 Problem: Bubble Sort

**Problem Statement**  
> Given an array `arr[]`, sort the array using the **Bubble Sort** algorithm.

**Problem Link**  
> [Bubble Sort – GeeksforGeeks](https://www.geeksforgeeks.org/problems/bubble-sort/1)

---

## 🧠 Approach & Thought Process

Bubble Sort is a simple comparison-based sorting algorithm. The idea is to **repeatedly swap adjacent elements if they are in the wrong order**, causing larger elements to "bubble up" to the end of the array in each iteration.

To optimize the standard Bubble Sort, we use a flag `didSwap` to detect if any swaps occurred in a pass. If no swaps occur, the array is already sorted, and we can break early — improving the average case performance.

---

## 🔍 Algorithm

1. Start from the end of the array and reduce the range in each pass.
2. For each pass, compare adjacent elements:
   - If the current element is greater than the next, swap them.
   - Set `didSwap = true`.
3. If no swaps occurred in a pass, the array is already sorted. Break early.

---

## ⏱️ Time Complexity

| Case       | Time Complexity |
|------------|-----------------|
| Best Case  | O(n)            |
| Average    | O(n²)           |
| Worst Case | O(n²)           |

> Best case occurs when the array is already sorted (due to early termination check).

---

## 🧮 Space Complexity

- **O(1)** – Sorting is done in-place without using extra space.
