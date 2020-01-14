#include <iostream>
#include <stdlib.h>
#include <string>

#include <persona/attributes.h>
#include <persona/core.h>

using namespace std;

class Persona {
private:
  // Variables
  Core core_;
  Attributes attributes_;

  // Create a new character

  // Load an old character
public:
  // Constructor
  Persona() {
    this->core_ = Core();
    this->attributes_ = Attributes();
  }

  void init() {}

  string name() {
    this->core_.setName("greg");
    return this->core_.getName();
  }

  void run() {
    // do things
  }
};

int main() {
  // welcome
  cout << "starting up persona...";
  Persona character = Persona();
  character.init();
  string n = character.name();
  cout << "hi my name is: " << n << "\n";

  character.run();
}
