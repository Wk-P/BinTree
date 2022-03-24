#include "InOrder.h"

void InOrderVisitTree(Tree T) {
	if (T) {
		TreeNode* p = T;
		InOrderVisitTreeNode(p);
	}
}
void InOrderVisitTreeNode(TreeNode* TNode) {
	if (TNode) {
		InOrderVisitTreeNode(TNode->lchild);
		cout << TNode->data << " ";
		InOrderVisitTreeNode(TNode->rchild);
	}
	else {
		cout << "NULL" << " ";
	}
	return;
}