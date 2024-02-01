#include<stdio.h>
int main()
{
    int months,days,years,weeks,extra_days1,extra_days2,extra_days3;
    printf("inter your days:");

    scanf("%d",&days);
    years=days/365;
    printf("Years is:%d\n",years);
    months=days/30;
  printf("Months is:%d\n",months);
  weeks=days/7;
  printf("Weeks is:%d\n",weeks);
  extra_days1=days%365;
printf("Rest days compearing with year:%d\n",extra_days1);
extra_days2=days%30;
printf("Rest days compearing with month:%d\n",extra_days2);
extra_days3=days%7;
printf("Rest days compearing with week:%d\n",extra_days3);
  return 0;
}