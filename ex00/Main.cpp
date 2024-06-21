#include "ClapTrap.hpp"

int main() {
	ClapTrap	David("David");
	ClapTrap	Cesar("Cesar");

	David.attack("Cesar");
	Cesar.takeDamage(David.getDp());
	Cesar.beRepaired(David.getDp());

	Cesar.setDp(3);
	Cesar.attack("David");
	David.takeDamage(Cesar.getDp());
	Cesar.setDp(8);
	Cesar.attack("David");
	David.takeDamage(Cesar.getDp());

	return 0;
}