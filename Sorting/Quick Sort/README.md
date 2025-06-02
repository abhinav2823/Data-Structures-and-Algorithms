# 🧮 Problem: Quick Sort

**Problem Statement**  
> Implement Quick Sort, a **Divide and Conquer** algorithm, to sort an array `arr[]` in ascending order.  
> Given an array `arr[]` with starting index `low` and ending index `high`, complete the functions `partition()` and `quickSort()`.  
> Use the **first element as the pivot** so that all elements less than or equal to the pivot come before it, and elements greater than the pivot follow it.

**Problem Link**  
> [Quick Sort – GeeksforGeeks](https://www.geeksforgeeks.org/problems/quick-sort/1)

---

## 🧠 Approach & Thought Process

Quick Sort works by selecting a pivot element and **partitioning** the array such that:
- Elements smaller than or equal to the pivot are on the left,
- Elements greater than the pivot are on the right.

This process is recursively applied to the left and right subarrays.

---

## 🔍 Algorithm

1. **Base Condition**: If `low >= high`, return.
2. **Partition Step**:
   - Choose the **first element** as the pivot.
   - Initialize two pointers `i` and `j`.
   - Move `i` right until an element larger than the pivot is found.
   - Move `j` left until an element smaller than or equal to the pivot is found.
   - If `i < j`, swap `arr[i]` and `arr[j]`.
   - After loop ends, swap pivot with `arr[j]` to place pivot in its correct position.
3. Recursively call `quickSort` on left and right subarrays.

---

## ⏱️ Time Complexity

| Case       | Time Complexity |
|------------|-----------------|
| Best Case  | O(n log n)      |
| Average    | O(n log n)      |
| Worst Case | O(n²)           |

> Worst case happens when the pivot chosen is always the smallest or largest element (e.g., already sorted array with first element as pivot).

---

## 🧮 Space Complexity

- **O(log n)** – Due to recursive stack (average case).
- **O(n)** – In worst case due to stack depth when array is skewed.
