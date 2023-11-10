#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap("_clap_name"), ScavTrap(), FragTrap() {
  std::cout << "DiamondTrap Is ready to play" << std::endl;
  this->_name = "D_Default";
  this->hitPoints = FragTrap::hitPoints;
  this->energyPoints = ScavTrap::energyPoints;
  this->attackDamage = FragTrap::attackDamage;
}

DiamondTrap::DiamondTrap(std::string _name)
    : ClapTrap(_name + "_clap_name"), ScavTrap(_name), FragTrap(_name) {
  std::cout << "DiamondTrap Is ready to play" << std::endl;
  this->_name = _name;
  this->hitPoints = FragTrap::hitPoints;
  this->energyPoints = ScavTrap::energyPoints;
  this->attackDamage = FragTrap::attackDamage;
}

DiamondTrap::DiamondTrap(const DiamondTrap &other)
    : ClapTrap(other), ScavTrap(other), FragTrap(other) {
  *this = other;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &other) {
  if (this != &other) {
    this->name = other.name;
    this->hitPoints = other.hitPoints;
    this->energyPoints = other.energyPoints;
    this->attackDamage = other.attackDamage;
  }
  return *this;
}

void DiamondTrap::whoAmI() {
  std::cout << "My name is " << this->_name << " ClapTrap name is "
            << this->name << std::endl;
}

DiamondTrap::~DiamondTrap() {
  std::cout << RED << "DiamondTrap " << this->_name << " is out of service 💀"
            << RESET << std::endl;
}
