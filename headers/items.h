// Item structure
struct item
{
  // Variables
  unsigned int id;
  char namespace[];
  char displayname[];
  char definition[];
};

// All items
const item empty =
{
  0,
  "empty",
  "Empty"
}

const item toilet_paper =
{
  1,
  "toilet_paper",
  "Toilet Paper"
};

// Slot structure
struct item_slot
{
  // Variables
  item* item;
  unsigned int quantity;
  unsigned int max;

  // Constructor
  item_slot()
  {
    item = &empty;
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
  item_slot slot[][];

  // Constructor
};
