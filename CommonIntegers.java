//Print Common Integers between Two Lists of size M,N

import java.util.*;
public class Hello {

    public static void main(String[] args) throws IOException
    {
		
		int i,j,k;
		Scanner in=new Scanner(System.in);
		int m=in.nextInt();
		int n=in.nextInt();
		int[] arr1=new int[100];
		int[] arr2=new int[100];
		for(i=0;i<m;i++)
		{
		    arr1[i]=in.nextInt();
		}
		for(j=0;j<n;j++)
		{
		   
		    arr2[j]=in.nextInt();
		}
	for(i=0;i<m;i++)//to remove duplicate elements in array 1
	{
	    for(j=i+1;j<m;)
	    {
	        if(arr1[j]==arr1[i])
	        {
	            for(k=j;k<m;k++)
	            {
	                arr1[k]=arr1[k+1];
	            }
	            m--;
	        }
	        else{
	            j++;
	        }
	    }
	}
	
for(i=0;i<n;i++)//to remove duplicate elements in array 2
{
  for(j=i+1;j<n;)
  {
      if(arr2[j]==arr2[i])
      {
          for(k=j;k<n;k++)
          {
              arr2[k]=arr2[k+1];
          }
          n--;
      }
      else{
          j++;
      }
  }
}

int flag=0;
for(i=0;i<m;i++)//to print the common elements in two arrays after removing all duplicates
{
    for(j=0;j<n;j++)
    {
        if(arr1[i]==arr2[j])
        {
            flag=1;
            System.out.print(arr1[i]+" ");
        }
        
    }
    
}
if(flag==0)
{
    System.out.print("Invalid");
}
}

}



