#pragma once
class NPC
{
protected:

public:
	NPC();
	virtual~NPC();

	virtual void render() = 0;
};

