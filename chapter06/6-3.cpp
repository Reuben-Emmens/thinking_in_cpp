// Modify Exercise 2 so that the class contains an int member. Modify the 
// constructor so that it takes an int argument that it stores in the class 
// member. Both the constructor and destructor should print out the int value
// as part of their message, so you can see the objects as they are created and
// destroyed.

#include <iostream>

using namespace std;

                        // ============
                        // class Simple
                        // ============
class Simple {

  private:
    // DATA 
    int n;

  public:
    // CREATORS
    explicit
    Simple(const int n);
        // Create a 'Simple' object having the specified 'n' attribute value.

    ~Simple();
        // Destroy this object.

};

// CREATORS
Simple::Simple(const int n): n(n)
{
  cout << "Creating a Simple object with attribute n = " << n << endl;
}

Simple::~Simple()
{
  cout << "Destroying a Simple object with attribute n = " << n << endl;
}

// MAIN 
int main()
{
  {
    Simple s(5);  // Constructor called automatically here.
  }               // Destructor called automatically here.

  {
    Simple s(13);  // Constructor called automatically here.
  }                // Destructor called automatically here.
 
  return 0;
}