#include<stdio.h>
int main()
{
    unsigned long int year,month,eryue=0;
   printf("请输入年份，月份（以空格隔开）\n");
   scanf_s("%d %d",&year,&month);
   if (year>=0 && 1<=month<=12)
   {
	   if (year%4==0 && year %100 !=0)
	   {
	       printf("该年为普通闰年");
		   eryue =1;
	   }
	   else if (year %400 ==0)
	   {
	       printf("该年为世纪闰年");
		   eryue =1;
	   }
	   else
	   {
		   printf("该年为平年");
		   eryue =0;
	   }
       
	   switch (month)
	   {
	       case 1:case 3:case 5:case 7:case 9:case 11:printf("此月有31天");break;
		   case 4:case 6:case 8:case 10:case 12:printf("此月有30天");break;
		   case 2:printf(",此月有%d天",28+eryue);break;		
	   }


   }
   else
   {
       printf("你输入的数字有误！重新运行");
   }
   return 0;
}