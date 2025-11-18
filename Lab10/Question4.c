#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char message[500];
    int domain, found = 0;
    printf("Enter message: ");
    fgets(message, 50, stdin);
    message[strcspn(message, "\0")] = '\n';
    for (int i = 0; message[i] != '\0'; i++)
    {
        char ch = message[i];

        if (isalpha(ch))
        {
            char base = isupper(ch) ? 'A' : 'a';
            ch = (ch - base + 3) % 26 + base;
            message[i] = ch;
        }
    }

    printf("Encrypted message: %s", message);
}
