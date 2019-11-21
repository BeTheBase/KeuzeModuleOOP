#include "BritseBTWBerekening.h";



BritseBTWBerekening::BritseBTWBerekening()
{
}


BritseBTWBerekening::~BritseBTWBerekening()
{
}

float BritseBTWBerekening::geefBTW(int type, float bedrag)
{
	switch (type)
	{
		case BtwBerekening::VERKOOP_TYPE_BOEKEN:
			return bedrag * 0.05;
			break;
		case BtwBerekening::VERKOOP_TYPE_KLEDING:
			return 0;
			break;
		case BtwBerekening::VERKOOP_TYPE_SCHOENEN:
			return bedrag * 0.20f;
			break;
	}
}
