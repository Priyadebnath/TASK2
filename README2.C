# TASK2
#include<stdio.h>
int (int n)
{
  int count1 = 1;
int x = n & (n-1);
printf("ENTER THE NUMBER n");
while(x!=0)
{
count1++;
x=x&(x-1);
printf("THE NUMBER OF ONES IN THE BINARY REPRESENTATION OF THE NUMBER n" + count1++);
}
} 
