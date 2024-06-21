#include "DiamondTrap.hpp"

int main() {

	DiamondTrap david("david");
	DiamondTrap cdavid = david;

	david.attack("pepe");
	cdavid.whoAmI();
}