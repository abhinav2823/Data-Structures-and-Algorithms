# 🔗 Problem: Longest Subarray with Sum K

**Problem Link:**  
[GeeksforGeeks - Longest Subarray with Sum K](https://www.geeksforgeeks.org/problems/longest-sub-array-with-sum-k0809/1)

---

## 📄 Problem Statement  
Given an array `arr[]` containing integers and an integer `k`, find the length of the longest subarray whose sum equals `k`.  
Return `0` if no such subarray exists.

---

## 🧠 Approach & Thought Process  
- Use prefix sums to keep track of the cumulative sum up to each index.
- Maintain a map/dictionary to store the earliest index where a prefix sum occurs.
- For each index, compute the current prefix sum.  
  - If prefix sum equals `k`, update the max length as the entire subarray from start to current index.  
  - Else check if `(prefix sum - k)` exists in the map. If yes, a subarray summing to `k` exists between the stored index + 1 and current index. Update max length accordingly.
- Store the prefix sum and index only if this prefix sum hasn't been seen before to maximize subarray length.

---

## 🔍 Algorithm Steps  
1. Initialize:  
   - `sum = 0` (to keep running prefix sum)  
   - `maxLen = 0` (to store longest subarray length)  
   - `prefixSum` map to store prefix sum → earliest index.  
2. Traverse the array from `i = 0` to `n-1`:  
   - Update `sum += arr[i]`.  
   - If `sum == k`, update `maxLen = max(maxLen, i + 1)`.  
   - Compute `rem = sum - k`.  
   - If `rem` exists in `prefixSum`, update `maxLen = max(maxLen, i - prefixSum[rem])`.  
   - If `sum` is not in `prefixSum`, store `prefixSum[sum] = i`.  
3. After traversal, return `maxLen`.

---

## ⏱️ Time Complexity  
**O(n)** — Single pass through the array with constant time lookups in map.

---

## 🧮 Space Complexity  
**O(n)** — Map to store prefix sums and their earliest indices.

---
