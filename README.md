Median-of-Two-Sorted-Arrays
===

## Catalog

[TOC]

## Flowchart (or pseudo code)
1. Calculate the medians m1 and m2 of the input arrays ar1[] and ar2[] respectively.
2. If m1 and m2 both are equal then we are done.
    ```
    return m1 (or m2)
    ```
3. If m1 is greater than m2, then median is present in one of the below two subarrays.
    
    a. From first element of ar1 to m1 (ar1[0...|_n/2_|])
    
    b. From m2 to last element of ar2  (ar2[|_n/2_|...n-1])
4. If m2 is greater than m1, then median is present in one of the below two subarrays.
   
   a. From m1 to last element of ar1  (ar1[|_n/2_|...n-1])
   
   b. From first element of ar2 to m2 (ar2[0...|_n/2_|])
5. Repeat the above process until size of both the subarrays becomes 2.
6. If size of the two arrays is 2 then use below formula to get the median.
    ```
    Median = (max(ar1[0], ar2[0]) + min(ar1[1], ar2[1]))/2
    ```

## Analysis of time complexity
- Basis method: O(n)
- Advanced method: O(logn)

## Prove answer
1. 這邊我先以python隨機產生N = 10^4, 10^5, 10^6的數據資料
    - Function說明：random_int_list(min ,max, N)
    ![](https://i.imgur.com/51tceRI.png)
2. 產生隨機測資以後，進行3種不等測資比較
* N = 10^4
    * basis: 98 microseconds
    ![](https://i.imgur.com/0p9IaUq.png)
    * advanced: 20 microseconds
    ![](https://i.imgur.com/EyL7d3w.png)

* N = 10^5
    * basis: 693 microseconds
    ![](https://i.imgur.com/r3YYXS4.png)
    * advanced: 28 microseconds
    ![](https://i.imgur.com/QQAbDUO.png)

* N = 10^6 
    * basis: 6581 microseconds
    ![](https://i.imgur.com/iZEu5Wt.png)
    * advanced: 66 microseconds
    ![](https://i.imgur.com/JM5gJDc.png)
    
## Summary

| Method \ N| 10^4     | 10^5     | 10^6    |
| --------  | -------- | -------- |-------- |
|  Basis    | 98       | 693      |6581     |
| Advanced  | 20       | 28       |66       |
> (Meas. unit: microseconds)



## Reference and FAQ
* https://www.geeksforgeeks.org/median-of-two-sorted-arrays/
* https://zhuanlan.zhihu.com/p/33106213
* https://www.geeksforgeeks.org/measure-execution-time-function-cpp/

:::info
**Find this document incomplete?** Leave a comment!
:::

###### tags: `algorithm` 