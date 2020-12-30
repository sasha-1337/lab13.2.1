#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
#include "var.h"
#include "max.h"

#define Max(n,m) ((n)>(m))?(n):(m)
#define act_in_max_1(x) (x)*(x)*(x) 
#define act_in_max_2(x,y) ((x)+(y))*((x)+(y))

#define PRINTR(w) puts ("rezult :"); \
		printf (#w"=%f\n",(float)w)

using namespace Var;

void MAX::max() 
{
	w = Max(act_in_max_1(x), act_in_max_2(x, y));
	PRINTR(w);
}