# 🔍 Problem: Largest Element in Array

**🔗 Link:** [GeeksforGeeks - Largest Element in Array](https://www.geeksforgeeks.org/problems/largest-element-in-array4009/1)

---

## 📝 Problem Statement

Given an array `arr[]`, the task is to find the **largest element** in the array and return it.

---

## 💡 Approach and Thought Process

To find the largest element in the array:

- We initialize a variable `maxElement` with the **smallest possible integer** (`INT_MIN`).
- Traverse the entire array and compare each element with `maxElement`.
- If any element is greater than `maxElement`, update `maxElement`.
- After the traversal, `maxElement` holds the largest value in the array.

This is a **single pass** approach and guarantees that we find the maximum in **linear time**.

---

## 🧾 Algorithm (Step-by-Step)

1. Initialize `maxElement = INT_MIN`.
2. Traverse each element in the array:
   - If `arr[i] > maxElement`, then `maxElement = arr[i]`.
3. After the loop ends, return `maxElement`.

---

## ⏱️ Time and Space Complexity

- **Time Complexity:** O(n)  
  _(We traverse the array once to find the maximum.)_

- **Space Complexity:** O(1)  
  _(We use only a constant amount of extra space.)_

---
