#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
int main()
{
FILE *fp,*ft;
char another,choice;
struct emp
{
char name[40];
int age;
float bs;
};
struct emp e;
char empname[40];
long int recsize;

fp=fopen("EMP.DAT","rb+");
if(fp==NULL)
{
fp=fopen("EMP.DAT","wb+");
if(fp==NULL)
{
puts("cannot ope file");
exit(1);
}
}
recsize=sizeof(e);
while(1)
gotoxy(30,10);
printf("1.Add Recoeds");
gotoxy(30,12);
printf("2.List Records");
gotoxy(30,14);
printf("3. Modify Records");
gotoxy(30,16);
printf("4. Delete Records");
gotoxy(30,18);
printf("0.exit");
gotoxy(30,20);
printf("your choice");

fflush(stdin);
choice=getche();
switch(choice)
{
case '1':
fseek(fp,0,SEEK_END);
another='Y';
while(another=='Y')
{
printf("\nEnter name, age and vasic salay");
scanf("%s %d %f ",e.name,&e.age,&e.bs);
fwrite(&e,recsize,1,fp);
printf("\n Add another Record(Y/N)");
fflush(stdin);
another=getche();
}
break;
case '2':
rewind(fp);
while(fread(&e, recsize, 1, fp)==1)
printf("\n% s%d %f",e.name,&e.age,&e.bs);
break;
case '3':
another='Y';
while(another=='Y')
{
printf("\nEnter name of employee to modify");
scanf("%s",empname);
rewind(fp);
while(fread(&e, recsize, 1, fp)==1)
{
if(strcmp(e.name,empname)==0)
{
printf("\nEnter name, age and bs ");
scanf("%s %d %f",e.name,&e.age,&e.bs);
fseek(fp, -recsize, SEEK_CUR);
fwrite(&e, recsize, 1, fp);
break;
}}
printf("\nMOdify anothe Record(Y/N)");
fflush(stdin);
another=getche();
}
break;
case '4':
another='Y';
while(another=='Y')
{printf("\nEnter name of employee to delete");
scanf("%s",empname);
ft=fopen("TEMP.DAT","wb");
rewind(fp);
while(fread(&e,recsize, 1, fp)==1)
{ if(strcmp(e.name, empname)!=0)
fwrite(&e,recsize, 1, ft);
}fclose(fp);
fclose(ft);
remove("EMP.DAT");
rename("TEMP.DAT","EMP.DAT");
fp=fopen("EMP.DAT","rb+");
printf("Delete another record(Y/N)");
fflush(stdin);
another=getche();
}
break;
case '0':
fclose(fp);
exit(0);
}return 0;
}
