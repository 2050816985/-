#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "stdlib.h"
#include <string.h>
using namespace std;
int main()
{
	FILE* fp = NULL;
	char* fileName = "d:/1.data";
	fp = fopen(fileName, "wb+");
	return 0;
}