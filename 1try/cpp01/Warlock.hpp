#ifndef WARLOCK_HPP
# define WARLOCK_HPP

# include <iostream>
# include <vector>
# include "ATarget.hpp"
# include "ASpell.hpp"

class Warlock
{
	private:
		std::string name;
		std::string title;
		std::vector<ASpell*> spells;

		Warlock();
		Warlock(Warlock const &ref);
		Warlock &operator= (Warlock const &ref);

	public:
		Warlock(std::string const &name, std::string const &title);
		virtual ~Warlock();

		std::string const &getName() const;
		std::string const &getTitle() const;
		
		void	setTitle(std::string const &title);

		void 	introduce() const;

		void	learnSpell(ASpell *spell);
		void	forgetSpell(std::string name);
		void	launchSpell(std::string name, ATarget &target);
};

#endif
