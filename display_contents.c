#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void options(void);
void display(void)
{
system("cls");
FILE  *read;
char ch,file[10];
int i=0,ans;
printf("\t\t||~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
printf("\t\t||~~~~~~files associated with this program~~~~~~~~\n");
printf("\t\t||For diet of day->monday/tuesday/wednesday/thursday/friday/saturday/sunday.txt\n");
printf("\t\t||for habits->diet.txt\n");
printf("\t\t||shop.txt\n"); 
printf("\t\t||period.txt\n"); 
printf("\t\t||PLEASE NOTE THAT BEFORE DISPLAYING CONTENTS OF FILE,YOU NEED TO CREATE THAT FILE BY SELECTING AN APPROPRIATE OPTION IN THE MENU!~~");
printf("\t\t||~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
printf("ENTER THE NAME OF FILE YOU WANT TO READ:\n");
scanf("%s",file);
read=fopen(file,"r");
if(read==NULL)
{
printf("\nfile does't exist !!\n'");
fclose(read);
goto main;
}else
while((ch=fgetc(read))!=EOF) {
		i++;
		printf("%c",ch);
	}

fclose(read);
main:
printf("GO  BACK TO MAIN MENU:press any key to continue\n");
getch();
options();
}
