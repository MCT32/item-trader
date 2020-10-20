/* Structure */
struct item
{
public:
  /* Variables */
  unsigned int id;
  char name[16];
  char displayname[16];
  char description[250];

private:
  /* Constructors */
  item(unsigned int id, char name[], char displayname[]);
  item(unsigned int id, char name[], char displayname[], char description[]);
};
