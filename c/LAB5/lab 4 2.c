#include <stdio.h>

struct complx
{
	int r;
	int i;

};

struct complx addition(struct complx a, struct complx b)
{
	struct complx add;

	add.r = a.r + b.r;
	add.i = a.i + b.r;

	return add;
}

struct complx subtraction(struct complx a, struct complx b)
{
	struct complx sub;

	sub.r = a.r - b.r;
	sub.i = a.i - b.r;

	return sub;
}

int main()
{
	struct complx num1, num2, add, sub;
	printf("Enter  a complex Number ");
	scanf("%d%di", &num1.r, &num1.i);
	printf("Enter  a complex Number ");
	scanf("%d%di", &num2.r, &num2.i);

	add = addition(num1, num2);
	sub = subtraction(num1, num2);

	printf("\nThe addition of complex number :%d %di", add.r, add.i);
	printf("\nThe addition of complex number :%d %di", sub.r, sub.i);

	return 0;
}

