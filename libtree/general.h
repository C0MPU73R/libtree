// This is a basic general purpose tree structure
// @author: C0MPU73R
#ifndef GENERAL_H
#define GENERAL_H
#include <string>
struct Node
{
public:
	std::string name;
	int xPos;
	int yPos;
	Node* prev;
	Node* left;
	Node* right;

	void resetName(const std::string& name);
};

class general
{
	public:
		general();
		~general();
		void addNode(int x, int y, std::string name);
		void removeNode();
		Node* getRoot() const;

	protected:
		Node* root;

	private:


};
#endif