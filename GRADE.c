#include<stdio.h>
main()
{int a[100];
 printf("enter the mark of kid : ");
 scanf("%d",&a);
 if(a>=85&&a<100)
 {printf("the student got grade A");
 }
 else if(a>=84&&a<=70)
 {
printf("the student got grade B");
 }
  else if(a>=55&&a<=69)
  {
  printf("the student got grade c");
 }
   else if(a>=40&&a<=54)
   {
   printf("the student got grade D");
 }
   else
   printf("the student got grade E");
 return 0;
}

