/* Q4. write a program to print the below pattern using nested for loop.
     output
     1 0 1 0 1
       1 0 1 0
	 1 0 1
	   1 0
	     1

*/
#include<stdio.h>
#include<conio.h>

void main(){
int i,j,v;
clrscr();
for (i=1;i<=5;i++){
   for(v=1;v<=i;v++){
   printf("  ");
}
  for(j=5;j>=i;j--){
  printf("%d ",j%2);
  }
  printf("\n");
}
getch();
}