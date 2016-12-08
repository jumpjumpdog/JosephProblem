#pragma once
#ifndef JOSEPH
#define JOSEPH
#include"iostream"
using namespace std;


struct Node {
	int number=0;
	bool isIn=1;
	Node* next=NULL;

	Node(int);
	~Node();
};

struct onceData {
	int numTotal=0;
	int startPlace=0;
	int gap=0;
	int rest=0;
};
class Joseph
{
private:
	onceData data;
	Node* head=NULL;

	

public:
	Joseph();
	Joseph(int,int,int,int);
	~Joseph();
	Node* getHead();
	onceData& getData();
	void insertNode();
	void deleteNode();
	void setData(int,int,int);
	void kill();
	void tranverse();
	Node* locate(Node*);


};

#endif