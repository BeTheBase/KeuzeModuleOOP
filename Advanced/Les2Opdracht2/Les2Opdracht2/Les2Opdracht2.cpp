#include <iostream>
#include "NPC.h";
#include <vector>
#include "Shaman.h";
#include "Orc.h";
#include "Elf.h";
#include "Farmer.h";
#include "Soldier.h";

void draw(std::vector<NPC*> npcs)
{
	for (auto& npc : npcs)
	{
		std::cout << "---" << std::endl;
		npc->render();
	}
	std::cout << "---" << std::endl;
}

int main()
{
	// 5 classes
	std::vector<NPC*> npcs;

	NPC* shamanOrc = new Decorator(new Shaman(new Orc("Henk")));
	NPC* shamanElf = new Decorator(new Shaman(new Elf("Aldriane")));
	NPC* farmerOrc = new Decorator(new Farmer(new Orc("Brian")));
	NPC* farmerElf = new Decorator(new Farmer(new Elf("Agne")));
	NPC* soldierOrc = new Decorator(new Soldier(new Orc("Kees")));
	NPC* soldierElf = new Decorator(new Soldier(new Elf("Tarfull")));

	npcs.push_back(shamanOrc);
	npcs.push_back(shamanElf);
	npcs.push_back(farmerOrc);
	npcs.push_back(farmerElf);
	npcs.push_back(soldierOrc);
	npcs.push_back(soldierElf);

	draw(npcs);

	delete shamanOrc;
	delete shamanElf;
	delete farmerOrc;
	delete farmerElf;
	delete soldierOrc;
	delete soldierElf;
}
