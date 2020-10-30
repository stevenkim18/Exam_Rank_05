#include "SpellBook.hpp"

SpellBook::SpellBook()
{
}

SpellBook::~SpellBook()
{
	std::vector<ASpell*>::iterator it = spells.begin();
	for(; it != spells.end(); it++)
		delete *it;
}

void SpellBook::learnSpell(ASpell *spell)
{
	if (spell)
	{
		std::vector<ASpell*>::iterator it = spells.begin();
		for(; it != spells.end(); it++)
		{
			if (spell->getName() == (*it)->getName())
				return;
		}
		spells.push_back(spell->clone());
	}
}

void SpellBook::forgetSpell(std::string const &spell_name)
{
	std::vector<ASpell*>::iterator it = spells.begin();
	for(; it != spells.end(); it++)
	{
		if (spell_name == (*it)->getName())
		{
			delete *it;
			spells.erase(it);
			return;
		}
	}
}

ASpell *SpellBook::generateSpell(std::string const &spell_name)
{
	std::vector<ASpell*>::iterator it = spells.begin();
	for(; it != spells.end(); it++)
	{
		if (spell_name == (*it)->getName())
			return (*it)->clone();
	}
	return nullptr;
}
