#include "ClapTrap.hpp"

int main(void) {

  ClapTrap fread("fread");

  fread.attack("said");
  fread.takeDamage(200);
  fread.takeDamage(5);
  fread.beRepaired(109);
  fread.takeDamage(4);
  fread.takeDamage(200);

  return 0;
}
