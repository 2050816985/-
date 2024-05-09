#include "stdio.h"
#include "stdlib.h"
#include "string.h"
using namespace std;
#include <iostream>
int getstr(char *inbuf,char *outbuf)
{
	int num = 0;
	if (inbuf == NULL || outbuf == NULL)
	{
		num = -1;
		cout << "×Ö·û´®Îª¿Õ£¡" << endl;
		return -1;
	}
	char* p = inbuf;
	while (*p++)
	{
		if (*p == ' ')
		{
			continue;
		}
		else
		{
			*outbuf = *p;
			outbuf++;
		}
	}
	
	return num;
}
int main()
{
	char buf[] = "   abcdefgdddd    ";
	char outbuf[] = "";
	getstr(buf, outbuf);
	printf("%s", outbuf);
	
	return 0;
}