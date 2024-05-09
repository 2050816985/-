#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "stdlib.h"
#include <string.h>
using namespace std;
#include <iostream>
int copy(char *keyandvalue,char *valuebuf)
{
	int num = 0;
	int i = 0;
	char* p = keyandvalue;
	int j = strlen(p) - 1;
	int count = 0;
	if (keyandvalue == NULL)
	{
		cout << "×Ö·û´®Îª¿Õ" << endl;
		num = -1;
		return num;
	}
	while (isspace(p[i]) && p[i] != '\0')  //isspaceÊÇÅÐ¶Ïp[i]Îª¿Õ¸ñ
	{
		i++;
	}
	while (isspace(p[j]) && p[j] != '\0')
	{
		j--;
	}
	count = j - i + 1;
	strncpy(valuebuf, keyandvalue + i, count);
	valuebuf[count] = '\0';
	return num;
}
int getKeyByValude(char *keyandvalue, char *keybuf, char *valuebuf)
{
	copy(keyandvalue, valuebuf);  //È¥³ý¿Õ¸ñ²¢¿½±´×Ö·û´®
	cout << "valuebuf£º" << valuebuf << endl;
	
	int num = 0;
	return num;
}
int main()
{
	int ret = 0;
	char buf[1024] = { 0 };
	char *keyandvalue[] = "key2=    valude2   ";
	char * key = "key2";
	ret = getKeyByValude(keyandvalue, key, buf, &buflen);
	if (ret != 0)
	{
		printf("func getKeyByValude() err:%d \n", ret);
		return ret;
	}
	printf("buf:%s \n", buf);
	return ret;
}