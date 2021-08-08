
 #include<stdlib.h>
 #include<conio.h> 
#include <stdio.h> 
#define MAX_FILE_NAME 100 
 void options(void); 
void countchar(void) 
{ //initializing the variables
system("cls");
    FILE* p; 
    int count = 0; 
      char filename[10]; 
    char c; 
    //printing instructions to the user
    	printf("\t\t||~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	printf("\t\t||MONDAY->monday.txt\n");
	printf("\t\t||TUESDAY->tuesday.txt\n");
	printf("\t\t||WEDNESDAY->wednesday.txt\n");
	printf("\t\t||THURSDAY->thursday.txt\n");
	printf("\t\t||FRIDAY->friday.txt\n");
	printf("\t\t||SATURDAY->saturday.txt\n");
	printf("\t\t||SUNDAY->sunday.txt\n");
	printf("\t\t||DIET->diet.txt\n");
	printf("\t\t||~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    //getting input from the user
    printf("Enter file name: "); 
    scanf("%s", filename); 
    p = fopen(filename, "r"); 
    if (p == NULL) { //checking if the file exists
        printf("Could not open file %s", 
               filename); 
        
    } 
    //reading the file to get number of characters of file
    for (c = getc(p); c != EOF; c = getc(p)) 

        count = count + 1; 
    fclose(p); 
    printf("\nThe file %s has %d characters\n ", 
           filename, count); 
  printf("GO  BACK TO MAIN MENU:press any key to continue\n");
  getch();
options();

}
