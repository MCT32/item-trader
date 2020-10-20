// Item structure
struct item
{
  unsigned int id;
  char[] namespace;
  char[] displayname;
  char[] definition;
};

// All items
const item toilet_paper = {
  0,
  "toilet_paper",
  "Toilet Paper"
};

// Slot structure
struct item_slot
{
  item* item;
  unsigned int quantity;
  unsigned int max;
};

// Inventory structure
struct inventory
{
  unsigned int width;
  unsigned int height;
  item_slot slot[][];
};
