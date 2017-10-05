// Dynamically create pieces of storage of the following types, 
// using new: int, long, an array of 100 chars, an array of 100 floats. 
// Print the addresses of these and then free the storage using delete.
#include <iostream>

using namespace std;

int main()
{
  int* intPtr = new int;

  long* longPtr = new long;

  char* charArrPtr = new char[100];

  float* floatArrPtr = new float[100];

  cout << "intPtr points to address: " << intPtr << endl;
  
  cout << "longPtr points to address: " << longPtr << endl;

  // The cout operator is overloaded to print the string given a pointer to the first
  // char in a character array, so we have to cast it as a pointer to another type 
  cout << "charArrPtr points to address: " << (void*)charArrPtr << endl;
  
  cout << "floatArrPtr points to address: " << floatArrPtr << endl;

  // free the storage
  delete intPtr;
  delete longPtr;
  delete[] charArrPtr;
  delete[] floatArrPtr; 

  return 0;
}