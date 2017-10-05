// Add a destructor to Exercise 1 that prints out a message to tell you that 
// it’s been called.

#include <iostream>

using namespace std;

                        // ============
                        // class Simple
                        // ============
class Simple {

  public:
    // CREATORS
    Simple();
        // Create a Simple object 

    ~Simple();
        // Destroy this object and deallocate memory

};

// CREATORS
Simple::Simple()
{
  cout << "Creating a Simple object." << endl;
}

Simple::~Simple()
{
  cout << "Destroying a Simple object." << endl;
}

// MAIN
int main()
{
  {
    Simple s;  // Constructor called automatically
  }            // Destructor called automatically

  return 0;
}