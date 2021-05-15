#pragma once
struct Node {
    char data;
    Node* left;
    Node* right;
    Node* parent;
    Node(char input_data = NULL, Node* left_node = NULL, Node* right_node = NULL) {
        data = input_data;
        left = left_node;
        right = right_node;
        parent = NULL;
    };
    void insert(Node& node) {
        if (data == NULL) {
            data = node.data;
            left = node.left;
            right = node.right;
        }
        else if (data > node.data) {
            if (left == NULL) {
                left = new Node;
                left->parent = this;
            }
            left->insert(node);
        }
        else {
            if (right == NULL) {
                right = new Node;
                right->parent = this;
            }
            right->insert(node);
        }
    };

    Node seek(char s_data) {
        if (this == NULL)
            return NULL;
        if (data == s_data)
            return *this;
        else if (data > s_data)
            left->seek(s_data);
        else
            right->seek(s_data);
    }

    Node remove(char r_data) {
  /*      if (data == NULL) {
            return NULL;
        }
        if (data > r_data) {
            left->remove(r_data);
        } 
        else if (data < r_data) {
            right->remove(r_data);
        }*/

        Node found = seek(r_data);
        if (found.data == NULL) {
            return NULL;
        }
        if (found.right != NULL and found.left != NULL) {
            data = 'min';
            right->remove(r_data);
        }
        else {
            if (left != NULL)
                int a = 0;
        }

        return 0;
    }
};