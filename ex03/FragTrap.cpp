#include "FragTrap.hpp"
#include "ClapTrap.hpp"

FragTrap::FragTrap() : ClapTrap() {
  std::cout << "FragTrap Is ready to play" << std::endl;
  this->hitPoints = 100;
  this->energyPoints = 100;
  this->attackDamage = 30;
}

FragTrap::~FragTrap() {
  std::cout << RED << "FragTrap " << this->name << " is out of service 💀"
            << RESET << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name) {
  std::cout << "FragTrap " << name << " Is ready to play" << std::endl;
  this->hitPoints = 100;
  this->energyPoints = 100;
  this->attackDamage = 30;
}

// copy constructor
FragTrap::FragTrap(const FragTrap &other) : ClapTrap(other) { *this = other; }

// copy assignment constructor
FragTrap &FragTrap::operator=(const FragTrap &other) {
  if (this != &other) {
    this->name = other.name;
    this->hitPoints = other.hitPoints;
    this->energyPoints = other.energyPoints;
    this->attackDamage = other.attackDamage;
  }
  return *this;
}

void FragTrap::attack(const std::string &target) {
  if (this->energyPoints <= 0 || this->hitPoints <= 0) {
    std::cout << "FragTrap Cant attack any more, It should be Repaired" << RED
              << this->name << std::endl;
    return;
  }
  std::cout << GREEN << "FragTrap " << this->name << " attacks " << target
            << ", causing " << this->attackDamage << " points of damage."
            << RESET << std::endl;
  this->energyPoints--;
}

void FragTrap::highFivesGuys() {
  std::cout << GREEN << "FragTrap high fives mode." << RESET << std::endl;
}
