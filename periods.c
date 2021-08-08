#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<string.h>
void options(void);
void period(void)
{
	system("cls");
FILE *pe;
char month[10];
time_t t;
time(&t);
int num,cycle,j,ans;
printf("\t\t\t~~~~~~~~~~~~~~!\n");
printf("\t\t\t||28 day cycle|\n");
printf("\t\t\t||35 day cycle|\n");
printf("\t\t\t~~~~~~~~~~~~~~!\n");
pe=fopen("period.txt","a");
fprintf(pe,"\t\t\tLAST UPDATED\t:%s",ctime(&t)); 
printf("\t\tEnter first date and month(in words)of your last period:\t");
scanf("%d%s",&num,month);
fprintf(pe,"this period:%d\t%s\t\n\t\t",num,month);
fclose(pe);
printf("\t\tEnter the cycle length:\t", cycle);
scanf("%d",&cycle);
if(num==1||num==2)
{ num=30;
	printf("\tyour next period will be near:\t of %d upcoming month\n",num);
    fprintf(pe,"\n\tnext period will be coming nearby:%d th upcoming date date..!!\t\n",num);
}
else if(num>31)
printf("please check the date !");
else
switch(cycle)
{
	case 28:j=num-2;
	printf("\n\tyour next period will be near:\t%d of upcoming month\n",j);
	fprintf(pe,"\t--------------------------\n");
	break;
	case 35:j=num+30;
	j=j-26;
printf("\n\tyour next period will be near:\t%d of upcoming month\n",j);
fprintf(pe,"\n\t----------------------\n");
break;
default: printf("error \n!!");
}
fclose(pe);
printf("\t\t\t|~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|\n");
printf("\n date may vary as this is biological process...it may differ from one to five days..if you find irregular periods ..you might need to consult a doctor !\n");
printf("\t\t\t|~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|\n");
printf("\nGO  BACK TO MAIN MENU:press any key to continue");
getch();
options();
}
