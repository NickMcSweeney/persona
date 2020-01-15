#include <persona/attributes.h>

Attributes::Attributes() {
  for (int i = 0; i < 42; i++) {
    string elem = this->elements_[i];
  }
}
Attributes::~Attributes() {}
