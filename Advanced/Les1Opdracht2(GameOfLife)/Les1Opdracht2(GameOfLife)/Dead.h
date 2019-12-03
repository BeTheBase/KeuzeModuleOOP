#pragma once
#include "State.h"
class Dead : public State
{
public:
	Dead();
	~Dead();
	virtual bool GetStateType() override;

};

