#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "linklist.h"

void test01()
{
	//��ʼ������
	struct LinkNode* pHeader = init_Linklist();

	//��������
	printf("�������Ϊ��\n");
	foreach_Linklist(pHeader);
}

int main()
{
	test01();
	system("pause");
	return 0;
}