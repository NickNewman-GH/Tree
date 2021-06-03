#include <iostream>
using namespace std;
#include "Node.h";

int main()
{
    Node root('e');

	char data[] = "bacdfgh";

	for (int i = 0; i < strlen(data); i++) {
		root.insert(data[i]);
	}

	//Node input_node('b');

	//root.insert(input_node);
	//input_node.data = 'a';
	//root.insert(input_node);
	//input_node.data = 'c';
	//root.insert(input_node);
	//input_node.data = 'd';
	//root.insert(input_node);
	//input_node.data = 'f';
	//root.insert(input_node);
	//input_node.data = 'g';
	//root.insert(input_node);
	//input_node.data = 'h';
	//root.insert(input_node);

    root.remove('b');
}