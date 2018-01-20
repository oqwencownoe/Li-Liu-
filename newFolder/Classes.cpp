#include <iostream>

using namespace std;

class NewClass
{
public:
  void functionOne()
  {
    cout << "a" <<endl;
  }

  void functionTwo()
  {
    cout << "b" <<endl;
  }

private:
  void functionThree()
  {
  	cout << "c" <<endl;
  }
};

int main()
{
  NewClass NewObject;
  NewObject.functionOne();
  NewObject.functionTwo();
}
