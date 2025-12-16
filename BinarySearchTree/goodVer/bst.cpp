#include "bst.h"

C_BST::S_NODE* C_BST::createNode(int nData)
{
	S_NODE* pNode = new S_NODE{};
	pNode->nData = nData;
	
	return pNode;
}

C_BST::S_NODE** C_BST::findNode(S_NODE** ppNode, int nData)
{
	if (!*ppNode || (*ppNode)->nData == nData)
		return ppNode;

	if ((*ppNode)->nData > nData)
		return findNode(&(*ppNode)->pL, nData);
	else if ((*ppNode)->nData < nData)
		return findNode(&(*ppNode)->pR, nData);


	return ppNode;
}

void C_BST::printNode(S_NODE* pNode)
{
	if (!pNode)
		return;
	printf("%d ", pNode->nData);
	printNode(pNode->pL);
	printNode(pNode->pR);
}

C_BST::S_NODE** C_BST::findMaxNode(S_NODE** ppNode)
{
	if (!(*ppNode)->pR)
		return ppNode;
	return findMaxNode(&(*ppNode)->pR);
}

bool C_BST::insert(int nData)
{
	S_NODE** ppNode = findNode(&m_pRoot, nData);
	if (*ppNode)
		return false;


	*ppNode = createNode(nData);
	return true;
}

bool C_BST::erase(int nData)
{
	S_NODE** ppNode = findNode(&m_pRoot, nData);
	if (!*ppNode)
		return false;

	if ((*ppNode)->pL && (*ppNode)->pR)
	{
		S_NODE** ppMax = findMaxNode(ppNode);
		printf("max %d ", (*ppMax)->nData);
		(*ppNode)->nData = (*ppMax)->nData;

		ppNode = ppMax;

		return true;
	}


	S_NODE* pDel = *ppNode;
	*ppNode = pDel->pL;
	if (pDel->pR)
		*ppNode = pDel->pR;


	return false;
}

bool C_BST::find(int nData)
{
	if (*findNode(&m_pRoot, nData))
		return true;
	return false;
}

void C_BST::print()
{
	printNode(m_pRoot);
	printf("\n");
}
