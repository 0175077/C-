#include "list.h"

C_NODE* C_LIST::createNode(int nData)
{
	C_NODE* pNode = new C_NODE{};
	pNode->m_nData = nData;
	pNode->m_pNext = nullptr;
	pNode->m_pPrev = nullptr;

	return pNode;
}

void C_LIST::linkNode(C_NODE* pPrev, C_NODE* pNext)
{
	
}

void C_LIST::insertNode(C_NODE* pPrev, C_NODE* pNode, C_NODE* pNext)
{
}

void C_LIST::erase(C_NODE* pNode)
{
	linkNode(pNode->m_pPrev, pNode->m_pNext);
	delete pNode;
	pNode = nullptr;
}

C_LIST::C_LIST():
	m_pBegin{},
	m_pEnd{},
	m_cDummyBegin{},
	m_cDummyEnd{}
{ 
	m_pBegin = &m_cDummyBegin;
	m_pEnd = &m_cDummyEnd;

	m_pBegin->m_pNext = m_pEnd;
	m_pEnd->m_pPrev = m_pBegin;
}


void C_LIST::pushBack(int nData)
{
	C_NODE* pNew = createNode(nData);

	//m_pEnd->m_pNext = pNew;
	//pNew->m_pPrev = m_pEnd;

}

void C_LIST::pushFront(int nData)
{
	C_NODE* pNew = createNode(nData);

	m_pBegin->m_pNext->m_pPrev = pNew;
	pNew->m_pNext = m_pBegin->m_pNext;
	m_pBegin->m_pNext = pNew;
	pNew->m_pPrev = m_pBegin;

	//C_NODE* pNextNode = m_pBegin->m_pNext;

	//pNew->m_pPrev = m_pBegin;
	//pNew->m_pNext = m_pEnd;

	//m_pBegin->m_pNext = pNew;
	//pNextNode->m_pPrev = pNew;
}

void C_LIST::popBack()
{
}

void C_LIST::popFront()
{
}

void C_LIST::remove(int nData)
{
	C_NODE* pNode = m_pBegin;
	while (pNode != m_pEnd)
	{
		C_NODE* pNext = pNode->m_pNext;
		erase(pNode);
		pNode = pNext;
	}
}

C_NODE* C_LIST::getBegin()
{
	return m_pBegin->m_pNext;
}

C_NODE* C_LIST::getEnd()
{
	return m_pEnd;
}
