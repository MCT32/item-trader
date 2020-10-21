#include "slot.cpp"

/* Structure */
struct inventory
{
public:
  /* Variables */
  slot slots[4][5];

  /* Constructors */
  inventory();
  inventory(unsigned int max);
}
