#include<stdio.h>
#include<conio.h>
void main()
{
int first,last,middle,size,i,aElement,list[100];
clrscr();
printf("enter the size of the list: ");
scanf("%d",&size);
printf("enter %d integer value in assening order \n",size);

for(i=0;i<size;i++)
scanf("%d",list[i]);
printf("enter value to be search: ");
scanf("%d",sElement);
first=0;
last=size-1;
middle=(first+last)/2;

while (first<=last){
if(list[middle]<sElement)
first=middle+1;
else if(list[middle]="sElement){
printf("element found at in dev %d\n",middle);
break;
}
else
last=middle-1;
middle=(first+last)/2;
}
if(first>last)
printf("element not found in the list");
getch();
}


