#include "Warlock.hpp"

Warlock::Warlock(std::string const &name, std::string const &title)
	: name(name), title(title)
{
	std::cout << this->name << ": What a boring day" << std::endl;
}

Warlock::~Warlock()
{
	std::cout << this->name << ": My job here is done!" << std::endl;
	std::vector<ASpell*>::iterator it;
	for(; it != this->spells.end(); it++)
		delete *it;
}

std::string const &Warlock::getName() const
{
	return this->name;
}

std::string const &Warlock::getTitle() const
{
	return this->title;
}

void Warlock::setTitle(std::string const &title)
{
	this->title = title;
}

void Warlock::introduce() const
{
	std::cout << this->name << ": My name is " << this->name << ", " << this->title << std::endl;
}

void Warlock::learnSpell(ASpell *spell)
{
	if (spell)
	{
		std::vector<ASpell*>::iterator it = this->spells.begin();
		for (; it != this->spells.end(); it++)
		{
			if (spell->getName() == (*it)->getName())
				return ;
		}
		this->spells.push_back(spell->clone());
	}
}

void Warlock::forgetSpell(std::string name)
{
	std::vector<ASpell*>::iterator it = this->spells.begin();
	for(; it != this->spells.end(); it++)
	{
		if (name == (*it)->getName())
		{
			delete *it;
			it = this->spells.erase(it);
			return ;
		}
	}
}

void Warlock::launchSpell(std::string name, ATarget &target)
{
	std::vector<ASpell*>::iterator it = this->spells.begin();
	for(; it != this->spells.end(); it++)
	{
		if (name == (*it)->getName())
		{
			(*it)->launch(target);
			return;
		}
	}
}
