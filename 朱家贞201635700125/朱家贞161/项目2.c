#include<stdio.h>
void main()
{
int a[5][5],sum1=0,sum2=0,i,j;
for(i=0;i<5;i++)
for(j=0;j<5;j++)
{
printf("�������%d����\n",i*5+j+1);
scanf("%d",&a[i][j]);
}
for(i=0;i<5;i++)
{
sum1+=a[i][i];
sum2+=a[i][4-i];
}
printf("���Խ���֮��=%d\n���Խ���֮��=%d\n",sum1,sum2);
}
