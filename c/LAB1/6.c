#include <stdio.h>
#include <conio.h>
int main()
 {
     int x1,y1,x2,y2;

     printf("Enter two number X and Y for Multiplication :\n");
     scanf("%d%d",&x1,&y1);

     x1*=y1;
     printf("Incremented value:%d\n",x1);

     printf("Enter two number X and Y for Division :\n");
     scanf("%d%d",&x2,&y2);

     x2/=y2;
     printf("Division :%d\n",x2);

     return 0;
     getch();

 }

