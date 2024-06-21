# cpp03

# Herencia

- Todo este modulo se basa en heredar clases dentro de otras

ClapTrap es la clase original y vamos heredando su clase para las cosas en comun de cada clase nueva

- El ejercicio 00 se basa en crear la clase 
principal

- El ejercicio 01 sobrescribir metodos como attack 
y usar la clase heredada dentro de la nueva
```c++
#include "ClapTrap.hpp"

class ScavTrap: public ClapTrap {
	public:
		ScavTrap( void );
		ScavTrap(std::string name);
		ScavTrap(const ScavTrap &src);
		ScavTrap& operator=(const ScavTrap &src);
		~ScavTrap( void );
		void attack (const std::string &target);
		void guardGate();
};
```

- el ejercicio 02 se basa en consolidad lo anterior
# ex03

## Problema del Diamante
El problema del diamante ocurre cuando una clase DiamondTrap hereda de dos clases (FragTrap y ScavTrap), y ambas a su vez heredan de una clase base común (ClapTrap). Sin herencia virtual, la estructura de herencia se ve así:

```plaintext
      ClapTrap
      /     \
  FragTrap  ScavTrap
      \     /
    DiamondTrap

```
Cuando se utiliza herencia virtual en las clases FragTrap y ScavTrap para heredar de ClapTrap, se garantiza que DiamondTrap, tenga una única instancia de ClapTrap.

