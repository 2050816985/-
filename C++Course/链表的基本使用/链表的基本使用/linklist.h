#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//节点结构体
struct LinkNode
{
	int num;
	struct LinkNode* next;
};

//初始化链表
struct LinkNode* init_Linklist();

//遍历链表
void foreach_Linklist(struct LinkNode* pHeader);