#include <stdio.h>
#include <string.h>

int main()
{
    int marks[5] = {85, 90, 75, 60, 95};

    printf("Student Result Analysis\n");

    int total = 0;

    for (int i = 0; i < 5; i++)
    {
        total += marks[i];
    }

    printf("Total = %d\n", total);

    float average = (float)total / 5;

    printf("Average = %.2f\n", average);

    printf("\n");

    int highest = marks[0];

    for (int i = 1; i < 5; i++)
    {
        if (marks[i] > highest)
        {
            highest = marks[i];
        }
    }

    printf("Highest = %d\n", highest);

    printf("\n");

    int lowest = marks[0];

    for (int i = 1; i < 5; i++)
    {
        if (marks[i] < lowest)
        {
            lowest = marks[i];
        }
    }

    printf("Lowest = %d\n", lowest);

    printf("\n");

    int attendance[5] = {1, 1, 0, 1, 1};

    int present = 0;

    for (int i = 0; i < 5; i++)
    {
        present += attendance[i];
    }

    printf("Present = %d\n", present);

    printf("\n");

    char subject[20];

    strcpy(subject, "Programming");

    printf("%s\n", subject);

    printf("\n");

    char branch[20];

    printf("Enter branch: ");
    scanf("%19s", branch);

    printf("%s\n", branch);

    printf("\n");

    int fees[5] = {50000, 60000, 70000, 80000, 90000};

    printf("\nFees\n");

    for (int i = 0; i < 5; i++)
    {
        printf("%d ", fees[i]);
    }

    printf("\n");

    int stock[5] = {10, 20, 30, 40, 50};

    if (stock[2] == 30)
    {
        printf("Stock Available\n");
    }

    printf("\n");

    int backup[5];

    for (int i = 0; i < 5; i++)
    {
        backup[i] = stock[i];
    }

    printf("%d\n", backup[0]);

    printf("\n");

    float salary[5] = {45000.75};

    printf("%.2f\n", salary[0]);

    printf("\n");

    int result[5];

    printf("Enter 5 results:\n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &result[i]);
    }

    printf("\n");

    int totalResult = 0;

    for (int i = 0; i < 5; i++)
    {
        totalResult += result[i];
    }

    printf("Total Result = %d\n", totalResult);

    printf("\n");

    char city[20];

    strcpy(city, "Jaipur");

    printf("%s\n", city);

    printf("\n");

    int inventory[5];

    inventory[0] = 100;
    inventory[2] = 200;

    for (int i = 0; i < 5; i++)
    {
        inventory[i] = i * 100;
    }

    printf("Inventory\n");

    for (int i = 0; i < 5; i++)
    {
        printf("%d ", inventory[i]);
    }

    printf("\n");

    char college[] = "ACEIT";

    printf("%s\n", college);

    printf("\n");

    int count[5];

    for (int i = 0; i < 5; i++)
    {
        count[i] = inventory[i];
    }

    printf("%d\n", count[0]);

    printf("\n");

    char course[20];

    strcpy(course, "Computer");

    printf("%s\n", course);

    printf("\n");

    int numbers[5];

    for (int i = 0; i < 5; i++)
    {
        numbers[i] = i * 10;
    }

    printf("Numbers\n");

    for (int i = 0; i < 5; i++)
    {
        printf("%d ", numbers[i]);
    }

    printf("\n");

    printf("Program Finished\n");

    return 0;
}
