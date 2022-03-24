#pragma once

enum class PointerTag { Link = 0, Thread = 1};
typedef char ElemType;
typedef struct BiTrNode {
	ElemType data;
	struct BiTrNode* lchild, * rchild;			// ���㣬�ҽ��
	PointerTag LTag, RTag;						// ǰ������ж�
} BiTrNode, *BiThrTree;

bool Visit(ElemType e);
bool InOrderTraverse(BiThrTree T);
