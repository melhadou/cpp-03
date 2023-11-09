#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap() {
  std::cout << "ScavTrap Is ready to play" << std::endl;
  this->hitPoints = 100;
  this->energyPoints = 50;
  this->attackDamage = 20;
}

ScavTrap::~ScavTrap() {
  std::cout << RED << "ScavTrap " << this->name << " is out of service 💀"
            << RESET << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
  std::cout << "ScavTrap " << name << " Is ready to play" << std::endl;
  this->hitPoints = 100;
  this->energyPoints = 50;
  this->attackDamage = 20;
}

// copy constructor
ScavTrap::ScavTrap(const ScavTrap &other) : ClapTrap(other) { *this = other; }

// copy assignment constructor
ScavTrap &ScavTrap::operator=(const ScavTrap &other) {
  if (this != &other) {
    this->name = other.name;
    this->hitPoints = other.hitPoints;
    this->energyPoints = other.energyPoints;
    this->attackDamage = other.attackDamage;
  }
  return *this;
}

void ScavTrap::attack(const std::string &target) {
  if (this->energyPoints <= 0 || this->hitPoints <= 0) {
    std::cout << "ScavTrap Cant attack any more, It should be Repaired" << RED
              << this->name << std::endl;
    return;
  }
  std::cout << GREEN << "ScavTrap " << this->name << " attacks " << target
            << ", causing " << this->attackDamage << " points of damage."
            << RESET << std::endl;
  this->energyPoints--;
}

void ScavTrap::guardGate() {
  std::cout << "ScavTrap is now in Gate keeper mode." << std::endl;
}
