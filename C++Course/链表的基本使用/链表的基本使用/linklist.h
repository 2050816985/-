#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//�ڵ�ṹ��
struct LinkNode
{
	int num;
	struct LinkNode* next;
};

//��ʼ������
struct LinkNode* init_Linklist();

//��������
void foreach_Linklist(struct LinkNode* pHeader);