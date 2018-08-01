/*  Print X pattern as below
*   Given 3
*   1***1
*   *2*2*
*   **3**
*   *2*2*
*   1***1
*/

package javaapplication1;

/**
 *
 * @author muthu
 */
import java.io.*;
import java.util.*;
public class JavaApplication1 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args)
    {
   
    int a[][]=new int[100][100];
    int len,i,j,c,t=1,flag=0;
    Scanner in=new Scanner(System.in);
    int len1=in.nextInt();
    len=len1+(len1-1);
    c=len-1;
    for(i=0;i<len;i++)
    {
        for(j=0;j<len;j++)
        {
            if(i==j)
            {
                a[i][j]=t;
               System.out.print(a[i][j]);
            }
            else if(j==c && i!=j)
            {
                a[i][j]=t;
                System.out.print(a[i][j]);
            }
            else
            {
                System.out.print("*");
            }
        }
         System.out.printf("\n");
        c--;
        if(flag==0)
        t++;
        else
        t--;
        if(i==len1-1)
          {
            t=len1-1;
            flag=1;
          }
    }
 
}
}
