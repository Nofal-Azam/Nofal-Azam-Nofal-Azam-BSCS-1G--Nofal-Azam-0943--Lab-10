#include <stdio.h>
#include <string.h>

int main()
{
    char students[3][4][20] = {
        {"Appetizer", "Garlic Bread", "Fries", "Wings"},
        {"Main Course", "Biryani", "burger", "pizza"},
        {"Desserts", "Ice Cream", "Gulab Jamun", "Custard"},
    };
    float Appitizer[3] = {3, 5, 15};
    float Main[3] = {20, 8, 18};
    float Dessert[3] = {50, 100, 2};

    for (int i = 0; i < 3; i++)
    {
        printf("%s:\n", students[i][0]);
        for (int j = 1; j < 4; j++)
        {
            printf("%s%d: %s\n", students[i][0], j, students[i][j]);
        }
    }
    for (int i = 0; i < 3; i++)
    {
        if (Appitizer[i] < 10)
        {
            printf("%s is budget Friendly it costs %.1f\n", students[0][i + 1], Appitizer[i]);
        }
    }
    for (int i = 0; i < 3; i++)
    {
        if (Main[i] < 10)
        {
            printf("%s is budget Friendly it costs %.1f\n", students[0][i + 1], Main[i]);
        }
    }
    for (int i = 0; i < 3; i++)
    {
        if (Dessert[i] < 10)
        {
            printf("%s is budget Friendly it costs %.1f\n", students[0][i + 1], Dessert[i]);
        }
    }
}