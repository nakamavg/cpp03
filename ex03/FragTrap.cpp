#include "FragTrap.hpp"
#define YELLOW "\033[1;33m"
#define RESET_COLOR "\033[0m"

FragTrap::FragTrap( void )
	: ClapTrap() {
		std::cout << YELLOW <<"FragTrap default constructor for " << this->name << RESET_COLOR << std::endl;
}

FragTrap::FragTrap(std::string name)
	: ClapTrap(name) {
		this->hp = 100;
		this->ep = 100;
		this->dp = 30;
		std::cout << YELLOW <<"FragTrap with arg constructor for " << this->name << RESET_COLOR << std::endl;
}

FragTrap::FragTrap(const FragTrap &src) {
	std::cout << YELLOW <<"FragTrap copy constructor called"<<RESET_COLOR << std::endl;
	*this = src;
}

FragTrap &FragTrap::operator=(const FragTrap &src) {
	std::cout << YELLOW <<"FragTrap copy constructor operator called"<<RESET_COLOR << std::endl;
	if (this == &src)
		return (*this);
	this->name = src.name;
	this->hp = src.hp;
	this->ep = src.ep;
	this->dp = src.dp;
	
	return (*this);
}

FragTrap::~FragTrap( void ) {
		std::cout << YELLOW <<"FragTrap deconstructor for " << this->name << RESET_COLOR << std::endl;
}

void	FragTrap::attack(const std::string &target) {
	if (this->hp <= 0) {
		std::cout << "FragTrap " << this->name << " dead" << std::endl;
		return ;
	}
	if (this->ep < 1) {
		std::cout << "FragTrap " << this->name << "cannot attack; insufficient energy!" << std::endl;
		return ;
	}
	std::cout << "FragTrap " << this->name << " attacks " << target << ", causing " << this->dp << " points of damage!" << std::endl;
	this->ep -= 1;
}

void FragTrap::highFivesGuys(void) {
	std::cout << "High five bro" << std::endl;
}