#include <persona/attribute.h>

Attribute::Attribute(string name, int key) {
  this->key_ = key;
  this->name_ = name;
  this->value_ = 0;
}

int Attribute::getValue() { return this->value_; }
void Attribute::setValue(int value) { this->value_ = value; }

string Attribute::getName() { return this->name_; }
