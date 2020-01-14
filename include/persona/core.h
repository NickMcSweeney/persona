#include <string>

using namespace std;

class Core {
private:
  string name_;

public:
  Core();
  ~Core();

  void setName(string name);
  string getName();
};
