#include "stdio.h"
#include "stdlib.h"
#include "string.h"

void main26() {
	char buf[100];
	int a = 10;
	int* p;
	p = &a;
	*p = 20;
	{
		char* p = NULL;
		p = (char *)malloc(100);
		if (p != NULL)
		{
			free(p);
		}
	}
	system("pause");
}
char* getstring1()
{
	char* p1 = "abcde";
	return p1;
}
char* getstring2()
{
	char* p2 = "abcde";
	return p2;
}
void main()
{
	int i = 0;
	char* p1 = getstring1();
	char* p2 = getstring2();
	char******* p3 = NULL;
	strcmp(p1, p2);
	system("pause");
}