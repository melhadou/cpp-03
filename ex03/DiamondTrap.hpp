#pragma once
#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap {
private:
  std::string _name;

public:
  DiamondTrap();
  DiamondTrap(std::string name);
  DiamondTrap(const DiamondTrap &rhs);
  DiamondTrap &operator=(const DiamondTrap &rhs);
  ~DiamondTrap();

  using ScavTrap::attack;
  void whoAmI();
};
