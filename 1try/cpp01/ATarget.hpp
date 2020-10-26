#ifndef ATARGET_HPP
# define ATARGET_HPP

# include <iostream>
# include "ASpell.hpp"

class ASpell;

class ATarget
{
	private:
		std::string type;

	public:
		ATarget();
		ATarget(std::string const &type);
		ATarget(ATarget const &ref);
		ATarget &operator=(ATarget const &ref);
		virtual ~ATarget();

		std::string const &getType() const;

		void	getHitBySpell(ASpell &spell);

		virtual ATarget *clone() const = 0;
};

#endif
