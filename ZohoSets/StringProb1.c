//Given two Strings s1 and s2, remove all the characters from s1 which is present in s2.
#include <stdio.h>
#include<string.h>
int main()
{
 char str1[10],str2[10],ch;
 int len1,len2,i,j;
 ch="\0";
 scanf("%s%n",str1,&len1);
 scanf("%s%n",str2,&len2);
 i=0;
while(i<=len1-1)
{
     for(j=0;j<=len2-1;j++)
     {
         if(str2[j]==str1[i])
         {
             str1[i]=ch;
         }
     }
    i++;
    j=0;
}
for(i=0;i<=len1-1;i++)
{
    if(str1[i]!=ch)
    {
        printf("%c",str1[i]);
    }
}
 
}

