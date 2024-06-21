#include "FragTrap.hpp"


int main() {
	FragTrap	david("David");
	FragTrap	cesar("Cesar");
	FragTrap	copia = david;

	david.attack("Cesar");
	cesar.attack("David");
	copia.attack("Cesar");
	david.highFivesGuys();
	cesar.highFivesGuys();
	copia.highFivesGuys();
}