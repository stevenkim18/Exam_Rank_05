#ifndef FWOOSH_HPP
# define FWOOSH_HPP

# include "ASpell.hpp"

class Fwoosh : public ASpell
{
	public:
		Fwoosh();
		virtual ~Fwoosh();
		
		ASpell *clone() const;
};

#endif
