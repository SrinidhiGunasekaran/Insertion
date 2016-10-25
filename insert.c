#include<stdio.h>
#include<conio.h>
void main()
{
int n,a[10],position,element,i;
clrscr();
printf("\nNo.of elements:");
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("\nPosition:");
scanf("%d",&position);
printf("\nElement:");
scanf("%d",&element);
for(i=n-1;i>=position-1;i--)
{
a[i+1]=a[i];
}
a[position-1]=element;
printf("\nArray:");
for(i=0;i<=n;i++)
{
printf("\t%d",a[i]);
}
getch();
}
