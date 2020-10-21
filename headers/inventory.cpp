#include "inventory.h"

/* Constructors */
inventory::inventory()
{

};

inventory::inventory(unsigned int max)
{
  for(int i; i < 4; i++)
  {
    for(int j; j < 5; j++)
    {
      slots[i][j] = new slot();
    }
  }
};
