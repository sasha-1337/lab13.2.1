#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
#include "max.h"
#include "min.h"
#include "var.h"

#define Z 11

#define PRINTI(w) puts("control output"); \
		printf(#w"=%d\n",w)

using namespace Var;
using namespace MAX;
using namespace MIN;

void main()
{
	puts("Lab 13.2. Using macros and preprocessing directive");
	do {
		puts("\n");
		puts("define maximum of two numbers");
		puts("Input 3 integer numbers");
		scanf("%d", &x);
		PRINTI(x);
		scanf("%d", &y);
		PRINTI(y);
		scanf("%d", &z);
		PRINTI(z);

		#if Z > 10
			max();
		#else
			min();
		#endif
		puts("Repeat? y /n "); ch = _getch();
	} while (ch != 'n');
}