PROBLEM 1.C 

Below are the errors found in 1.c.
Approx. Line
Error
Correction
6
Missing ; after int marks[5] = {80,90,70,60,50}
int marks[5] = {80,90,70,60,50};
12
for(i<=5) accesses marks[5] (out of bounds)
for(int i=0; i<5; i++)
20
average = total / 5; performs integer division
average = total / 5.0;
22
Wrong format specifier %d for float
printf("Average = %.2f\n", average);
33
scores[5] = 60; writes beyond array size
Remove this statement or increase array size
44
subject[5] is too small for "Programming"
Increase size, e.g. char subject[20];
50
attendance["one"] uses string as array index
Use a valid integer index, e.g. attendance[1] = 1;
52
attendance[2.5] uses float as index
Use an integer index, e.g. attendance[2] = 1;
62
for(i<=5) accesses attendance[5]
for(int i=0; i<5; i++)
75
scanf("%d", arr[i]); missing address operator
scanf("%d", &arr[i]);
89
grade[0] = "A"; assigns string to char
grade[0] = 'A';
92
grade is not null-terminated before printing with %s
Add grade[2] = '\0';
100
if(prices[2] = 300) uses assignment instead of comparison
if(prices[2] == 300)
109
inventory = prices; cannot assign one array to another
Copy using a loop or memcpy()
117
%d used to print float
printf("%.2f\n", salary[0]);
123
city = "Jaipur"; cannot assign string to array
strcpy(city, "Jaipur");
131
for(i<=5) writes to result[5]
for(int i=0; i<5; i++)
Error Summary
Syntax Errors: 1
Semantic/Type Errors: 8
Array Bounds Errors: 4
Logical Errors: 2
Runtime Errors: 4 (due to invalid array access)
Scope Errors: None
Linker Errors: None

PROBLEM 2.C

Error Identification for 2.c
Line
Error
Correction
16
for(int i=0;i<=10;i++) accesses numbers[10] (array out of bounds).
for(int i=0;i<10;i++)
28
sum = numbers[i]; overwrites instead of adding.
sum += numbers[i];
35
average = sum / 10; performs integer division.
average = (float)sum / 10;
37
printf("Average = %d\n", average); uses wrong format specifier.
printf("Average = %.2f\n", average);
47
if(marks[i] < highest) finds the minimum instead of the maximum.
if(marks[i] > highest)
66
attendance[5] = 1; writes outside a 5-element array.
Remove this line or declare attendance[6].
70
for(int i=0;i<=5;i++) accesses attendance[5].
for(int i=0;i<5;i++)
80
strcpy(subject,"ComputerScience"); overflows subject[10].
Increase array size (e.g., char subject[20];) or use a shorter string.
88
branch = "IT"; cannot assign to a character array.
strcpy(branch, "IT");
99
college is not null-terminated before printing.
Add college[5] = '\0';
105
fees["two"] = 50000; invalid array index.
Use an integer index, e.g. fees[2] = 50000;
107
fees[3.5] = 60000; floating-point index is invalid.
fees[3] = 60000;
124
scanf("%d", result[i]); missing address operator.
scanf("%d", &result[i]);
141
if(stock[2] = 300) uses assignment instead of comparison.
if(stock[2] == 300)
149
backup = stock; arrays cannot be assigned directly.
Copy using a loop or memcpy().
155
printf("%d\n", salary[0]); wrong format specifier.
printf("%.2f\n", salary[0]);
163
for(int i=0;i<=5;i++) writes beyond inventory[4].
for(int i=0;i<5;i++)
178
strcpy(city,"JaipurCity"); overflows city[8].
Increase array size or use a shorter string.
186
count = inventory; arrays cannot be assigned directly.
Copy using a loop or memcpy().
190
printf("Program Ended\n") missing semicolon.
printf("Program Ended\n");
Summary
Syntax Errors: 2
Semantic Errors: 6
Logical Errors: 2
Array Bounds Errors: 5
Type/Format Errors: 3
Pointer/Input Errors: 1
String Handling Errors: 3

PROBLEM 3.C

Program Intent
The program is intended to:
Store and process student marks.
Calculate total, average, highest, and lowest marks.
Count attendance.
Store and print strings (subject, branch, city, college, course).
Work with arrays (fees, stock, inventory, numbers, result).
Demonstrate simple input/output operations.
Errors Identified
Line
Error
Correction
20
average = total / 5; performs integer division.
average = total / 5.0;
42
Wrong condition for lowest value (>).
if(marks[i] < lowest)
65
for(int i=0;i<=5;i++) accesses attendance[5].
for(int i=0;i<5;i++)
74
subject[8] is too small for "Programming".
char subject[20];
84
scanf("%s",&branch); uses unnecessary &.
scanf("%9s", branch);
98
fees[5] = 100000; is out of bounds.
Remove it or declare fees[6].
111
if(stock[2] = 30) uses assignment instead of comparison.
if(stock[2] == 30)
120
backup = stock; cannot assign arrays.
Copy elements using a loop or memcpy().
128
printf("%d\n", salary[0]); wrong format specifier.
printf("%f\n", salary[0]);
137
scanf("%d", result[i]); missing address operator.
scanf("%d", &result[i]);
152
city = "Jaipur"; invalid array assignment.
strcpy(city, "Jaipur"); (declare char city[10];)
158
inventory["one"] uses a string as an index.
Use a valid integer index.
160
inventory[2.5] uses a floating-point index.
Use an integer index.
169
for(int i=0;i<=5;i++) accesses inventory[5].
for(int i=0;i<5;i++)
181
college has no null terminator for %s.
Declare char college[6] = "ACEIT"; or set college[5]='\0';
187
count = inventory; cannot assign arrays.
Copy using a loop or memcpy().
195
course[6] is too small for "Computer".
char course[20];
202
for(int i=0;i<=5;i++) writes beyond numbers[4].
for(int i=0;i<5;i++)
214
return 0 missing semicolon.
return 0;
Error Summary
Syntax Errors: 1
Semantic Errors: 10
Logical Errors: 2
Array Bounds Errors: 5
Type/Format Errors: 2
Pointer/Input Errors: 1
This program contains 19 errors in total.

PROBLEM 4.C

Here are the errors identified in 4.c.
Line
Error
Correction
18
Integer division assigned to float
averageSales = (float)totalSales / 5;
20
Wrong format specifier %d for float
printf("Average Sales = %.2f\n", averageSales);
29
Wrong comparison (<) while finding highest sale
if (sales[i] > highestSale)
46
monthlySales[5] = 250; (array index out of bounds)
Remove it or increase array size to 6
50
Loop uses i <= 5 (out-of-bounds access)
for(int i=0; i<5; i++)
58
strcpy(product,"LaptopComputer"); causes buffer overflow (product[8])
Increase array size or use a shorter string
64
category = "Electronics"; (cannot assign to array)
strcpy(category, "Electronics");
70
stock["first"] = 100; invalid array index
Use an integer index, e.g. stock[0] = 100;
72
stock[2.7] = 200; invalid float index
stock[2] = 200;
90
scanf("%d", orders[i]); missing address operator
scanf("%d", &orders[i]);
106
if(revenue[2] = 3000) uses assignment instead of comparison
if(revenue[2] == 3000)
115
backupRevenue = revenue; cannot assign arrays
Copy using a loop or memcpy()
121
%d used for float
printf("%.2f\n", commission[0]);
127
city = "Jaipur"; invalid array assignment
strcpy(city, "Jaipur");
138
branch string not null-terminated
Add branch[4] = '\0';
145
Loop uses i <= 5 (array out of bounds)
for(int i=0; i<5; i++)
159
department[6] too small for "Marketing"
Increase size, e.g. char department[10]; or larger
167
expenses = sales; cannot assign arrays
Copy with a loop or memcpy()
173
ratings[-1] = 5; invalid negative index
Use a valid index (0–4)
184
%s used with integer feedback[0]
printf("%d\n", feedback[0]);
188
Missing semicolon after printf("Report Generated Successfully\n")
Add ;
Summary
Syntax errors: 4
Semantic/type errors: 8
Logical errors: 2
Runtime/array errors: 6
These are the corrections needed to make the program compile and behave correctly.

PROBLEM 5.C

Here are the errors identified in 5.c following your debugging checklist.
Approx. Line
Error
Type
Correction
20
average = total / 10; performs integer division
Logical/Semantic
average = (float)total / 10;
22
printf("Average = %d\n", average);
Semantic
Use %f (or %.2f) for float.
30
if(marks[i] < highest) while finding highest
Logical
Change to if(marks[i] > highest)
43
if(marks[i] > lowest) while finding lowest
Logical
Change to if(marks[i] < lowest)
59
attendance[10] = 0;
Runtime (Array out of bounds)
Valid indices are 0–9. Remove or use a valid index.
63
for(i=0;i<=10;i++)
Runtime
Use i < 10.
74
strcpy(subject,"DataStructures");
Runtime
subject[10] is too small. Increase array size or shorten the string.
80
department = "InformationTechnology";
Syntax
Use strcpy(department,"InformationTechnology"); and increase array size if needed.
86
fees["two"] = 50000;
Semantic
Array index must be an integer, e.g. fees[2].
88
fees[4.5] = 70000;
Semantic
Use an integer index such as fees[4].
104
scanf("%d", result[i]);
Runtime
scanf("%d", &result[i]);
118
if(inventory[2] = 30)
Logical
Use == for comparison.
128
backup = inventory;
Syntax
Copy elements using a loop or memcpy().
136
printf("%d\n", salary[0]);
Semantic
Use %f or %.2f.
142
city = "Jaipur";
Syntax
Use strcpy(city,"Jaipur");
152
branch is not null-terminated
Runtime
Add branch[4] = '\0';
160
for(i=0;i<=5;i++)
Runtime
Use i < 5.
176
strcpy(course,"Programming");
Runtime
course[8] is too small. Increase array size.
184
ratings[-1] = 10;
Runtime
Negative index is invalid.
190
printf("%s\n", feedback[0]);
Semantic
Use %d to print an integer.
198
scores = marks;
Syntax
Copy elements using a loop or memcpy().
210
printf("%d\n", temp[5]);
Runtime
Valid indices are 0–4.
Summary (Debugging Checklist)
✅ Syntax Errors
✅ Semantic Errors
✅ Logical Errors
✅ Runtime Errors
✅ Array Bounds Errors
✅ Type Mismatches
✅ Function Call Errors
❌ Scope Errors: None
❌ Linker Errors: None
❌ Pointer Errors: None
❌ Structure Errors: None
❌ File Handling Errors: None

