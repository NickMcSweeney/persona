#include <string>

class Attribute {
public:
  Attribute();
  int getValue();

private:
  std::string name;
  int value;
};
