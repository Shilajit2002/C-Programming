#include <stdio.h>
int main()
{
    char word[10000];
    printf("\nEnter any Word or Line : ");
    gets(word);
    printf("ASCII Value of %s is : ", word);
    for (int i = 0; word[i] != '\0'; i++)
    {
        printf("%d ", word[i]);
    }

    char ascii;
    printf("\nEnter any Alphabet : ");
    scanf("%c", &ascii);
    printf("ASCII Value of %c is : %d ", ascii, ascii);
}