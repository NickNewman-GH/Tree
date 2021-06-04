#pragma once
struct Node {
	char data;
	Node* left;
	Node* right;

	Node(char input_data = NULL, Node* left_node = nullptr, Node* right_node = nullptr) {
		data = input_data;
		left = left_node;
		right = right_node;
	}

	void insert(Node& node) {
		if (data == NULL) {
			data = node.data;
			left = node.left;
			right = node.right;
		}
		else if (data > node.data) {
			if (left == nullptr)
				left = new Node;
			left->insert(node);
		}
		else {
			if (right == nullptr)
				right = new Node;
			right->insert(node);
		}
	}

	void insert(char insert_data) {
		if (data == NULL) {
			data = insert_data;
			left = nullptr;
			right = nullptr;
		}
		else if (data > insert_data) {
			if (left == nullptr)
				left = new Node;
			left->insert(insert_data);
		}
		else {
			if (right == nullptr)
				right = new Node;
			right->insert(insert_data);
		}
	}

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
		if (data == NULL)
			return NULL;
		if (data > r_data) {
			*left = left->remove(r_data);
		}
		else if (data < r_data) {
			*right = right->remove(r_data);
		}
		else if (left != nullptr && right != nullptr) {
			data = right->minimum().data;
			*right = right->remove(data);
		}
		else
			if (left != nullptr) {
				data = left->data;
				right = left->right;
				left = left->left;
			}
			else {
				data = right->data;
				left = right->left;
				right = right->right;
			}
		return *this;
	}

private:
	Node minimum() {
		if (left != nullptr) {
			left->minimum();
		}
		else {
			return *this;
		}
	}
};