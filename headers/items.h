// Item structure
struct item
{
  unsigned int id;
  char[] namespace;
  char[] displayname;
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
  
};
