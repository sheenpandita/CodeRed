#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<ctype.h>
#include<time.h>
void options(void);
 void shop(void)
{ //initializing variables
system("cls");
time_t t;
time(&t);
	FILE *sh;
	int price,qty,bill,dis,amt,ans,addedamt;
	char item[25];
	main:
	//getting input from the user
	printf("\t\t~~~~~~~~~~MAKE YOUR LIST HERE~~~~~~~~~~~~~~\n\n");
	lists:
      printf("Enter the item:\t\t",item);
fseek(stdin,0,SEEK_END);
fgets(item,25,stdin);
printf("Enter the price :\t",price);
	scanf("%d",&price);
      printf("Enter the quantity:\t",qty);
	scanf("%d",&qty);
      printf("Enter the discount( in percentage):\t",dis);	
      scanf("%d",&dis);
      bill=qty*price;//calculating the data
      amt=bill-bill*dis/100;
      //putting the data into the file
	printf("your bill amount is\t:%d\n",amt);//giving output
	      sh=fopen("shop.txt","a");
	        fprintf(sh,"\t\t\tLAST UPDATED\t:%s",ctime(&t)); 
    	fprintf(sh,"Item:\t\t");
    	fprintf(sh,"Price:\t\t");
    	fprintf(sh,"Quantity:\t\t");
      fprintf(sh,"Discount:\t\t");
    fprintf(sh,"TOTAL_AMOUNT\n\n");
    fclose(sh);
    sh=fopen("shop.txt","a+");
    	fprintf(sh,"%s\t\t|",item);
    	fprintf(sh,"%d\t\t|",price);
    	fprintf(sh,"%d\t\t|",qty);
     fprintf(sh,"\t%d\t\t|",dis);
    fprintf(sh,"\t\t%d\n",amt);
    fprintf(sh,"\n\t\t\t...........................\n");
	fclose(sh);
	  char c;
printf("\n DO YOU WANT TO ENTER ONE MORE ITEM(y:1/n:2)",c);
scanf("%d",&c);
if(c==1)
{ 
goto lists;
}else
  //exit
printf("\n are you sure want to go back to main menu,press any key");
getch();
options();
getch();
}
