//Print the given input string in ‘X’ format.
//The string length will be of odd length.
#include <stdio.h>

int main()
{
    char str[100];
    char a[100][100];
    int len,i,j,c;
    scanf("%s%n",str,&len);
    c=len-1;
    for(i=0;i<=len-1;i++)
    {
        for(j=0;j<=len-1;j++)
        {
            if(i==j)
            {
                a[i][j]=str[i];
                printf("%c",a[i][j]);
            }
          
            if(j==c && i!=j)
            {
                a[i][j]=str[c];
                printf("%c",a[i][j]);
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
        c--;
    }

    return 0;
}

