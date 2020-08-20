#include<stdio.h>
#include<math.h>
int main()
{
	float x, y;
	scanf_s("%f %f", &x, &y);
	printf("%d", (int)ceil(y / x));
}