# 🥈 Problem: Second Largest Element in Array

**🔗 Link:** [GeeksforGeeks - Second Largest](https://www.geeksforgeeks.org/problems/second-largest3735/1)

---

## 📝 Problem Statement

Given an array of positive integers `arr[]`, return the **second largest** element from the array.  
If the second largest element doesn't exist, return `-1`.

> ⚠️ Note: The second largest element should not be equal to the largest element.

---

## 💡 Approach and Thought Process

- We maintain two variables:
  - `largest`: to track the largest value.
  - `secondLargest`: to track the second largest distinct value.
- Traverse the array once and:
  - If the current element is greater than `largest`, update both `largest` and `secondLargest`.
  - If the current element is not equal to `largest` but is greater than `secondLargest`, update `secondLargest`.
- After traversal, if no valid second largest is found, return `-1`.

This ensures:
- Only distinct values are considered.
- The array is scanned only once — efficient and simple.

---

## 🧾 Algorithm (Step-by-Step)

1. Initialize `largest = INT_MIN`, `secondLargest = INT_MIN`.
2. If the array has less than 2 elements, return `-1`.
3. Traverse through the array:
   - If `arr[i] > largest`:
     - Set `secondLargest = largest`.
     - Set `largest = arr[i]`.
   - Else if `arr[i] > secondLargest` and `arr[i] != largest`:
     - Set `secondLargest = arr[i]`.
4. If `secondLargest` remains `INT_MIN`, return `-1`.
5. Otherwise, return `secondLargest`.

---

## ⏱️ Time and Space Complexity

- **Time Complexity:** O(n)  
  _(Only one pass is needed through the array.)_

- **Space Complexity:** O(1)  
  _(Only constant space used for two variables.)_

---
