#include <stdio.h>
#include "liib.h"
  
int main (int argc, char *argv[])
{
  
    printf("5! = %ldn",    factorial(5));
  
    int i, arr[] = { 40, 10, 100, 90, 20, 25 };
    quickSort(arr, 0, 5);
    printf("after sort, array is: n");
    for (i=0; i<6; i++)
        printf ("%d ", arr[i]);
    printf("n");
      
    return 0;
}