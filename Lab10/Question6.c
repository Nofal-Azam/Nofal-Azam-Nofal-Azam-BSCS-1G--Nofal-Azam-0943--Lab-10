#include <stdio.h>

int main()
{
    char names[5][20];
    int marks[5];
    int highestIndex = 0;
    int sum = 0;

    for (int i = 0; i < 5; i++)
    {
        printf("\nEnter name of student %d: ", i + 1);
        scanf("%s", names[i]);

        printf("Enter marks of %s: ", names[i]);
        scanf("%d", &marks[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        sum += marks[i];
        if (marks[i] > marks[highestIndex])
        {
            highestIndex = i;
        }
    }

    float avg = (float)sum / 5;

    printf("Student Marks:\n");
    printf("Name\t\tMarks\n");
    printf("-------------------------\n");

    for (int i = 0; i < 5; i++)
    {
        printf("%-10s\t%d\n", names[i], marks[i]); // formatted neatly
    }

    printf("\nHighest Scorer: %s with %d marks\n", names[highestIndex], marks[highestIndex]);
    printf("Average Marks: %.2f\n", avg);

    return 0;
}
