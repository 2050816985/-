#pragma warning(disable:4996)
#include "linklist.h"

//初始化链表
//返回值为头节点
struct LinkNode* init_Linklist()
{
	struct LinkNode* pHeader = malloc(sizeof(struct LinkNode));
	if (pHeader == NULL)
	{
		return NULL;
	}

	//头节点不维护数据域
	pHeader->num = -1;
	pHeader->next = NULL;

	//创建尾节点指针 用户记录当前链表尾部节点位置，方便做尾插
	struct LinkNode* pTail = pHeader;

	int val = -1;
	while (1)
	{
		printf("请插入数据，输入-1代表插入结束\n");

		scanf("%d", &val);

		if (val == -1)
		{
			break;
		}

		//创建新节点
		struct LinkNode * newNode = malloc(sizeof(struct LinkNode));
		newNode->num = val;
		newNode->next = NULL;

		//更新节点指向
		pTail->next = newNode;
		pTail = newNode;
	}

	return pHeader;
}

//遍历链表
void foreach_Linklist(struct LinkNode* pHeader)
{
	if (pHeader == NULL)
	{
		return;
	}

	//当前节点，指向第一个有效数据
	struct LinkNode* pCurrent = pHeader->next;

	while (pCurrent != NULL)
	{
		printf("%d\n", pCurrent->num);
		pCurrent = pCurrent->next;
	}
}