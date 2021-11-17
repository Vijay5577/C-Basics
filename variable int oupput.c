
#include<stdio.h>
void main()
{
	//variable decleration
int x = 10;
int	y = 4;
int	z = 3;
	x += y;
	y -= z;
	z += x;
	y *= x;
    x *= z;
	printf("%d %d %d",x,y,z);
}
