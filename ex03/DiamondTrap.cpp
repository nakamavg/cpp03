#include "DiamondTrap.hpp"
#define RESET   "\033[0m"
#define CYAN    "\033[1;36m"
DiamondTrap::DiamondTrap()
	: ScavTrap(), FragTrap(){
		FragTrap::hp = 100;
    	ScavTrap::ep = 50;
    	FragTrap::dp = 30;
		std::cout << CYAN << "DiamondTrap default constructor" << RESET << std::endl;
}

DiamondTrap::DiamondTrap(std::string name)
	: ClapTrap(name + " clap"), ScavTrap(name), FragTrap(name), name (name) {
		FragTrap::hp = 100;
    	ScavTrap::ep = 50;
    	FragTrap::dp = 30;
		std::cout << CYAN << "DiamondTrap " << this->name << " constructed" << RESET << std::endl;
} 

DiamondTrap::DiamondTrap(const DiamondTrap &src) {
	std::cout << CYAN << "DiamondTrap copy constructor called" << RESET << std::endl;
	*this = src;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &src) {
	std::cout << CYAN << "DiamondTrap copy assignment operator" << RESET << std::endl;
	if (this == &src)
		return (*this);
	this->ClapTrap::name = src.ClapTrap::name;
	this->ScavTrap::name = src.ScavTrap::name;
	this->FragTrap::name = src.FragTrap::name;
	this->name = src.name;
	return (*this);
}

DiamondTrap::~DiamondTrap() {
	std::cout << CYAN << "DiamondTrap " << this->name << " decostructed" << RESET << std::endl;
}

void	DiamondTrap::whoAmI(void) {
	std::cout << "Am I " << this->name << '?' << std::endl;
	std::cout << "Or am I " << ClapTrap::name << "?\nThought I was me." << std::endl;
}