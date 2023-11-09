#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : name("Default") {
  std::cout << name << "ClapTrap Is ready to play" << std::endl;
  this->hitPoints = 10;
  this->energyPoints = 10;
  this->attackDamage = 0;
}

ClapTrap::ClapTrap(std::string name) : name(name) {
  std::cout << name << " Is ready to play" << std::endl;
  this->hitPoints = 10;
  this->energyPoints = 10;
  this->attackDamage = 0;
}

// copy constructor
ClapTrap::ClapTrap(const ClapTrap &other) {
  this->name = other.name;
  this->hitPoints = other.hitPoints;
  this->energyPoints = other.energyPoints;
  this->attackDamage = other.attackDamage;
}

// copy assignment constructor
ClapTrap &ClapTrap::operator=(const ClapTrap &other) {
  if (this != &other) {
    this->name = other.name;
    this->hitPoints = other.hitPoints;
    this->energyPoints = other.energyPoints;
    this->attackDamage = other.attackDamage;
  }
  return *this;
}

void ClapTrap::attack(const std::string &target) {
  if (this->energyPoints <= 0 || this->hitPoints <= 0) {
    std::cout << "ClapTrap Cant attack any more, It should be Repaired" << RED
              << this->name << std::endl;
    return;
  }
  std::cout << GREEN << "ClapTrap " << this->name << " attacks " << target
            << ", causing " << this->attackDamage << " points of damage."
            << RESET << std::endl;
  this->energyPoints--;
}

void ClapTrap::takeDamage(unsigned int amount) {
  if (amount >= this->hitPoints) {
    this->hitPoints = 0;
    std::cout << "ClapTrap Cant attack any more " << RED << this->name
              << " is out of service 💀" << RESET << std::endl;
    return;
  }
  std::cout << "ClapTrap " << RED << this->name << " takes damage " << amount
            << "." << RESET << std::endl;
  this->hitPoints -= amount;
}

void ClapTrap::beRepaired(unsigned int amount) {
  if (!this->energyPoints) {
    std::cout << RED << "ClapTrap Cant attack any more, " << this->name << RESET
              << std::endl;
    return;
  }
  std::cout << GREEN << "ClapTrap " << this->name << " is Repaired for "
            << amount << " Energy Points." << RESET << std::endl;
  this->energyPoints--;
  this->hitPoints += amount;
  return;
}

// destructor
ClapTrap::~ClapTrap() {
  std::cout << RED << "ClapTrap" << this->name << " Is out of service" << RESET
            << std::endl;
}
