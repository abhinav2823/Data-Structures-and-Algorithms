# 🧮 Problem: Insertion Sort

**Problem Statement**  
> The task is to complete the `insertionSort()` function which is used to implement **Insertion Sort** on a given array `arr[]`.

**Problem Link**  
> [Insertion Sort – GeeksforGeeks](https://www.geeksforgeeks.org/problems/insertion-sort/1)

---

## 🧠 Approach & Thought Process

Insertion Sort builds the final sorted array one element at a time. The idea is to **iterate through the array and, for each element, shift larger elements of the sorted portion to the right and insert the current element at the correct position**.

---

## 🔍 Algorithm

1. Start from the second element (index `i = 1`) and iterate to the end of the array.
2. For each element, compare it with the elements before it.
3. Shift all elements greater than the current element to the right.
4. Insert the current element at its correct position.

---

## ⏱️ Time Complexity

| Case       | Time Complexity |
|------------|-----------------|
| Best Case  | O(n)            |
| Average    | O(n²)           |
| Worst Case | O(n²)           |

> Best case occurs when the array is already sorted. The number of comparisons is minimized in that scenario.

---

## 🧮 Space Complexity

- **O(1)** – Sorting is done in-place without using extra space.
