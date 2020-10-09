#python implementation of bubblesort algorithm
def bubbleSort(a): 
    n = len(a) 
  
    # A loop to traverse through all array elements 
    for i in range(n-1):         
        for j in range(0, n-i-1):
        
            # Idea of bubblesort is to traverse list/array from 0 to n-i-1 and to swap elements if the element at next index is lesser than element on current index.
            if a[j] > a[j+1] : 
                a[j], a[j+1] = a[j+1], a[j] 
                
#sample list to check working of algorithm
l=[1,2,6,9,82,0]
bubbleSort(l)
print("Array in ascending order using bubblesort is:")
for i in range(len(l)):
    print(l[i]," ")
  
