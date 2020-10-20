struct item
{
public:
  unsigned int id;
  char name[16];
  char displayname[16];
  char description[250];

  item(unsigned int id, char name[], char displayname[]);
  item(unsigned int id, char name[], char displayname[], char description[]);
};
