#include "Warlock.hpp"

Warlock::Warlock(std::string const &name, std::string const &title)
	: name(name), title(title)
{
	std::cout << this->name << ": What a boring day." << std::endl;
}

Warlock::~Warlock()
{
	std::cout << this->name << ": My job here is done!" << std::endl;
}

std::string const &Warlock::getName() const
{
	return (this->name);
}

std::string const &Warlock::getTitle() const
{
	return (this->title);
}

void Warlock::setTitle(std::string const &title)
{
	this->title = title;
}

void Warlock::introduce() const
{
	std::cout << this->name << ": My name is " << this->name << ", " << this->title << "!" <<  std::endl;
}

void Warlock::learnSpell(ASpell *spell)
{
	spellbook.learnSpell(spell);
}

void Warlock::forgetSpell(std::string const &spell_name)
{
	spellbook.forgetSpell(spell_name);
}

void Warlock::launchSpell(std::string const &spell_name, ATarget const &target)
{
	ASpell* spell = spellbook.generateSpell(spell_name);
	if (spell)
		spell->launch(target);
}
