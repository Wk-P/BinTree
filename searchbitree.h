#pragma once

enum class PointerTag { Link = 0, Thread = 1};
typedef char ElemType;
typedef struct BiTrNode {
	ElemType data;
	struct BiTrNode* lchild, * rchild;			// 左结点，右结点
	PointerTag LTag, RTag;						// 前驱后继判断
} BiTrNode, *BiThrTree;

bool Visit(ElemType e);
bool InOrderTraverse(BiThrTree T);
