// (7-4a) Create a class that contains four member functions, with 0, 1, 2, and
// 3 int arguments, respectively. Create a main( ) that makes an object of your
// class and calls each of the member functions. 

// (7-4b) Now modify the class so it has instead a single member function with 
// all the arguments defaulted. Does this change your main( )?
#include <iostream>

using namespace std;
                        // ====================
                        // class DefaultExample
                        // ====================

class DefaultExample {

  private:
    // DATA 
    int aInt;
    int bInt;
    int cInt;

  public: 
    // CREATORS
    DefaultExample();
        // Create a 'DefaultExample' object. 

    // MANIPULATORS
    void setInt(int a = 0, int b = 0, int c = 0);
        // Set the values of the 'aInt', 'bInt', and 'cInt' attributes to the
        // specified 'a', 'b', and 'c'.

    // ACCESSSORS 
    void print() const;
        // Print the 'aInt', 'bInt', and 'cInt' attributes seperated by spaces.
};

// CREATORS 
DefaultExample::DefaultExample(): aInt(0), bInt(0), cInt(0) { }

// MANIPULATORS
void DefaultExample::setInt(int a, int b, int c)
{
  aInt = a;
  bInt = b;
  cInt = c;
}

// ACCESSORS
void DefaultExample::print() const
{
  cout << aInt << " " << bInt << " " << cInt << endl;
}


int main()  
{
  // We have replaced 4 overloaded functions with a single function with 
  // default parameters. The main() program function remains the same.

  DefaultExample d;
  
  d.setInt();
  d.print();
  
  d.setInt(1);
  d.print();

  d.setInt(1, 2);
  d.print();

  d.setInt(1, 2, 3);
  d.print();

  return 0;
}