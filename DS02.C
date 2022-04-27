//polynomial expression
//P(X)=(8X^5-15X^4+9X^3+6X^2+20X-10)
#include<stdio.h>
main()
{
 int a[]={8,-15,9,6,20,-10};
 int x,v=0,i;
 printf("enter the value of x to get solution of mathematical expression:\n");
 scanf("%d",&x);
 v=a[0]*x+a[1];
 for(i=2;i<=5;i++)
 {
  v=v*x+a[i];
 }
 printf("\nfirst we will show our array before solution :\n");
 for(i=0;i<=5;i++)
 {
  printf("%d\t",a[i]);
 }
 printf("\nsolution is :%d",v);
 return 0;
}