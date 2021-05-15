#include <iostream>
using namespace std;
#include "Node.h";

int main()
{
    Node root('c');
    Node input_node('b');

    root.insert(input_node);
    input_node.data = 'd';
    root.insert(input_node);
    input_node.data = 'a';
    root.insert(input_node);
    input_node.data = 'e';
    root.insert(input_node);

    Node node = root.seek('a');

    root.remove('b');
}