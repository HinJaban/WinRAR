#include <iostream>

/*2-я лаба - функцию осуществления дерева придется перестроить*/
struct Node 
{
    int data;
    Node *left, *right; //Он означает, что переменная left имеет не само значение типа Node, а указывает на адрес, где находится другой объект типа Node.
};
/*Брать ссылку на корень дерева и бежать туда, куда направляем - умное решение для обработки пар*/
/*функция printtree однозначно рекурсивная*/
void add(Node *&node, int value) 
{
    if(node == NULL) 
    {
        node = new Node;
        node->data = value;
        node->left = NULL; //NULL связан с указателем и обозначает, что он ни на что не указывает
        node->right = NULL;
        
    }
}
void print(Node *node) 
{
    if(node!=NULL) 
    {
         std::cout<<node->data<<" ";
         print(node->left);
         print(node->right);
    }

}
/*Совсем не обязательно, чтобы дерево было сбалансированное*/
/* 
    (5)
    / \
(6)    (2)
      /   \
    (3)    (4)
          /
        (7)
- префиксный код, соблюдающий условие фано
*/ 

void main()
{
    /*изначально дерева никакого не было*/
    Node *root=NULL; 
    add(root, 5);
    add(root->left,6);
    add(root->right,2);
    add(root->right->left,3);
    add(root->right->right->left,7);
    print(root);
    /*#5 6 2 2 3 3 7*/
}