#include <stdio.h>
#include <string.h>

int main()
{
    char email[50];
    int domain, found = 0;
    printf("Enter email: ");
    fgets(email, 50, stdin);
    email[strcspn(email, "\0")] = '\n';
    for (int i = 0; i < strlen(email); i++)
    {
        if (email[i] == '@')
        {
            domain = i + 1;
            found = 1;
            break;
        }
    }
    if (found == 1)
    {
        for (int i = domain; i < strlen(email); i++)
        {
            printf("%c", email[i]);
        }
    }
    else
        printf("invalid email");
    return 0;
}
