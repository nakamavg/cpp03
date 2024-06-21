#include "ScavTrap.hpp"

int main() {

	ScavTrap	c1("makelele");
	ScavTrap	c2("loulogio");
	ScavTrap	c3 = c1;

	c1.attack("loulogio");
	c2.attack("makelele");
	c3.attack("loulogio");
	c1.guardGate();
	c2.guardGate();
	c3.guardGate();
}