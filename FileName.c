#include<stdio.h>
int main()
{
    unsigned long int year,month,eryue=0;
   printf("��������ݣ��·ݣ��Կո������\n");
   scanf_s("%d %d",&year,&month);
   if (year>=0 && 1<=month<=12)
   {
	   if (year%4==0 && year %100 !=0)
	   {
	       printf("����Ϊ��ͨ����");
		   eryue =1;
	   }
	   else if (year %400 ==0)
	   {
	       printf("����Ϊ��������");
		   eryue =1;
	   }
	   else
	   {
		   printf("����Ϊƽ��");
		   eryue =0;
	   }
       
	   switch (month)
	   {
	       case 1:case 3:case 5:case 7:case 9:case 11:printf("������31��");break;
		   case 4:case 6:case 8:case 10:case 12:printf("������30��");break;
		   case 2:printf(",������%d��",28+eryue);break;		
	   }


   }
   else
   {
       printf("�����������������������");
   }
   return 0;
}