#include<stdio.h>
#include<string.h>
#include<conio.h>
#include<stdlib.h>
#include<ctype.h>
void options(void);
void shop(void);
void add(void)
{
system("cls");
FILE *con;
char in;
int ans;
char file[10],cont[100],day[10],bf[30],lunch[40],din[40];
printf("\t\t\t||1.HEALTHY-HABIT->diet.txt\n");
printf("\t\t\t||2.WEEKLY DIET->monday.txt/tuesda.txty/wednesday.txt/thursday.txt/friday.txt/saturday.txt/sunday.txt\n");
printf("\t\t\t||3.ADD TO SHOPPING\n");
printf("\t\t\t|~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
printf("code:\t",ans);
scanf("%d",&ans);
if(ans==2){
printf("\n Enter the name of file to you want to update :\t",file);
scanf("%s",file);
con=fopen(file,"r");
if(con==NULL)
{
printf("file doest not exist !!\n");//checking the file if it exists
goto main;
fclose(con);
}else{
//getting input from the keyboard
printf("\t\t\t|~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
printf("\t\t\t|INSTRUCTIONS\n");
printf("\t\t\t|THE CONTENTS OF FILE WILL BE UPDATED COMPLETLY,PLEASE MAKE CHANGES IN BREAKFAST,DINNER AND LUNCH\n");
printf("\t\t\t|shop.txt\n"); 
printf("\t\t\t|PLEASE NOTE THAT BEFORE DISPLAYING CONTENTS OF FILE,YOU NEED TO CREATE THAT FILE BY SELECTING AN APPROPRIATE OPTION IN THE MENU!~~\n");
printf("\t\t\t|~~PLEASE NOTE ,YOU NEED TO CHANGE THE ENTIRE CONTENT OF THE FILE ,AND IN WEEK-DAY FILES DAY WILL BE APPENDED !~~\n ");
printf("\t\t\t|~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
//code for number 2
printf("ENTER YOU DIET FOR THE DAY HERE:\nday\t",day);
fseek(stdin,0,SEEK_END);
fgets(day,10,stdin);
printf("breakfast:\t",bf);
fseek(stdin,0,SEEK_END);
fgets(bf,30,stdin);
printf("lunch:\t",lunch);
fseek(stdin,0,SEEK_END);
fgets(lunch,30,stdin);

printf("dinner:\t",din);
fseek(stdin,0,SEEK_END);
fgets(din,100,stdin);
fprintf(con,"DAY:\t%s\nBREAKFAST:\t%s\nLUNCH:\t%s\nDINNER:\t%s\n",day,bf,lunch,din);
fclose(con);
printf("\nyour data is successfully entered to the file..to display go to main menu\n");
printf("\nBACK TO MAIN MENU\n");
goto main;
}
}//code for number 1
if(ans==1)
{
printf("Enter name of file:\t",file);
scanf("%s",file);
con=fopen(file,"r");
if(con==NULL)
{
printf("file doest not exist !!\n");//checking existance of file
fclose(con);
goto main;

}else{
con=fopen(file,"a");
printf("enter your data in one line:\t",cont);
fseek(stdin,0,SEEK_END);
fgets(cont,100,stdin);
fprintf(con,"%s",cont);
printf("\nCONTENTS APPENDED SUCCESSFULLY\n");
fclose(con);
goto main;
}
}
if(ans==3)//code for number 3
shop();
else if(ans>3)
printf("please check the code !");
main:
printf("\nDO YOU WANT TO GO BACK TO MAIN MENU ,press any key to continue\n");
getch();
options();
getch();
}
