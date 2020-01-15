#include <persona/attribute.h>
#include <string>

using namespace std;

class Attributes {

private:
  int available_points_;
  int total_points_;

  // CORE
  Attribute physical_;
  Attribute emotional_;
  Attribute intelectual_;
  // INTELECTUAL
  Attribute intelligence_;
  Attribute reasoning_;
  Attribute logic_;
  Attribute intuition_;
  Attribute perception_;
  Attribute guile_;
  Attribute improvization_;
  Attribute organization_;
  Attribute creativity_;
  Attribute focus_;
  Attribute percision_;
  Attribute decisiveness_;
  Attribute alertness_;
  // EMOTIONAL
  Attribute neuroticism_;
  Attribute control_;
  Attribute extraversion_;
  Attribute independence_;
  Attribute idealism_;
  Attribute happiness_;
  Attribute hope_;
  Attribute sadness_;
  Attribute anger_;
  Attribute fear_;
  Attribute shame_;
  Attribute curiosity_;
  Attribute compassion_;
  // PHYSICAL
  Attribute agility_;
  Attribute endurance_;
  Attribute reflexes_;
  Attribute speed_;
  Attribute power_;
  Attribute strength_;
  Attribute constitution_;
  Attribute attractiveness_;
  Attribute physique_;
  Attribute grace_;
  Attribute coordination_;
  Attribute quickness_;
  Attribute endowment_;

  std::string elements_[42] = {
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

public:
  Attributes();
  ~Attributes();

  int getAttributeValues();
  string getAttributeNames();

  void setAttribute(string name, int val);
  int lookupAttribute(string name);
};
