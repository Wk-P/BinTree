#pragma once

#include <iostream>
using namespace std;

typedef char ElemType;
typedef struct TreeNode{
	ElemType data;
	struct TreeNode* lchild, * rchild;
} TreeNode, *Tree;