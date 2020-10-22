#include "page.h"

/* Constructors */
page::page()
{
  for(int i = 0; i < 20; i++)
  {
    contents[i] = empty;
  }
}
