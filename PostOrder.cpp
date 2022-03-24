#include "PostOrder.h"

void PostOrderVisitTree(Tree T) {
	if (!T) return;
	PostOrderVisitTreeNode(T);
}

void PostOrderVisitTreeNode(TreeNode* TNode) {
	if (TNode) {
		PostOrderVisitTreeNode(TNode->lchild);
		PostOrderVisitTreeNode(TNode->rchild);
		cout << TNode->data << " ";
	}
	else {
		cout << "NULL ";
	}
}
