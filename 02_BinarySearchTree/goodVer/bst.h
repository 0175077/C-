#pragma once


#include <stdio.h>

class C_BST
{
private:
	struct S_NODE
	{
		int nData;
		S_NODE* pL;
		S_NODE* pR;
	};

private:
	S_NODE* m_pRoot;

private:
	S_NODE* createNode(int nData);
	S_NODE** findNode(S_NODE** ppNode, int nData);
	void printNode(S_NODE* pNode);
	S_NODE** findMaxNode(S_NODE** ppNode);

public:

	C_BST() = default;
	bool insert(int nData);
	bool erase(int nData);
	bool find(int nData);

	void print();
};