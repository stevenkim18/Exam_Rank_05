#include "ATarget.hpp"

ATarget::ATarget()
	: type()
{
}

ATarget::ATarget(std::string const &type)
	: type(type)
{
}

ATarget::ATarget(ATarget const &ref)
	: type(ref.getType())
{
}

ATarget& ATarget::operator=(ATarget const &ref)
{
	this->type = ref.getType();
	return (*this);
}

ATarget::~ATarget()
{
}

std::string const &ATarget::getType() const
{
	return this->type;
}

void ATarget::getHitBySpell(ASpell &spell)
{
	std::cout << this->type << " has been " << spell.getEffects() << std::endl;
}

