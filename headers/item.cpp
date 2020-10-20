#include "item.h"
#include <cstring>

item::item(unsigned int id, char name[16], char displayname[16])
{
  this->id = id;
  memcpy(this->name, name, 16);
  memcpy(this->displayname, displayname, 16);
}
