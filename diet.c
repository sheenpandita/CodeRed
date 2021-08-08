#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

#include <string.h> 
void options(void); 
FILE *di;
int count=0,ans;
void diet(void)
{ 
system("cls");
   char input;
   time_t t;
time(&t);
  di=fopen("diet.txt","w");
  //input data in file
  fprintf(di,"\t\t\tLAST UPDATED\t:%s",ctime(&t)); 
   printf("\t\tINSTRUCTIONS FOR A HEALTHY LIFE:\n\n\n");
   fprintf(di,"While observing an Indian diet chart for weight loss for female, the following tips might be useful\n",input);
   fprintf(di,"*Avoid things like a zero carb diet or starvation to lose weight\n",input);
   fprintf(di,"*Freshly prepared meals are the best choice always.\n",input);
   fprintf(di,"*Indian homemade food provides one of the best weight loss diets. A healthy mixture of complex carbohydrates, fats and proteins with less oil or ghee is an excellent choice. These foods provide nutrition as well cut down into simple carbs and fats that often lead to weight gain.\n",input);
   fprintf(di,"*Ensure to have all the food groups in your diet plan.",input);
   fprintf(di,"*Breakfasts are to be hearty and wholesome. Options like paratha, idlis, dosa, uttapam, bread and eggs are good choices.\n",input);
   fprintf(di,"*Breakfast should be taken within thirty minutes of waking up.\n",input);
   fprintf(di,"*Lunch should be a medium affair with dal, sabzi, roti and curd or rice, rajma, chole etc.\n",input);
   fprintf(di,"*Apart from the main meals, there should be 2-3 mini meals as well.\n",input);
   fprintf(di,"*One meal a week can be a cheat meal, however, ensure not to go overboard during this time.\n",input);
   fclose(di);
   di=fopen("diet.txt","r");
   while((input=fgetc(di))!=EOF) {
   	
		count++;
		printf("%c",input);
	}
	fclose(di);
printf("\nGO  BACK TO MAIN MENU:press any key to continue\n");
getch();
options(); 
}
