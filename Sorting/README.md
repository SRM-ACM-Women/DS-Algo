## Sorting Algorithms  
->Name: Quick Sort

-> Concept:
•	QuickSort is a Divide and Conquer algorithm. It picks an element as pivot and partitions the given array around the picked pivot. There are many different versions of quickSort that pick pivot in different ways.
•	Always pick first element as pivot.
•	Always pick last element as pivot 
•	Pick a random element as pivot.
•	Pick median as pivot.
The key process in quickSort is partition(). 

->Algorithm:

•	Target of partitions is, given an array and an element x of array as pivot
•	Put x at its correct position in sorted array 
•	Put all smaller elements (smaller than x) before x,.
•	Put all greater elements (greater than x) after x. 
•	All this should be done in linear time


->Name:Heap Sort

->Concept:
Heap sort is a comparison-based sorting technique based on Binary Heap data structure. It is similar to selection sort where we first find the maximum element and place the maximum element at the end. We repeat the same process for the remaining elements.

->Algorithm:
Heap Sort Algorithm for sorting in increasing order:
1. Build a max heap from the input data.
2. At this point, the largest item is stored at the root of the heap. Replace it with the last item of the heap followed by reducing the size of heap by 1. Finally, heapify the root of the tree.
3. Repeat step 2 while size of heap is greater than 1.

->Name: Cycle Sort

->Concept:
Cycle sort is an in-place sorting Algorithm, unstable sorting algorithm, a comparison sort that is theoretically optimal in terms of the total number of writes to the original array.

->Algorithm:
•	We have n nodes and an edge directed from node i to node j 
•	if the element at i-th index must be present at j-th index in the sorted array.
•	We one by one consider all cycles.
•	We first consider the cycle that includes first element. 
•	We find correct position of first element, place it at its correct position, say j. 
•	We consider old value of arr[j] and find its correct position
•	we keep doing this till all elements of current cycle are placed at correct position, i.e., we don’t come back to cycle starting point.

->Name:Binary Insertion Sort
->Concept:
Steps of Binary Insertion Sort are similar to Insertion Sort. But to insert a new element into a sorted subarray, we use binary search algorithm to find the suitable position for it, instead of iterating all elements backward from i to 0 position.
->Algorithm:
1. Insert an element at index i = 1 into a sorted subarray has length = 1, from the position = 0.
2. Use binary search to find position –> pos = 1.
3. Shift all elements that are from pos to i - 1 to the right side by one position.
4. Insert an element at index i = 2 into a sorted subarray has length = 2, from the position = 0.
5. Use binary search to find position –> pos = 0.
6. shift all elements that are from pos to i - 1 to the right side by one position.
7. Continue with the other elements, we can have a sorted array.

->Name:Merge Sort

->Concept:
Merge Sort is a Divide and Conquer algorithm. It divides input array in two halves, calls itself for the two halves and then merges the two sorted halves. The merge() function is used for merging two halves. The merge (arr, l, m, r) is key process that assumes that arr[l..m] and arr[m+1..r] are sorted and merges the two sorted sub-arrays into one.

->Algorithm:
MergeSort(arr[], l,  r)
If r > l
     1. Find the middle point to divide the array into two halves:  
             middle m = (l+r)/2
     2. Call mergeSort for first half:   
             Call mergeSort(arr, l, m)
     3. Call mergeSort for second half:
             Call mergeSort(arr, m+1, r)
     4. Merge the two halves sorted in step 2 and 3:
             Call merge(arr, l, m, r)
