#include <persona/attribute.h>
#include <stdexcept>
#include <string>

using namespace std;

class Attributes {

private:
  int available_points_;
  int total_points_;

  string elements_[42] = {
      "physical",       "emotional",     "intelectual",  "intelligence",
      "reasoning",      "logic",         "intuition",    "perception",
      "guile",          "improvization", "organization", "creativity",
      "focus",          "percision",     "decisiveness", "alertness",
      "neuroticism",    "control",       "extraversion", "independence",
      "idealism",       "happiness",     "hope",         "sadness",
      "anger",          "fear",          "shame",        "curiosity",
      "compassion",     "agility",       "endurance",    "reflexes",
      "speed",          "power",         "strength",     "constitution",
      "attractiveness", "physique",      "grace",        "coordination",
      "quickness",      "endowment"};

  Attribute **table_;
  int HashFunction(int key);
  void Insert(int key, string name);
  Attribute *SearchKey(int key);
  Attribute *SearchName(string name);

public:
  Attributes();
  ~Attributes();

  int values();
  string names();

  void init();
  void set_name(string name, int val);
  void set_key(int key, int val);
  int attribute_name(string name);
  int attribute_key(int key);
};
