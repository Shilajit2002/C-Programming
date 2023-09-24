#include<stdio.h>
int main ()
{
    //variable declaration
    int n,i,j,k=0;
    int ch;
    //print the statement
    printf("Enter the Number of Lines = ");
    //get the value of n
    scanf("%d",&n);
    //outer loop for pattern
    for(int i=0;i<n;i++)
    {
        //inner loop for left side alphabet
        for(j=65;j<n+65-i;j++)
        {
            ch = j;
            printf("%c", ch);
        }
        //inner loop for space
        for(j=0;j<=k;j++)
        {
            if(i!=0)
            printf(" ");
        }
        //inner loop for right side alphabet
        for(j=n+64-i;j>=65;j--)
        {
            ch = j;
            {
            //condtion for printing alphabet
            if(j!=n+64)
            printf("%c", ch);
            }   
        }
        if(i!=0)
        k=k+2;
        //print the new line
        printf("\n");
    }
}