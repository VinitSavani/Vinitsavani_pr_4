/* Q6. write a program to print the below pattern using nested for loop.
       output
		  5
		4 5 4
	      3 4 5 4 3
	    3 3 4 5 4 3 2
	  1 2 3 4 5 4 3 2 1
*/

#include<stdio.h>
#include<conio.h>

void main(){
int i,j,k,s;
clrscr();
for(i=5;i>=1;i--){
   for(k=i;k>=1;k--){
   printf("  ");
   }
      for(j=i;j<=5;j++){
      printf("%d ",j);
      }
	 for(s=5-1;s>=i;s--){
	  printf("%d ",s);
	 }
	  printf("\n");
}
getch();
}