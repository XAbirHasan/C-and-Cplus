/**
 * C program to calculate total electricity bill.
 */

#include<stdio.h>
#include<conio.h>

int main()

{
    float unit,unit_price,bill,final_bill;
    printf("Enter Your Electric Unit=\n");
    scanf("%f",&unit);

    if(unit>=1 && unit<=100){
        unit_price=2.5;
        bill=unit*unit_price;

    }
    else if(unit>=101 && unit<=200){
        unit_price=5;
        bill=(2.5*100)+(unit-100)*unit_price;
    }
    else{
        unit_price=7.5;
        bill=(2.5*100)+(5*100)+(unit-200)*unit_price;
    }

    final_bill=bill+(bill*20/100);

    printf("Your bill is =%f",final_bill);

    return 0;

    getch();

}
