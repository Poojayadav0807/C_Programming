#include<stdio.h>
#include<conio.h>

int main()
{
    char ch=0;

    printf("\n Enter a character (in lower case)");
    scanf("%c",&ch);


    switch(ch)
    {
        case 'a':
            printf("%c is a vowel",ch);
            break;

        case 'e':
            printf("%c is a vowel",ch);
            break;

        case 'i':
            printf("%c is a vowel",ch);
            break;

        case 'o':
            printf("%c is a vowel",ch);
            break;


        case 'u':
            printf("%c is a vowel",ch);
            break;

    default:
        printf("%c is consonont",ch);



    }

    return 0;
}
