#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "linklist.h"

void test01()
{
	//初始化链表
	struct LinkNode* pHeader = init_Linklist();

	//遍历链表
	printf("遍历结果为：\n");
	foreach_Linklist(pHeader);
}

int main()
{
	test01();
	system("pause");
	return 0;
}