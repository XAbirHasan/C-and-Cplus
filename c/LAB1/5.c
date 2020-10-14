#include <stdio.h>
#include <conio.h>
int main()
 {
     int x1,y1,x2,y2;

     printf("Enter two number X and Y for incremented value :\n");
     scanf("%d%d",&x1,&y1);

     x1+=y1;
     printf("Incremented value:%d\n",x1);

     printf("Enter two number X and Y for decremented value :\n");
     scanf("%d%d",&x2,&y2);

     x2-=y2;
     printf("Decremented value:%d\n",x2);

     return 0;
     getch();

 }
