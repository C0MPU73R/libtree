#include "general.h"

general::general()
{
	root = nullptr;
}

general::~general()
{
}

void general::addNode(int x, int y, std::string name)
{
	if (root == nullptr)
	{
		root = new Node();
		root->name = name;
		root->xPos = x;
		root->yPos = y;
	}
	else
	{
		Node* node = new Node();
		node->name = name;
		node->xPos = x;
		node->yPos = y;


	}
}

void general::removeNode()
{
}

Node* general::getRoot() const
{
	return nullptr;
}

void Node::resetName(const std::string& name)
{
	this->name = name;
}
