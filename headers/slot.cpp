#include "slot.h"

slot::slot()
{
  this->item = empty;
  this->quantity = 0;
  this->max = 100;
};

slot::slot(item item)
{
  this->item = item;
  this->quantity = 100;
  this->max = 100;
};

slot::slot(unsigned int max)
{
  this->item = empty;
  this->quantity = 0;
  this->max = max;
};

slot::slot(item item, unsigned int quantity, unsigned int max)
{
  this->item = item;
  this->quantity = quantity;
  this->max = max;
};
