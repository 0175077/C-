#include "bst.h"

void C_BST::printNode(S_NODE* pNode)
{
	if (!pNode)
		return;

	printf("%d ", pNode->nData);
	printNode(pNode->pL);
	printNode(pNode->pR);
}

C_BST::S_NODE* C_BST::createNode(int nData)
{
	S_NODE* pNode = new S_NODE{};
	pNode->nData = nData;
	pNode->pL = nullptr;
	pNode->pR = nullptr;

	return pNode;
}

C_BST::S_NODE* C_BST::insertNodef(S_NODE* pNode, int nData)
{
	if (pNode == nullptr)
	{
		return createNode(nData);
	}

	if (pNode->nData == nData)
	{
		return pNode;
	}

	if (nData < pNode->nData)
	{
		pNode->pL = insertNodef(pNode->pL, nData);
	}
	else
	{
		pNode->pR = insertNodef(pNode->pR, nData);
	}

	return pNode;
}

C_BST::S_NODE* C_BST::eraseNodeF(S_NODE* pNode, int nData)
{
	if (!pNode)
		return nullptr;
	else if (pNode->nData > nData)
		pNode->pL = eraseNodeF(pNode->pL, nData);
	else if(pNode->nData < nData)
		pNode->pR = eraseNodeF(pNode->pR, nData);
	else
	{
		if (pNode->pL && pNode->pR)
		{
			return pNode;
		}

		S_NODE* pRe = pNode->pL;
		if (pNode->pR)
			pNode = pNode->pR;

		delete pNode;
		return pRe;
	}
}

bool C_BST::insert(int nData)
{
	m_pRoot = insertNodef(m_pRoot, nData);


	return true;
}

void C_BST::erase(int nData)
{
	S_NODE* pUp{};
	S_NODE* pFind = m_pRoot;

	while (pFind && pFind->nData != nData)
	{
		pUp = pFind;
		if (pFind->nData > nData)
			pFind = pFind->pL;
		else if (pFind->nData < nData)
			pFind = pFind->pR;
	}

	if (!pFind)
		return;

	if (pUp)
		printf("up %d\n", pUp->nData);
	printf("find %d\n", pFind->nData);

	if (pFind->pL && pFind->pR)
		return;

	S_NODE* pRe = pFind->pL;
	if (!pFind->pL && pFind->pR)
	{
		pRe = pFind->pR;
	}

	if (pUp == nullptr)
	{
		m_pRoot = pRe;
	}
	else if (pUp->pL == pFind)
	{
		pUp->pL = pRe;
	}
	else if (pUp->pR == pFind)
	{
		pUp->pR = pRe;
	}

	delete pFind;

}

void C_BST::eraseF(int nData)
{
	m_pRoot = eraseNodeF(m_pRoot, nData);
}

void C_BST::print()
{
	printNode(m_pRoot);
	printf("\n");
}
