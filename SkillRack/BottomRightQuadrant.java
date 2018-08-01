/**
 *
 * @author muthu
 */
import java.io.*;
import java.util.*;
public class NewClass 
{
    public static void main(String ar[])
    {
        Scanner s=new Scanner(System.in);
        int i,j,n;
        n=s.nextInt();
        int a[][]=new int[n][n];
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
               a[i][j]=s.nextInt();
            }
        }
        for(i=n/2;i<n;i++)
        {
            for(j=n/2;j<n;j++)
            {
               System.out.print(a[i][j]+" ");
            }
            System.out.println();
        }
         
    }
}

                                       
