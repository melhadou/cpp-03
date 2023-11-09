#include "FragTrap.hpp"

int main(void) {

  FragTrap fread("fread");

  fread.attack("said");
  fread.takeDamage(10);
  fread.takeDamage(5);
  fread.beRepaired(109);
  fread.takeDamage(4);
  fread.takeDamage(100);
  fread.takeDamage(10);

  fread.highFivesGuys();

  return 0;
}
