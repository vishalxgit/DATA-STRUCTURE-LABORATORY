PROGRAM:  

#include <stdio.h>  

int main() { 

     int n, i, search, f = 0, low, high, mid, a[20]; 

     printf("\n***Binary Search***\n"); 

     printf("\nEnter the number of elements: "); 

     scanf("%d", &n); 

     // Input array elements in ascending order 

     printf("Enter %d numbers in ascending order:\n", n); 

     for (i = 0; i < n; i++) { 

         printf("a[%d] = ", i); 

         scanf("%d", &a[i]); 

     } 

     printf("Enter the search element: "); 

     scanf("%d", &search); 

     low = 0; 

     high = n - 1; 

     // Binary search 

     while (low <= high) { 

         mid = (low + high) / 2;  

        if (search < a[mid]) 

             high = mid - 1; 

         else if (search > a[mid]) 

             low = mid + 1; 

         else { 

             f = 1; 

             printf("Element %d found at index %d.\n", search, mid); 

             break; 

         } 

     } 



     if (f == 0) 

         printf("Element %d is not present in the array.\n", search); 

     return 0; 

 }    

//OUTPUT:  

***Binary Search*** 

Enter the number of elements: 4 

Enter 4 numbers in ascending order: 

a[0] = 23 

a[1] = 45 

a[2] = 67 

a[3] = 87 

Enter the search element: 45 

Element 45 found at index 1. 

***Binary Search*** 

Enter the number of elements: 4 

Enter 4 numbers in ascending order: 

a[0] = 56 

a[1] = 78 

a[2] = 87 

a[3] = 90 

Enter the search element: 10 

Element 10 is not present in the array.