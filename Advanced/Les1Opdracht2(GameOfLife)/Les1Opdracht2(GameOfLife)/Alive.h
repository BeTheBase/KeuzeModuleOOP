#pragma once
#include "State.h";

class Alive : public State
{
public:
	Alive();
	~Alive();
	virtual bool GetStateType() override;
};

