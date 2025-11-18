#include <stdio.h>
#include <string.h>

int main() {
    char students[4][6][20] = {
        {"Alice", "Physics", "Math", "Chemistry", "Computer", ""},
        {"Bob", "Physics", "Math", "Chemistry", "Biology", ""},
        {"Charlie", "Physics", "Math", "Chemistry", "", ""},
        {"Diana", "Physics", "Math", "", "", ""}
    };

    for (int i = 0; i < 4; i++) {
        int courseCount = 0;
        printf("Courses of %s:\n", students[i][0]);
        for (int j = 1; j < 6; j++) {
            if (strlen(students[i][j]) > 0) {
                printf("Course #%d: %s\n", j, students[i][j]);
                courseCount++;
            }
        }
        if (courseCount > 3) {
            printf("Student %s has registered for more than 3 courses.\n", students[i][0]);
        }
        printf("\n");
    }

    char Course[20];
    do {
        printf("Enter the course to find students (0 to exit): ");
        scanf("%s", Course);
        if (strcmp(Course, "0") == 0) break;

        printf("Students registered for %s:\n", Course);
        for (int i = 0; i < 4; i++) {
            for (int j = 1; j < 6; j++) {
                if (strcmp(students[i][j], Course) == 0) {
                    printf("%s\n", students[i][0]);
                    break;
                }
            }
        }
        printf("\n");
    } while (1);

    return 0;
}