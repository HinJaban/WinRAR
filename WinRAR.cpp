#include <iostream>

/*2-я лаба - функцию осуществления дерева придется перестроить*/
struct Node 
{
    int data;
    Node *left, *right; //Он означает, что переменная left имеет не само значение типа Node, а указывает на адрес, где находится другой объект типа Node.
};

int main()
{
    std::cout << "Hello" << std::endl;
}