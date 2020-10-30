#include "ATarget.hpp"

ATarget::ATarget(std::string const &type)
	:type(type)
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
	return (this->type);
}

void ATarget::getHitBySpell(ASpell const &spell) const
{
	std::cout << this->type << " has been " << spell.getEffects() << std::endl;
}
