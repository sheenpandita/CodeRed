#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void options(void);
void merge(void) {
	system("cls");
	FILE *f1, *f2, *f3;
	char ch, file1[20], file2[20], file3[20];
	printf("\t\t||~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	printf("\t\t||~~~~~~files associated in this program~~~~~~~~\n");
	printf("\t\t||MONDAY->monday.txt\n");
	printf("\t\t||TUESDAY->tuesday.txt\n");
	printf("\t\t||WEDNESDAY->wednesday.txt\n");
	printf("\t\t||THURSDAY->thursday.txt\n");
	printf("\t\t||FRIDAY->friday.txt\n");
	printf("\t\t||SATURDAY->saturday.txt\n");
	printf("\t\t||SUNDAY->sunday.txt\n");
	printf("\t\t||DIET->diet.txt\n");
	printf("\t\t||~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	printf("Enter name of first file\n ");
	scanf("%s",file1);
	f1=fopen(file1,"r");
if(f1==NULL)
{
printf("file doest not exist !!\n");
fclose(f1);
goto main;}else
	printf("Enter name of second file ");
	scanf("%s",file2);
	f2=fopen(file2,"r");
	if(f2==NULL)
{
printf("file doest not exist !!\n");
fclose(f1);
goto main;}else
	printf("Enter name of file which will store contents of two files ");
	scanf("%s",file3);
	f1 = fopen(file1,"r");
	f2 = fopen(file2,"r");
	if( f1 == NULL || f2 == NULL ) {
	
		printf("ERROR...\n");
		
	}
	f3 = fopen(file3,"w");
	if( f1 == NULL ) {
	printf("ERROR...\n");
			}
	while( ( ch = fgetc(f1) ) != EOF )
	      fputc(ch,f3);
	while( ( ch = fgetc(f2) ) != EOF )
	      fputc(ch,f3);
	printf("Two files were merged into %s file successfully.Go to display option and enter the name of file created\n",file3);
	fclose(f1);
	fclose(f2);
	fclose(f3);
	main:
printf("\nGO  BACK TO MAIN MENU:press any key to continue\n");
getch();
options();
	
	}
