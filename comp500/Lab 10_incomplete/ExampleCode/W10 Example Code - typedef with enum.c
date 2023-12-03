#include <stdio.h>

typedef enum tagSuperHero
{
  SUPERMAN,
  BATMAN,
  WONDER_WOMAN,
  THE_FLASH,
  AQUAMAN
} SuperHero;

void print_super_hero(SuperHero to_print)
{
  switch (to_print)
  {
  case SUPERMAN:
    printf("Superman\n");
    break;
  case BATMAN:
    printf("Batman\n");
    break;
  case WONDER_WOMAN:
    printf("Wonder Woman\n");
    break;
  case THE_FLASH:
    printf("The Flash\n");
    break;
  case AQUAMAN:
    printf("Aquaman\n");
    break;
  }
}

int main(void)
{
  SuperHero my_favourite = BATMAN;
  print_super_hero(my_favourite);
  
  return 0;
}