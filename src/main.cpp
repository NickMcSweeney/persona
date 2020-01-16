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

public:
  // Constructor
  Persona() { this->attributes_.init(); }

  void init() {}

  void run() {
    // do things
    int value = this->attributes_.attribute_name("intelectual");
    cout << "intelectual: " << value << "\n";

    this->attributes_.set_key(0, 10);
    cout << "set physical\n";

    int value1 = this->attributes_.attribute_key(0);
    int value2 = this->attributes_.attribute_name("emotional");
    cout << "physical: " << value1;
    cout << "emotional: " << value2;
  }
};

int main() {
  // welcome
  cout << "starting up persona...\n";
  Persona character = Persona();
  // character.init();
  cout << "character initialized!\n";

  character.run();
}
