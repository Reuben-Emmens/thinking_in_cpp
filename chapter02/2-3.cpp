/* 
  Create a program that opens a file and counts 
  the whitespace-separated words in that file.
*/ 
#include <fstream>
#include <iostream>

using namespace std;

int main() {

  ifstream infile("words_alpha.txt");
  string s;
  int count = 0;

  while(infile >> s) {
    ++count;
  } 

  cout << "Total number of words in file: " << count << endl;

  return 0;
}