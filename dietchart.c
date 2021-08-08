#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
void options(void);
void dietchart(void)
{//initializing of variables
system("cls");
FILE *ch;
char input;
int count=0;
time_t t;
time(&t);
char filename[10];
	printf("\t\t||~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	printf("\t\t||~~~~~~files associated in this program~~~~~~~~\n");
	printf("\t\t||MONDAY->monday.txt\n");
	printf("\t\t||TUESDAY->tuesday.txt\n");
	printf("\t\t||WEDNESDAY->wednesday.txt\n");
	printf("\t\t||THURSDAY->thursday.txt\n");
	printf("\t\t||FRIDAY->friday.txt\n");
	printf("\t\t||SATURDAY->saturday.txt\n");
	printf("\t\t||SUNDAY->sunday.txt\n");
	printf("\t\t||~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
printf("ENTER THE DAY YOU WANT TO SEE DIET OF(filename.txt)::",filename);
scanf("%s",filename);
//weekdays files
if(strcmp(filename,"monday.txt")==0){
	ch=fopen("monday.txt","a"); 
fprintf(ch,"\t\t\tLAST UPDATED\t:%s",ctime(&t)); 
fprintf(ch,"\t\t\tMONDAY\n\n");
fprintf(ch,"Breakfast: Sambar with 2 brown rice idlis/ Paneer sandwich with mint chutney\n");
fprintf(ch,"Lunch: Whole-grain roti with mixed-vegetable curry with one dal\n");
fprintf(ch,"Dinner: Tofu/chicken curry with mixed vegetables and a fresh spinach salad/chicken gravy with 2 multigrain rotis\n");
fclose(ch);
ch=fopen(filename,"r");
 while (input != EOF)
     {
        putc(input, stdout);
        input = getc(ch);
     }
fclose(ch);
}else if(strcmp(filename,"tuesday.txt")==0){
ch=fopen("tuesday.txt","a");
fprintf(ch,"\t\t\tLAST UPDATED\t:%s",ctime(&t)); 
fprintf(ch,"\t\t\tTUESDAY\n\n",input);
fprintf(ch,"Breakfast: Channa dal pancakes with mixed vegetables and a glass of milk/bread and egg with fruits.\n");
fprintf(ch,"Lunch: Chickpea curry with brown rice/Brown rice with dal.\n");
fprintf(ch,"Dinner: Khichdi with sprout salad/Veg paratha with raita\n");
fclose(ch);	
ch=fopen(filename,"r");
 while (input != EOF)
     {
        putc(input, stdout);
        input = getc(ch);
     }
fclose(ch);
}else if(strcmp(filename,"wednesday.txt")==0){
ch=fopen("wednesday.txt","a");

fprintf(ch,"\t\t\tLAST UPDATED\t:%s",ctime(&t)); 
fprintf(ch,"\t\tWEDNESDAY\n",input);
fprintf(ch,"Breakfast: Apple cinnamon porridge/ Vegetable uttapam with sambhar\n");
fprintf(ch,"Lunch: Whole-grain roti with tofu/ non veg and mixed vegetables\n");
fprintf(ch,"Dinner: Palak paneer with brown rice and vegetables/ 2 Multigrain rotis with chicken and curd\n");
fclose(ch);
ch=fopen(filename,"r");
 while (input != EOF)
     {
        putc(input, stdout);
        input = getc(ch);
     }
fclose(ch);
}else if(strcmp(filename,"thursday.txt")==0){
	ch=fopen("thursday.txt","a");
  
fprintf(ch,"\t\t\tLAST UPDATED\t:%s",ctime(&t)); 
fprintf(ch,"\t\tTHURSDAY\n");
fprintf(ch,"Breakfast: Yogurt with sliced fruits and sunflower seeds/ vegetable poha\n");
fprintf(ch,"Lunch: Whole-grain roti with vegetable sabzi/ Dal with veg or non veg sabzi and brown rice\n");
fprintf(ch,"Dinner: Chana masala with basmati rice and green salad/ One bowl of fruits and vegetables with multigrain rotis\n");
fclose(ch);
ch=fopen(filename,"r");
 while (input != EOF)
     {
        putc(input, stdout);
        input = getc(ch);
     }
fclose(ch);
}else if(strcmp(filename,"friday.txt")==0){
	ch=fopen("friday.txt","a");
  
fprintf(ch,"\t\t\tLAST UPDATED\t:%s",ctime(&t)); 
fprintf(ch,"\t\tFRIDAY\n",input);
fprintf(ch,"Breakfast: Vegetable dalia and a glass of milk/ 3-4 dal paddu with sambar\n");
fprintf(ch,"Lunch: Vegetable sambar with brown rice/ 2 multigrain roti with veg/non veg curry\n");
fprintf(ch,"Dinner: Tofu curry with potatoes and mixed vegetables/ chicken curry with 2 multigrain rotis\n");
fclose(ch);
ch=fopen(filename,"r");
 while (input != EOF)
     {
        putc(input, stdout);
        input = getc(ch);
     }
fclose(ch);
}else if(strcmp(filename,"saturday.txt")==0){
	ch=fopen("saturday.txt","a");
 
fprintf(ch,"\t\t\tLAST UPDATED\t:%s",ctime(&t)); 
fprintf(ch,"SATURDAY\n",input);
fprintf(ch,"Breakfast: Multigrain parathas with avocado and sliced papaya/ dal paratha with mixed vegetables\n");
fprintf(ch,"Lunch: Large salad with rajma curry and quinoa/ one bowl mixed vegetable kadai\n");
fprintf(ch,"Dinner: Lentil pancakes with tofu tikka masala/ green salad with mixed vegetables and multigrain roti\n");
fclose(ch);
ch=fopen(filename,"r");
 while (input != EOF)
     {
        putc(input, stdout);
        input = getc(ch);
     }
fclose(ch);
}else if(strcmp(filename,"sunday.txt")==0){
	ch=fopen("sunday.txt","a"); 
fprintf(ch,"\t\t\tLAST UPDATED\t:%s",ctime(&t)); 
fprintf(ch,"\t\t\tSUNDAY\n\n");
fprintf(ch,"Breakfast: Buckwheat porridge with sliced mango/ fruit salad with a glass of milk\n");
fprintf(ch,"Lunch: Vegetable soup with whole-grain roti/ one bowl millet and dal khichdi with multigrain roti\n");
fprintf(ch,"Dinner: Masala-baked tofu with vegetable curry/ non veg curry (chicken, seafood) with multigrain roti\n");
fclose(ch);
ch=fopen(filename,"r");
 while (input != EOF)
     {
        putc(input, stdout);
        input = getc(ch);
     }
fclose(ch);
}else{
	ch=fopen(filename,"r");
if(ch==NULL)
{
	printf("FILE DOES'T EXIST,YOU MAY HAVE ENTERED A WRONG FILENAME !'");
	fclose(ch);
}
}
printf("GO  BACK TO MAIN MENU:press any key to continue\n");
getch();
fclose(ch);
options();
}
