#include <iostream>
#include <persona/attributes.h>
#include <stdlib.h>

const int table_space = 42;

Attributes::Attributes() {
  cout << "constructing attrubute data structure\n";
  this->table_ = new Attribute *[table_space];
  for (int i = 0; i < table_space; i++) {
    this->table_[i] = NULL;
  }
}
Attributes::~Attributes() {
  for (int i = 0; i < table_space; i++) {
    if (this->table_[i] != NULL) {
      delete this->table_[i];
    }
  }
  delete[] this->table_;
}

int Attributes::HashFunction(int key) { return key % table_space; }

void Attributes::init() {
  try {
    for (int i = 0; i < table_space; i++) {
      string elem = this->elements_[i];
      // cout << "attr[" << i << "]: " << elem << "\n";
      this->Insert(i, elem);
    }
  } catch (exception &e) {
    cout << "INITIALIZATION FAILED!";
  }
}

void Attributes::Insert(int key, string label) {
  int hash = this->HashFunction(key);

  while (this->table_[hash] != NULL && this->table_[hash]->key_ != key) {
    hash = this->HashFunction(hash + 1);
  }
  if (this->table_[hash] != NULL) {
    delete (this->table_[hash]);
  }
  this->table_[hash] = new Attribute(label, key);
}

Attribute *Attributes::SearchKey(int key) {
  int hash = this->HashFunction(key);
  while (this->table_[hash] != NULL && this->table_[hash]->key_ != key) {
    hash = this->HashFunction(hash + 1);
  }
  if (this->table_[hash] != NULL) {
    return this->table_[hash];
  }
  throw domain_error("key does not exist");
}

Attribute *Attributes::SearchName(string name) {
  int hash = this->HashFunction(0);
  while (this->table_[hash] != NULL && this->table_[hash]->getName() != name) {
    hash = this->HashFunction(hash + 1);
  }
  if (this->table_[hash] != NULL) {
    return this->table_[hash];
  }
  throw domain_error("name not found");
}

int Attributes::attribute_name(string name) {
  try {
    return this->SearchName(name)->getValue();
  } catch (const domain_error &e) {
    throw;
  }
}
int Attributes::attribute_key(int key) {
  try {
    return this->SearchKey(key)->getValue();
  } catch (const domain_error &e) {
    throw;
  }
}

void Attributes::set_name(string name, int value) {
  try {
    this->SearchName(name)->setValue(value);
  } catch (const domain_error &e) {
    throw;
  }
}
void Attributes::set_key(int key, int value) {
  try {
    this->SearchKey(key)->setValue(value);
  } catch (const domain_error &e) {
    throw;
  }
}
