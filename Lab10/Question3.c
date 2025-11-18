#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char str[200];
    int vowels = 0, consonants = 0, digits = 0, spaces = 0, characters = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    for (int i = 0; str[i] != '\0'; i++)
    {
        char ch = str[i];

        if (isalpha(ch))
        {
            char lower = tolower(ch);
            if (lower == 'a' || lower == 'e' || lower == 'i' || lower == 'o' || lower == 'u')
                vowels++;
            else
                consonants++;
        }
        else if (isdigit(ch))
        {
            digits++;
        }
        else if (ch == ' ')
        {
            spaces++;
        }
    }

    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);
    printf("Digits: %d\n", digits);
    printf("Spaces: %d\n", spaces);
    printf("Total Characters: %d\n", strlen(str));
    return 0;
}
