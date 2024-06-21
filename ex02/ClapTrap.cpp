#include "ClapTrap.hpp"
#define COLOR_BLUE "\033[1;36m"
#define COLOR_RESET "\033[0m"

ClapTrap::ClapTrap( void )
    : name (" "), hp (10), ep(10), dp(0) {
}

ClapTrap::ClapTrap( std::string name )
    : name (name), hp (10), ep(10), dp(0) {
        std::cout << COLOR_BLUE << "ClapTrap " << this->name << " constructed" << COLOR_RESET << std::endl;
}

ClapTrap::~ClapTrap( void ) {
	std::cout << COLOR_BLUE << "ClapTrap " << this->name << " destructed" << COLOR_RESET << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &src) {
	std::cout << COLOR_BLUE << "ClapTrap copy " << this->name << " from ClapTrap " << src.name << COLOR_RESET << std::endl;
	*this = src;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &src) {
	std::cout << COLOR_BLUE << "Copy assignment called" <<COLOR_RESET << std::endl;
	if (this != &src) {
		this->name = src.name;
		this->hp = src.hp;
		this->ep = src.ep;
		this->dp = src.dp;
	}
	return (*this);
}

void ClapTrap::attack(const std::string& target)
 {
	if (this->hp == 0) 
	{
		std::cout << COLOR_BLUE << "ClapTrap " << this->name << "is dead" << COLOR_RESET << std::endl;
		return ;
	}

	if (this->ep < 1) 
	{
		std::cout << COLOR_BLUE << "ClapTrap " << this->name << " has not enough energy" << COLOR_RESET << std::endl;
		return ;
	}

	std::cout << COLOR_BLUE << "ClapTrap " << this->name << " attacks " << target << ", causing " << this->dp << " points of damage!" << COLOR_RESET << std::endl;
	this->ep -= 1;
}
void	ClapTrap::takeDamage(unsigned int amount) {
	std::cout << "ClapTrap " << this->name << " took " << amount << " damage!" << std::endl;
	this->hp -= amount;
	if (this->hp <= 0) {
		std::cout << "ClapTrap " << this->name << " dead" << std::endl;
		return ;
	}
}

void	ClapTrap::beRepaired(unsigned int amount) {
	if (this->hp <= 0) {
		std::cout << "ClapTrap " << this->name << " dead" << std::endl;
		return ;
	}
	if (this->ep > 0) {
		std::cout << "ClapTrap " << this->name << " restored " << amount << " health!" << std::endl;
		this->hp += amount;
	} else
		std::cout << "ClapTrap " << this->name << "cannot restore health; insufficient energy!" << std::endl;
}

void	ClapTrap::setDp(unsigned int amount) {
	this->dp = amount;
}

int	ClapTrap::getDp( void ) {
	return (this->dp);
}

int ClapTrap::getHp( void ) {
	return (this->hp);
}


