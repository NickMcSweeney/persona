#include <string>

using namespace std;

class Attribute {
public:
  Attribute(string name, int key);

  int key_;

  int getValue();
  string getName();
  void setValue(int value);

private:
  string name_;
  int value_;
};
