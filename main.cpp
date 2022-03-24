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
    cout << endl;
    // 中序遍历
    InOrderVisitTree(T);
    cout << endl;
    // 后序遍历
    PostOrderVisitTreeNode(T);
    cout << endl;
    return 0;
}
