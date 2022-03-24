#include "searchbitree.h"
#include <iostream>

using namespace std;

bool Visit(ElemType e) {
	cout << e;
	return true;
}

bool InOrderTraverse(BiThrTree T) {
	BiTrNode* p = T->lchild;
	while (p != T) {
		while (p->LTag == PointerTag::Link) p = p->lchild;
		if (!Visit(p->data)) return false;
		while (p->RTag == PointerTag::Thread && p->rchild != T) {
			p = p->rchild;
			Visit(p->data);
		}
		p = p->rchild;
	}
	return true;
}
