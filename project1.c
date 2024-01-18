//get permision, take command and solve math 
#include<stdio.h>
int main(){
    int a,b,c,d,e,f,sum;
printf("Do you want to solve your math? \nyes = type 1 and no = type 2\n");
scanf("%d",&a);
b=a;
if (b==1){
    printf("What kind of math can you do?\n prass for + = 1, - = 2, * = 3, / = 4, no = 0\n");
    scanf("%d",&c);
    f=c;}
    else {
    printf("Thank you");
 }
if (f==1){

printf("inter your first no: ");
scanf("%d",&d);
printf("inter your second no: ");
scanf("%d",&e);
sum=d+e;
printf("Your result is: %d",sum);
 }
 else if (f==2){
    printf("inter your first no: ");
scanf("%d",&d);
printf("inter your second no: ");
scanf("%d",&e);
sum=d-e;
printf("Your result is: %d",sum);
 }
 else if (f==3){
    printf("inter your first no: ");
scanf("%d",&d);
printf("inter your second no: ");
scanf("%d",&e);
sum=d*e;
printf("Your result is: %d",sum);}
else if (f==4){
    printf("inter your first no: ");
scanf("%d",&d);
printf("inter your second no: ");
scanf("%d",&e);
sum=d-e;
printf("Your result is: %d",sum);}


 
 
}