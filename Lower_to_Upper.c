#include <stdio.h>
int main()
{
    char small[1000], capital[1000];
    printf("Enter any word or line in small letter : ");
    gets(small);
    int i;
    for (i = 0; small[i] != '\0'; i++)
    {
        if (small[i] >= 'a' && small[i] <= 'z')
        {
            capital[i] = small[i] - 32;
        }
        else
        {
            capital[i] = small[i];
        }
    }
    capital[i] = '\0';
    printf("The Uppercase of this is : ");
    puts(capital);
}