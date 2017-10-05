// Create a Message class with a constructor that takes a single string with a
// default value. Create a private member string, and in the constructor simply
// assign the argument string to your internal string. Create two overloaded 
// member functions called print( ): one that takes no arguments and simply
// prints the message stored in the object, and one that takes a string 
// argument, which it prints in addition to the internal message. Does it make
// sense to use this approach instead of the one used for the constructor?
#include <string>
#include <iostream>

using namespace std;

                        // =============
                        // class Message
                        // =============

class Message {

  private:
    // DATA
    string msg;

  public: 
    // CREATORS
    explicit
    Message(const string& message="Hello"); 
        // Create a 'Message' object with a specified 'msg' attribute.
    
    // ACCESSORS 
    void print()                const;
        // Prints the 'msg' attribute.
    void print(const string& s) const;
        // Prints the 'msg' attrubute followed by a whitespace and the 
        // supplied string.
};

// CREATORS
Message::Message(const string& message): msg(message) { }

// ACCESSORS
void Message::print() const
{
  cout << msg << endl; 
}

void Message::print(const string& s) const
{
  cout << msg << " " << s << endl; 
}


int main()
{
  Message m;
  m.print();
  m.print("friend");

  return 0;
}


