/* Q1. write a program to print the below pattern using nested for loop.
     output
     41
     41 42
     41 42 43
     41 42 43 44
     41 42 43 44 45
*/
#include<stdio.h>
#include<conio.h>

void main(){
int i,j;
clrscr();
for (i=41;i<=45;i++){
   for(j=41;j<=i;j++){
      printf("%d ",j);
   }
printf("\n");
}
getch();
}