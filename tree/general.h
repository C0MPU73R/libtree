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


protected:
private:
	Node* root;


};
#endif