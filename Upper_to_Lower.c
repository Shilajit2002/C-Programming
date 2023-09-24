#include <stdio.h>
int main()
{
    char small[1000], capital[1000];
    printf("Enter any word or line in capital letter : ");
    gets(capital);
    int i;
    for (i = 0; capital[i] != '\0'; i++)
    {
        if (capital[i] >= 'A' && capital[i] <= 'Z')
        {
            small[i] = capital[i] + 32;
        }
        else
        {
            small[i] = capital[i];
        }
    }
    small[i] = '\0';
    printf("The LowerCase of this is : ");
    puts(small);
}