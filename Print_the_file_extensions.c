#include<stdio.h>
int main()
{
    char ch[1000];
    int i,j;
    printf("Enter the Filename: ");
    scanf("%s",ch);
    for(i=0;ch[i]!='\0';i++)
    {
        if(ch[i]=='.')
        {
            printf("File Extensions is : '");
            for(j=i+1;ch[j]!='\0';j++)
            {
                printf("%c",ch[j]);
            }
            printf("'");
            break;
        }
    }
}