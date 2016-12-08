#include "Joseph.h"
#include"iostream"
using std::cin;
using std::cout;
using std::endl;


Node::Node(int i) {
	number = i;
	isIn = true;
	next = NULL;
}

Node::~Node() {
	cout << "第" << number << "人淘汰" << endl;
}

Joseph::Joseph() {

}

Joseph::Joseph(int N,int S,int M,int k )
{
	data.numTotal = N;
	data.startPlace = S;
	data.gap = M;
	data.rest = k;

	Node *newNode,*p;
	head = new Node(1);
	p = head;
	for (int i = 2; i <= data.numTotal; i++) {
		newNode = new Node(i);
		p ->next= newNode;
		p = p->next;
	}
	p->next = head;
	
};


Joseph::~Joseph()
{

};


Node*  Joseph::getHead() {
	return head;
};

onceData& Joseph::getData() {
	return data;
}

void Joseph::insertNode() {

};

void Joseph::deleteNode() {

};

Node* Joseph::locate(Node*q) {                              //找到应该删除的节点的前驱节点
	Node* p = q;
	int num = data.gap%data.numTotal;
	for (int i = 1; i <num ; i++)
	{
		p = p->next;
	}
	return p;
};


void Joseph::kill() {
	Node* q = this->head;
	Node* temp;

	int _startPlace = data.startPlace % data.numTotal;
	if (1 == _startPlace) {
		for (int i = 1; i < data.numTotal; i++) {
			q = q->next;
		}
	}
	else {
		for (int i = 1; i < data.startPlace; i++) {
			q = q->next;
		}
	}
	
	while (data.numTotal!=data.rest) {
		q = locate(q);
		temp = q->next;
		q->next = q->next->next;
		if (temp == head)
			head = q->next;
		delete temp;
		data.numTotal--;
	}
}


void Joseph::setData(int S, int M, int k) {

	data.startPlace = S;
	data.gap = M;
	data.rest = k;
}

void Joseph::tranverse() {
	Node* p=head;
	for (int i = 0; i < data.numTotal; i++) {
		cout << p->number << " ";
		p = p->next;
	}
}

