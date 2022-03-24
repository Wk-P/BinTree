#include "CreateTree.h"
#include <iostream>

using namespace std;

Tree CreateTree() {
	Tree T = (Tree)malloc(sizeof(Tree));
	if (T) T = CreateTreeNode();
	return T;
}

TreeNode* CreateTreeNode() {
	TreeNode* TNode = new TreeNode;
	ElemType input;
	cin >> input;

	if (input == '0') {
		TNode = NULL;
	}
	else {
		TNode->data = input;
		TNode->lchild = CreateTreeNode();
		TNode->rchild = CreateTreeNode();
	}
	return TNode;
}