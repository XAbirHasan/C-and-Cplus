#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>

struct complx
{
	int real_val;
	int imaginary;

};

struct complx addition(struct complx a, struct complx b)
{
	struct complx add;

	add.real_val = a.real_val + b.real_val;
	add.imaginary = a.imaginary + b.imaginary;

	return add;
}

struct complx subtraction(struct complx a, struct complx b)
{
	struct complx sub;

	sub.real_val = a.real_val - b.real_val;
	sub.imaginary = a.imaginary - b.imaginary;

	return sub;
}

int main()
{
	struct complx a, b, add, sub;
	scanf("%d%d%d%d", &a.real_val, &a.imaginary , &b.real_val, &b.imaginary);

	add = addition(a, b);
	sub = subtraction(a, b);

	printf("\naddition of complex number :%d %di", add.real_val, add.imaginary);
	printf("\nsubtraction of complex number :%d %di", sub.real_val, sub.imaginary);

    _getch();
	return 0;
}

