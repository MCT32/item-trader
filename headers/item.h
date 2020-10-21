/* Structure */
struct item
{
public:
  /* Variables */
  unsigned int id;
  char name[16];
  char displayname[16];
  char description[250];

  /* Constructors */
  item(unsigned int id, const char name[], const char displayname[]);
  item(unsigned int id, const char name[], const char displayname[], const char description[]);
};

/* Items */
const item empty(0, "empty", "Empty");
