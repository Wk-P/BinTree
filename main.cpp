#include <iostream>
#include "CreateTree.h"
#include "InOrder.h"
#include "PreOrder.h"
#include "PostOrder.h"

using namespace std;

int main()
{
    Tree T = CreateTree();
    // 前序遍历
    PreOrderVisitTree(T);
    // 中序遍历
    InOrderVisitTree(T);
    // 后序遍历
    PostOrderVisitTreeNode(T);
    return 0;
}
