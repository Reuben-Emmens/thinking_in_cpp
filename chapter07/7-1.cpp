// Create a Text class that contains a string object to hold the text of a 
// file. Give it two constructors: a default constructor and a constructor that
// takes a string argument that is the name of the file to open. When the 
// second constructor is used, open the file and read the contents into the 
// string member object. Add a member function contents( ) to return the string
// so (for example) it can be printed. In main( ), open a file using Text and 
// print the contents.

#include <string>
#include <fstream>
#include <iostream>

using namespace std;

                        // ==========
                        // class Text
                        // ==========

class Text {

  private:
    // DATA
    string txt;
        // String attribute to hold the text of a file.

  public:
    // CREATORS
    Text();
        // Create a 'Text' object.
    explicit
    Text(const string& filename);
        // Create a 'Text' object with a specified file name to open and
        // read the contents into the txt attribute.
    ~Text();
        // Destroy this object.

    // ACCESSORS
    string text() const;
        // Return the txt attribute of this object as a string.
};

// CREATORS
Text::Text() { }

Text::Text(const string& filename) 
{
  ifstream infile(filename.c_str()); 
  txt = string(istreambuf_iterator<char>(infile), istreambuf_iterator<char>());
}

Text::~Text() { }

// ACCESSORS 
string Text::text() const
{
  return txt;
}

int main()
{
  Text t("some_text.txt");
  cout << t.text() << endl;
  return 0;
}