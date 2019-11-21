#pragma once
class BtwBerekening
{
public:
	static const int VERKOOP_TYPE_KLEDING = 1;
	static const int VERKOOP_TYPE_BOEKEN = 2;
	static const int VERKOOP_TYPE_SCHOENEN = 3;
public:
	BtwBerekening();
	virtual~BtwBerekening();

	virtual float geefBTW(int type, float price) =0;
};

