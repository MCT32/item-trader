#include "item.h"
#include <cstring>

item::item(unsigned int id, char name[], char displayname[])
{
  this->id = id;
  memcpy(this->name, name, 16);
  memcpy(this->displayname, displayname, 16);
}

item::item(unsigned int id, char name[], char displayname[], char description[])
{
  this->id = id;
  memcpy(this->name, name, 16);
  memcpy(this->displayname, displayname, 16);
  memcpy(this->description, description, 250);
}
