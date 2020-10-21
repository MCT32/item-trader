#include "item.h"
#include <cstring>

/* Constructors */
item::item(unsigned int id, const char name[], const char displayname[])
{
  this->id = id;
  memcpy(this->name, name, 16);
  memcpy(this->displayname, displayname, 16);
}

item::item(unsigned int id, const char name[], const char displayname[], const char description[])
{
  this->id = id;
  memcpy(this->name, name, 16);
  memcpy(this->displayname, displayname, 16);
  memcpy(this->description, description, 250);
}
