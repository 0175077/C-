#pragma once

class C_NUMBER_TABLE;

class C_BASEBALL
{
public:
	enum class E_RESULT
	{
		E_NONE = 0,
		E_OUT,
		E_BALL,
		E_STRIKE,
		E_MAX,
	};

private:
	C_NUMBER_TABLE* m_pTable;
	int m_nTableCount;
	int m_arNumber[10];
	int m_arInput[10];

private:
	void makeNumber();
	void swapData(int& nDst, int& nSrc);
	bool input();
	bool result();

public:
	C_BASEBALL() = default;
	void init(int nTableCount = 3);
	void run();




};