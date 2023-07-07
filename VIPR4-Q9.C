/* Q9. write a program to print the below pattern using nested for loop.
   output
    *       * *       *
     *     *   *     *
      *	  *     *   *
       * *       * *
*/
#include<stdio.h>
#include<conio.h>

void main(){
int i;
clrscr();
for(i=1;i<=4;i++){
   if(i==1){
      printf("\n\n*       * *       *\n");
   }else if(i==2){
      printf(" *     *   *     *\n");
   }else if(i==3){
      printf("  *   *     *   *\n");
   }else{
      printf("   * *       * *\n");
   }
}
getch();
}