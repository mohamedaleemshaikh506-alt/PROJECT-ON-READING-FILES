#include <stdio.h>
int main() {
int ch;
char text[100];
printf("===== FILE OPERATIONS =====\n");
printf("1. Write to File\n");
printf("2. Read from File\n");
printf("3. Append to File\n");
printf("Enter your choice: ");
scanf("%d", &ch);
switch (ch) {
case 1: 
printf("Enter text to write: ");
scanf(" %[^\n]", text);
{
FILE *fp = fopen("file.txt", "w");
fprintf(fp, "%s", text);
fclose(fp);
}
printf("Text written successfully.\n");
break;
case 2:
{
FILE *fp = fopen("file.txt", "r");
fscanf(fp, "%[^\n]", text);
fclose(fp);
printf("File contains: %s\n", text);
}
break;
case 3:
printf("Enter text to append: ");
scanf(" %[^\n]", text);
{
FILE *fp = fopen("file.txt", "a");
fprintf(fp, " %s", text);
fclose(fp);
}
printf("Text appended successfully.\n");
break;
default:
printf("Invalid choice.\n");
}
return 0;
}

