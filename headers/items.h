// Item structure
struct item
{
  unsigned int id;
  char[] namespace;
  char[] displayname;
  char[] definition;
};

// All items
<<<<<<< Updated upstream
const item toilet_paper = {
  0,
  "toilet_paper",
  "Toilet Paper"
=======
const item empty = {
  0,
  "empty",
  "Empty",
  "Literally nothing."
};

const item toilet_paper = {
  1,
  "toilet_paper",
  "Toilet Paper",
  "Average toilet paper roll with each of the 1,000 2 ply sheets having a size of 3.7in(9.4cm) x 4.1in(10cm)."
>>>>>>> Stashed changes
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
<<<<<<< Updated upstream
  
=======
  unsigned int width;
  unsigned int height;
  item_slot slot[][];
>>>>>>> Stashed changes
};
