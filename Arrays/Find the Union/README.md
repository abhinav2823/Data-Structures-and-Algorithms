# 🔗 Problem: Union of Two Sorted Arrays with Duplicates

**Problem Link:**  
[GeeksforGeeks - Union of Two Sorted Arrays](https://www.geeksforgeeks.org/problems/union-of-two-sorted-arrays-1587115621/1)

---

## 📄 Problem Statement  
Given two sorted arrays `a[]` and `b[]`, each possibly containing duplicate elements, return the elements in the union of the two arrays in sorted order.  
The union is defined as the set of **distinct** elements present in either of the two arrays.

---

## 🧠 Approach & Thought Process  
- Use two pointers `i` and `j` starting at the beginning of each array.  
- Compare elements at `a[i]` and `b[j]`:  
  - If `a[i] <= b[j]`, add `a[i]` to union if it's not already the last element added. Increment `i`.  
  - Else add `b[j]` similarly and increment `j`.  
- After one array is exhausted, append remaining elements from the other array, avoiding duplicates.  
- This works efficiently since arrays are sorted, enabling linear merging with duplicate avoidance.

---

## 🔍 Algorithm Steps  
1. Initialize `i = 0`, `j = 0`, and an empty vector `unionArray`.  
2. While `i < n` and `j < m`:
   - If `a[i] <= b[j]`:
     - If `unionArray` is empty or last element is not `a[i]`, push `a[i]`.
     - Increment `i`.  
   - Else:
     - If `unionArray` is empty or last element is not `b[j]`, push `b[j]`.
     - Increment `j`.  
3. Append remaining elements from `a[]` starting at `i`, skipping duplicates.  
4. Append remaining elements from `b[]` starting at `j`, skipping duplicates.  
5. Return `unionArray`.

---

## ⏱️ Time Complexity  
**O(n + m)** — Single pass through both arrays.

---

## 🧮 Space Complexity  
**O(n + m)** — In worst case all elements are distinct and stored in unionArray.

---
