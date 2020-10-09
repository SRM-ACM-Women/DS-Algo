## Searching Algorithms  
-> Name: Jump Search

-> Concept: The fundamental idea behind this searching technique is to search fewer number of elements compared to linear search algorithm (which scans every element in the array to check if it matches with the element being searched or not). This can be done by skipping some fixed number of array elements or jumping ahead by fixed number of steps in every iteration.

-> Algorithm:
•	Jump Search is a searching algorithm for sorted arrays. 
•	Suppose we have an array arr[] of size n and block (to be jumped) size m. 
•	We search at the indexes arr[0], arr[m], arr[2m]…..arr[km] and so on
•	Once we find the interval (arr[km] < x < arr[(k+1)m])
•	We perform a linear search operation from the index km to find the element x.


->Name: Exponential Search

->Concept:
Exponential search involves two steps:
1.	Find range where element is present
2.	Do Binary Search in above found range.

->Algorithm:
•	start with subarray size 1,
•	compare its last element with x, then try size 2, then 4 and so on until last element of a subarray is not greater.
Once we find an index i (after repeated doubling of i),
•	we know that the element must be present between i/2 and i
