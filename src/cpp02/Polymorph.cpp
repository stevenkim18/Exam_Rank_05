#include "Polymorph.hpp"

Polymorph::Polymorph()
	: ASpell("Polymorph", "turned to a sheep")
{
}

Polymorph::~Polymorph()
{
}

ASpell* Polymorph::clone() const
{
	return (new Polymorph(*this));
}
