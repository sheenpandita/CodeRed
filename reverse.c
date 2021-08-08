#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void options(void);
void reverse(void)
{
	system("cls");
FILE *cp,*re;
char file[10],file2[2],ch;
int i=0,cnt=0, ans;
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
printf("\nENTER THE NAME OF FILE YOU WANT TO REVERSE AND COPY\t:",file);
scanf("%s",file);
cp=fopen(file,"r");
if(cp==NULL)
{
printf("\nFILE1 DOEST NOT EXIST:\n");
goto main;
}
printf("\nENTER THE NAME OF FILE YOU WANT TO CREATE\t:",file);
scanf("%s",file2);

re=fopen(file2,"w");
fseek(cp,0,SEEK_END);
    cnt = ftell(cp);
     
    while( i < cnt )
    {
        i++;
        fseek(cp,-i,SEEK_END);
       
        fprintf(re,"%c",fgetc(cp));
    }    
printf("contents of file copied and reversed successfully .Go to display option and enter the name of file created!!\n\n\n");
fclose(cp);
fclose(re);
re=fopen(file2,"r");
printf("do you want to display reversed contents{Y:1/N:2}:\n",ans );
scanf("%d",&ans);
if(ans==1)
 while((ch=fgetc(re))!=EOF)
     {
   	
	i++;
	printf("%c",ch);
	}

fclose(re);
main:
printf("\nGO  BACK TO MAIN MENU:press any key to continue");
getch();
options();
}

