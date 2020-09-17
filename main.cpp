#include <iostream>
#include "Tree.h"
#include "Node.h"

int main() {
    Tree *tree = new Tree();
    Node *temp = tree->insert();
    tree->display(temp);


}
