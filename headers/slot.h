#include "item.cpp"

/* Structure */
struct slot
{
public:
  /* Variables */
  item item;
  unsigned int quantity;
  unsigned int max;

  /* Constructors */
  slot();
  slot(item item);
  slot(item item, unsigned int max);
  slot(item item, unsigned int quantity, unsigned int max);
};
