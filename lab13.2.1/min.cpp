#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
#include "var.h"
#include "min.h"

#define Min(n,m) ((n)<(m))?(n):(m)
#define act_in_min_1(x,z) ( ((x)-(z)) < 0)? ( -((x)-(z)) ):( (x)-(z) )
#define act_in_min_2(x,z) ( ((x)+(z)) < 0)? ( -((x)+(z)) ):( (x)+(z) )

#define PRINTR(w) puts ("rezult :"); \
		printf (#w"=%f\n",(float)w)

using namespace Var;

void MIN::min() 
{
	w = Min(act_in_min_1(x, z), act_in_min_2(x, z));
	PRINTR(w);
}