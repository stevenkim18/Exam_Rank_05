#ifndef ATARGET_HPP
# define ATARGET_HPP

# include <iostream>
# include "ASpell.hpp"

class ASpell;

class ATarget
{
	private:
		std::string type;
		
		ATarget();

	public:
		ATarget(std::string const &target);
		ATarget(ATarget const &ref);
		ATarget& operator=(ATarget const &ref);
		virtual ~ATarget();

		std::string const &getType() const;

		void getHitBySpell(ASpell const &spell) const;

		virtual ATarget *clone() const = 0;
};

#endif
