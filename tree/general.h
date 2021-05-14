// This is a basic general purpose tree structure
// @author: C0MPU73R
#ifndef GENERAL_H
#define GENERAL_H
#include <string>
struct Node
{
	std::string name;
	int xPos;
	int yPos;

	void resetName(const std::string& name);
};
class general
{
public:
	general();
	~general();
	void addNode();
	void removeNode();
	Node* getRoot(); const


protected:
private:
	Node* root;


};
#endif