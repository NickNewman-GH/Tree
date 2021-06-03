#include <iostream>
using namespace std;
#include "Node.h";

int main()
{
    Node root('e');
    Node input_node('b');

    root.insert(input_node);
    input_node.data = 'a';
    root.insert(input_node);
    input_node.data = 'c';
    root.insert(input_node);
    input_node.data = 'd';
    root.insert(input_node);
	input_node.data = 'f';
	root.insert(input_node);
	input_node.data = 'g';
	root.insert(input_node);
	input_node.data = 'h';
	root.insert(input_node);

    root.remove('b');
}