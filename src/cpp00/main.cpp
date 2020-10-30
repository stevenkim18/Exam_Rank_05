#include "Warlock.hpp"

int main(void)
{
	Warlock w("Steven", "Kim");
	w.introduce();

	w.setTitle("Song");
	w.introduce();

	std::cout << "name: " << w.getName() << " title: " << w.getTitle() << std::endl;
}	
