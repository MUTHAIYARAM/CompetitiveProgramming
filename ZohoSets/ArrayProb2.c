/*Given an array with repeated numbers, Find the top three repeated numbers.
input: array[]={3, 4, 2, 3, 16, 3, 15, 16, 15, 15, 16, 2, 3}
output: 3, 16, 15.
*/
#include <stdio.h>
int main ()
{
  int a[100], count,mc = 1,max,i=1,j,k=1,n;
  scanf("%d",&n);
  for (i = 1; i <= n; i++)
    {
      scanf ("%d", &a[i]);
    }
while(k<=3)
{
  for (i = 1; i <= n; i++)
    {
      count = 0;
     for (j = 1; j <= n; j++)
      {
          if(a[i]==0)
          {
              i++;
          }
          else if(a[i]==a[j])
          {
              count++;
          }
      }
      if (count >= mc)
	  {
	  mc = count;
	   max=a[i];
	 }
   }
mc=1;
printf("%d ",max);
k++;
for(j=1;j<=n;j++)
    {
        if(a[j]==max)
        {
            a[j]=0;
        }
    }
}
}
