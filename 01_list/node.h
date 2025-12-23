#pragma once

class C_LIST;

class C_NODE
{
	friend C_LIST;
private:
	C_NODE* m_pPrev;
	C_NODE* m_pNext;
	int m_nData;

private:
	C_NODE() = default;

public:
	int getData();
	C_NODE* getNext();
};