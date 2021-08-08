#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void countchar(void);
void merge(void);
void display(void);
void reverse(void);
void shop(void);
void dietchart(void);
void pass(void);
void period(void);
void add(void);
void options(void)
{
	system("cls");
int ans;
main_menu:
//these are the options through which user can choose one to use its function
printf("****************************************************************************************************************\n\n\n");
printf("\t\tEnter the code of option which you want to use !!\n\n");
printf("\t\t\tMAIN_MENU\n\n");
printf("**************************************************************************************************************\n\n\n");
printf("\t\t1.NEXT MENSTURATION CYCLE CALCULATOR :\n\n");
printf("\t\t2.DIET_CHART ?\n\n");
printf("\t\t3.ADD CONTENTS:\n\n");
printf("\t\t4.MAKE YOUR SHOPPING LIST:\n\n");
printf("\t\t5.DISPLAY RECORD OF ANY FILE:\n\n");
printf("\t\t6.MERGE 2 FILES:\n\n");
printf("\t\t7.HEALTHY HABIT:\n\n");
printf("\t\t8.REVERSE CONTENTS OF FILE AND DISPLAY:\n\n");
printf("\t\t9.COUNT CHARACTERS IN A FILE:\n\n");
printf("\t\t10.EXIT:\n\n");
//getting the code and calling its respective associated fuction
printf("\t\tcode:\t ",ans);
scanf("%d",&ans);
printf("--------------------------------\n\n");
if(ans==1)
period();
else if(ans==2)
dietchart();
else if(ans==3)
add();
else if(ans==4)
shop();
else if(ans==5)
display();
else if(ans==6)
merge();
else if(ans==7)
diet();
else if(ans==8)
reverse();
else if(ans==9)
countchar();
else if(ans==10)
printf("\tare you sure want to exit?Y:1/N:2\t",ans);
scanf("%d",&ans);
if(ans==1)
exit(EXIT_SUCCESS);
else
printf("check your code:\n");
goto main_menu;
getch();
}
