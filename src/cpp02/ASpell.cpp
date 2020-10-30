#include "ASpell.hpp"

ASpell::ASpell(std::string const &name, std::string const &effects)
	: name(name), effects(effects)
{
}

ASpell::ASpell(ASpell const &ref)
	: name(ref.getName()), effects(ref.getEffects())
{
}

ASpell& ASpell::operator=(ASpell const &ref)
{
	this->name = ref.getName();
	this->effects = ref.getEffects();
	return (*this);
}

ASpell::~ASpell()
{
}

std::string const &ASpell::getName() const
{
	return this->name;
}

std::string const &ASpell::getEffects() const
{
	return this->effects;
}

void ASpell::launch(ATarget const &target) 
{
	target.getHitBySpell(*this);
}

