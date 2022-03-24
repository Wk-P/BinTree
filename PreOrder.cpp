#include "PreOrder.h"

void PreOrderVisitTree(Tree T) {
	if (!T) return;
	PreOrderVisitTreeNode(T);
}

void PreOrderVisitTreeNode(TreeNode* TNode) {
	if (TNode) {
		cout << TNode->data << " ";
		PreOrderVisitTreeNode(TNode->lchild);
		PreOrderVisitTreeNode(TNode->rchild);
	}
	else {
		cout << "NULL ";
	}
}
