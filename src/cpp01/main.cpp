#include "Dummy.hpp"
#include "Fwoosh.hpp"
#include "Warlock.hpp"

int main(void)
{
	Warlock w("Steven", "kim");

	w.introduce();

	Fwoosh *f = new Fwoosh();
	Dummy d;

	w.learnSpell(f);
	w.launchSpell("Fwoosh", d);

	w.forgetSpell("Fwoosh");
	w.launchSpell("Fwoosh", d);

}
