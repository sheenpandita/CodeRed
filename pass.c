#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
void pass(void)
{
char username[20],pass[4];
int ans;
//getting login details
read:
	printf("\n\n\n\n\t\t\~~WELCOME TO OUR LOGIN PAGE,PLEASE ENTER DEFAULT USER ID !~~\t");
printf("\n\n\n\n\t\t\tEnter your username:\t");
scanf("%s",username);
printf("\t\t\tEnter your password:\t");
scanf("%s",pass);
if(strcmp(username,"codered")==0)
		
if(strcmp(pass,"4321")==0)
{
 printf("\n\t\t\tlogin_successfull\n");
 goto close;
}
 
  printf("\t\t\twrong_input,\n\t\t\t|\t\t 1. Register now  OR 2.ENTER AGAIN!!\n");
  printf("yes:1/no:2\t->",ans);
  scanf("%d",&ans);
  switch(ans)
  {
  	case 1: 
	  printf("Enter your FIRSTNAME:\n",username);
         scanf("%s",username);
     
    printf("Enter your password:\n",pass);
       scanf("%s",pass);
   
    
    printf("you are succesfully registered with us..\n");
    goto close;
    break;
    case 2:  goto read;
    break;
    default:printf("error !!");
    break;
  }
close:
getch();

}
