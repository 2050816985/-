#pragma warning(disable:4996)
#include "linklist.h"

//��ʼ������
//����ֵΪͷ�ڵ�
struct LinkNode* init_Linklist()
{
	struct LinkNode* pHeader = malloc(sizeof(struct LinkNode));
	if (pHeader == NULL)
	{
		return NULL;
	}

	//ͷ�ڵ㲻ά��������
	pHeader->num = -1;
	pHeader->next = NULL;

	//����β�ڵ�ָ�� �û���¼��ǰ����β���ڵ�λ�ã�������β��
	struct LinkNode* pTail = pHeader;

	int val = -1;
	while (1)
	{
		printf("��������ݣ�����-1����������\n");

		scanf("%d", &val);

		if (val == -1)
		{
			break;
		}

		//�����½ڵ�
		struct LinkNode * newNode = malloc(sizeof(struct LinkNode));
		newNode->num = val;
		newNode->next = NULL;

		//���½ڵ�ָ��
		pTail->next = newNode;
		pTail = newNode;
	}

	return pHeader;
}

//��������
void foreach_Linklist(struct LinkNode* pHeader)
{
	if (pHeader == NULL)
	{
		return;
	}

	//��ǰ�ڵ㣬ָ���һ����Ч����
	struct LinkNode* pCurrent = pHeader->next;

	while (pCurrent != NULL)
	{
		printf("%d\n", pCurrent->num);
		pCurrent = pCurrent->next;
	}
}