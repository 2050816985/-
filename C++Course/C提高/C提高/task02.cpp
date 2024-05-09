#include "stdio.h"
#include "stdlib.h"
#include "string.h"
using namespace std;
#include <iostream>
int getStr1Str2(char* source, char* buf1, char* buf2)
{
	int num = 0;
	char* p = source;
	if (source == NULL)
	{
		cout << "ÊäÈëµÄ×Ö·û´®ÓÐÎó£¡" << endl;
		num = -1;
	}
	while (*p)
	{
		*buf1 = *p;
		p++;
		buf1++;
		*buf2 = *p;
		p++;
		buf2++;
	}
	return num;
}
int main()
{
	char source[] = "1a2b3d4z";
	char buf1[10] = "";
	char buf2[10] = "";
	getStr1Str2(source,buf1,buf2);
	cout << "buf1:" << buf1 << endl;
	cout << "buf2:" << buf2 << endl;
	return 0;
}