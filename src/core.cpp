#include <persona/core.h>

// Constructor
Core::Core() {}

// Destructor
Core::~Core() {}

// Methods
void Core::setName(string name) { this->name_ = name; }
string Core::getName() { return this->name_; }
