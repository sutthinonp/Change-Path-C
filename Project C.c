#include<stdio.h>
#include<conio.h>
#include<string.h>
#define buff 1000
void menu();
int user(char c[30],char h[30]);
main()
{
struct books
{
char bookcode[20];
char bookname[25];
char name[20];
char date[7];
char returns[20];
};
struct books books1;
FILE *fp,*fprm;
char fn[100];
int read;
int f,b=1;
char rm[50];
int ret;
char o[50],n[50];
char st;
int a,i;
char g[50];
int ans;
int count=1;
while(a!=1)
{
char c[30],s[30];
printf("*** Please Login ***\n");
printf("Username : ");
scanf("%s",c);
printf("Password : ");
scanf("%s",s);
printf("********************\n");
a = user(c,s);
}
if(a==1)
{
int num,check=0;
while(check!=1)
{
menu();
printf("Enter number = ");
scanf("%d",&num);
if(num==1)
{
sprintf(fn,"D:/Testpg/file_%d.txt",b);
{
fp = fopen(fn,"w");
printf("*****************************************\n");
printf("Created file %d\n",b);
printf("*****************************************\n");
b++;
fclose(fp);
getch();
}
}
else if(num==2)
{
printf("Select File 1-5 = "); scanf("%d",&f);
sprintf(fn,"D:/Testpg/file_%d.txt",f);
fp = fopen(fn,"r");
if(fp==NULL)
{
printf("*****************************************\n");
printf("File not exist please check again\n");
printf("*****************************************\n");
}
else
{
fp = fopen(fn,"a");
printf("*****************************************\n");
printf("Enter Bookcode = ");
scanf("%s",books1.bookcode);
fprintf(fp,"%s ",books1.bookcode);
fflush(stdin);
printf("Enter Bookname = ");
scanf("%s",books1.bookname);
fprintf(fp,"%s ",books1.bookname);
fflush(stdin);
printf("Enter Name = ");
scanf("%s",books1.name);
fprintf(fp,"%s ",books1.name);
fflush(stdin);
printf("Enter Date = ");
scanf("%s",books1.date);
fprintf(fp,"%s ",books1.date);
fflush(stdin);
printf("Enter Date of return = ");
scanf("%s",books1.returns);
fprintf(fp,"%s\n",books1.returns);
fflush(stdin);
printf("*****************************************\n");
}
fclose(fp);
getch();
}
else if(num==3)
{
printf("Enter File 1-5 to Display = "); scanf("%d",&read);
sprintf(fn,"D:/Testpg/file_%d.txt",read);
fp = fopen(fn,"r");
if(fp==NULL)
{
printf("*****************************************\n");
printf("File not exist please check again\n");
}
else
{
sprintf(fn,"D:/Testpg/file_%d.txt",read);
fp = fopen(fn,"r");
printf("*****************************************\n");
printf("Bookcode\tBookname\tName\t\tDate\t\tReturn\n");
printf("\n");
do
{
st = fgetc(fp);
if(st==' ')
{
printf("\t\t");
}
putchar(st);
}
while(st!=EOF);
}
printf("\b\b*****************************************\n");
getch();
}
else if(num==4)
{
printf("************************\n");
printf("Enter old file path: ");
scanf("%s",o);
printf("Enter new file path: ");
scanf("%s",n);
if(rename(o,n)==0)
{
printf("************************\n");
printf("File renamed\n");
printf("************************\n");
}
else
{
printf("**********************************\n");
printf("Please check file path is correct?\n");
printf("**********************************\n");
}
getch();
}
else if(num==5)
{
printf("Enter path file to remove: "); scanf("%s",rm);
fprm = fopen(rm,"r");
if(fprm==NULL)
{
printf("*****************************************\n");
printf("File not exist please check again\n");
printf("*****************************************\n");
}
else
{
fclose(fprm);
remove(rm);
printf("*****************************************\n");
printf("File removed\n");
printf("*****************************************\n");
}
getch();
}
else if(num==9)
{
printf("*****************************************\n");
printf("Okay Good bye\n");
printf("*****************************************\n");
check = 1;
}
}
}
}


void menu()
{
system("cls");
printf("****************** Menu ******************\n");
printf("1-Create File\n");
printf("2-Append Data\n");
printf("3-Display Data\n");
printf("4-Rename Data\n");
printf("5-Remove File\n");
printf("9-Exit\n");
printf("*****************************************\n");
}


int user(char c[30],char h[30])
{
int s=0;
if(strcmp(c,"admin")==0&&strcmp(h,"admin")==0)
{
printf("Logged in\n");
s=1;
return(s);
}
else
{
printf("You are not members\n");
printf("********************\n");
return(s);
}
}
