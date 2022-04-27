//use turbo c compiler
/*prog. to take a array with size of 10 and add 7 element after that add a element at begining one 
at any random location given by user and one at last position*/
#include<stdio.h>
#include<conio.h>
void main()
{
 int a[10],i,n,k;
 clrscr();
 printf("enter element in array :\n");
 for(i=0;i<7;i++)
 {
  scanf("%d",&a[i]);
 }
 for(i=0;i<7;i++)
 {
 printf("%d\t",a[i]);
 }
 printf("\nenter eny new element in beging :\n");
 scanf("%d",&n);
 for(i=7;i>=0;i--)
 {
  a[i+1]=a[i];
 }
 a[0]=n;
 printf("after adding element is begening:\n");
 for(i=0;i<8;i++)
 {
  printf("%d",a[i]);
 }
 a[8]=n;
 printf("\nenter a value at any location :\n");
 scanf("%d",&k);
 for(i=8;i>=k;i--)
 {
  a[i+1]=a[i];
 }
 printf("\nenter any new number for random alocation :\n");
 scanf("%d",&n);
 a[k]=n;
 printf("\nafter adding randomly my array is :\n");
 for(i=0;i<9;i++)
 {
  printf("%d",a[i]);
 }
 printf("\nenter any value in last of an  array :\n");
 for(i=9;i<=9;i++)
 {
  scanf("%d",&a[i]);
 }
 printf("\nmy complete array  is :\n");
 for(i=0;i<=9;i++)
 {
  printf("%d",a[i]);
 }
 getch();
}