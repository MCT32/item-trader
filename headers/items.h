#include <string>

// Item structure
struct item
{
  // Variables
  static unsigned int id;
  static std::string name;
  static std::string displayname;
  static std::string definition;

  // Constructor
  item(unsigned int id_, std::string name_, std::string displayname_){};
};

// All items
const item empty = item
(
  unsigned(0),
  std::string("empty"),
  std::string("Empty")
);

const item toilet_paper = item
(
  1,
  "toilet_paper",
  "Toilet Paper"
);

// Slot structure
struct item_slot
{
  // Variables
  item item;
  unsigned int quantity;
  unsigned int max;

  // Constructor
  item_slot()
  {
    item = empty;
    quantity = 0;
    max = 100;
  };
};

// Inventory structure
struct inventory
{
  // Variables
  unsigned int width;
  unsigned int height;
  item_slot slot[0][0];

  // Constructor
};
