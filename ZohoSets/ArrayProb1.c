/*
Find the next greater element for each element in given array.
input: array[]={6, 3, 9, 10, 8, 2, 1, 15, 7};
output: {7, 5, 10, 15, 9, 3, 2, _, 8}
If we are solving this question using sorting, we need to use any O(nlogn) sorting algorithm.
*/

#include <stdio.h>
int main()
{
    int arr1[100],arr2[100],i,j,swap,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr1[i]);
        arr2[i]=arr1[i];
    }
    for (i = 1 ; i < n ; ++i)
  {
    for (j = 0 ; j <(n - i); ++j)
    {
      if (arr2[j] > arr2[j+1])
      {
        swap = arr2[j];
        arr2[j]   = arr2[j+1];
        arr2[j+1] = swap;
      }
    }
  }
  for(i=0;i<n;i++)
  {
      for(j=0;j<n;j++)
      {
          if(j==n-1)
          {
              printf("- ");
          }
          else if(arr1[i]==arr2[j])
          {
              if(arr2[j]!=arr2[j+1])
              {
              printf("%d ",arr2[j+1]);
              break;
              }
              elseSKI
              {
                  printf("%d ",arr2[j+2]);
                  break;
              }
       }
          
    }   
}

