#include <stdio.h>
#include <string.h>

int main()
{
    int marks[10] = {75, 80, 85, 90, 95, 70, 65, 88, 92, 78};

    printf("Student Performance Analysis\n");

    int total = 0;

    for (int i = 0; i < 10; i++)
    {
        total += marks[i];
    }

    printf("Total Marks = %d\n", total);

    float average = (float)total / 10;
    printf("Average = %.2f\n\n", average);

    int highest = marks[0];
    for (int i = 1; i < 10; i++)
    {
        if (marks[i] > highest)
            highest = marks[i];
    }
    printf("Highest = %d\n\n", highest);

    int lowest = marks[0];
    for (int i = 1; i < 10; i++)
    {
        if (marks[i] < lowest)
            lowest = marks[i];
    }
    printf("Lowest = %d\n\n", lowest);

    int attendance[10];
    for (int i = 0; i < 10; i++)
    {
        attendance[i] = 1;
    }

    int present = 0;
    for (int i = 0; i < 10; i++)
    {
        present += attendance[i];
    }
    printf("Present Days = %d\n\n", present);

    char subject[20];
    strcpy(subject, "DataStructures");
    printf("%s\n\n", subject);

    char department[30];
    strcpy(department, "InformationTechnology");
    printf("%s\n\n", department);

    int fees[5];
    for (int i = 0; i < 5; i++)
    {
        fees[i] = (i + 1) * 10000;
    }

    printf("Fees\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", fees[i]);
    }
    printf("\n\n");

    int result[5];
    printf("Enter 5 results:\n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &result[i]);
    }

    int totalResult = 0;
    for (int i = 0; i < 5; i++)
    {
        totalResult += result[i];
    }
    printf("Total Result = %d\n\n", totalResult);

    int inventory[5] = {10, 20, 30, 40, 50};
    if (inventory[2] == 30)
    {
        printf("Item Found\n");
    }
    printf("\n");

    int backup[5];
    for (int i = 0; i < 5; i++)
    {
        backup[i] = inventory[i];
    }
    printf("%d\n\n", backup[0]);

    float salary[5];
    salary[0] = 65000.75f;
    printf("%.2f\n\n", salary[0]);

    char city[10];
    strcpy(city, "Jaipur");
    printf("%s\n\n", city);

    char branch[5] = "IT-A";
    printf("%s\n\n", branch);

    int stock[5];
    for (int i = 0; i < 5; i++)
    {
        stock[i] = i * 100;
    }

    printf("Stock\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", stock[i]);
    }
    printf("\n\n");

    char course[20];
    strcpy(course, "Programming");
    printf("%s\n\n", course);

    int ratings[5] = {0};
    ratings[0] = 10;
    printf("%d\n\n", ratings[0]);

    int feedback[5] = {1, 2, 3, 4, 5};
    printf("%d\n\n", feedback[0]);

    int scores[5];
    for (int i = 0; i < 5; i++)
    {
        scores[i] = marks[i];
    }
    printf("%d\n\n", scores[0]);

    int temp[5];
    for (int i = 0; i < 5; i++)
    {
        temp[i] = i;
    }
    printf("%d\n\n", temp[4]);

    printf("Program Completed Successfully\n");

    return 0;
}
