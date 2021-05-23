#include <stdio.h>
#include <cmath>
#define PUT_DELIM(x, h, b) (x) + (h) >= (b) ? '\n' : ' '
#define COND1(x) (x) < -4.0
#define FUNC1(x) sqrt(pow(x,2) - 4)
#define COND2(x) x >= -4 && (x) <= 4.0
#define FUNC2(x) abs(x + 1)
#define FUNC3(x) -sqrt(pow(x,2) - 4))
#define FUNC(x) COND1(x) ? FUNC1(x) : (COND2(x) ? FUNC2(x) : FUNC3(x)

int main()
{
	double a = -6.0, b = 6.0, x, h = 0.1;
	printf("x:\t");
	for (x = a; x <= b; x += h)
	{
		printf("%6.2f%c", x, PUT_DELIM(x, h, b));
	}
	printf("y:\t");
	for (x = a; x <= b; x += h)
	{
		printf("%6.3f%c", FUNC(x), PUT_DELIM(x, h, b));
	}
	getchar();
	return 0;
}