#pragma once
class State
{
public:
	bool currentType;
	State();
	~State();
	virtual bool GetStateType() = 0;
};

