#pragma once
#include "BtwBerekening.h";

class BritseBTWBerekening : public BtwBerekening
{
public:
	BritseBTWBerekening();
	virtual~BritseBTWBerekening();
	float geefBTW(int type, float bedrag);
};

