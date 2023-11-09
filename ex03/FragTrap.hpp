#pragma once
#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap {
public:
  FragTrap();
  FragTrap(std::string name);
  FragTrap(const FragTrap &rhs);
  FragTrap &operator=(const FragTrap &rhs);
  ~FragTrap();

  void attack(const std::string &target);
  void highFivesGuys(void);
};
