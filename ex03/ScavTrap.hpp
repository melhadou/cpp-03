#pragma once
#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap {
public:
  ScavTrap();
  ScavTrap(std::string name);
  ScavTrap(const ScavTrap &rhs);
  ScavTrap &operator=(const ScavTrap &rhs);
  ~ScavTrap();

  void attack(const std::string &target);
  void guardGate();
};
