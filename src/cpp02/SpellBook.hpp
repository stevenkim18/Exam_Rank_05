#ifndef SPELLBOOK_HPP
# define SPELLBOOK_HPP

# include "ASpell.hpp"
# include <vector>

class SpellBook
{
	private:
		std::vector<ASpell*> spells;
		
		SpellBook(SpellBook const &ref);
		SpellBook& operator=(SpellBook const &ref);

	public:
		SpellBook();
		virtual ~SpellBook();

		void learnSpell(ASpell *spell);
		void forgetSpell(std::string const &spell_name);
		ASpell *generateSpell(std::string const &spell_name);
};

#endif
