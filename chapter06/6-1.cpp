// Write a simple class called Simple with a constructor that prints something 
// to tell you that it’s been called. In main( ) make an object of your class.

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

};

// CREATORS 
Simple::Simple()
{
  cout << "Creating a Simple." << endl;
}

// MAIN
int main()
{
  Simple s;

  return 0;
}