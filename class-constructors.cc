/*
* Name: Aaron McKenna
* Date: Today
* Program: class-constructors.cc
* Details: Just a test of how classes and constructors work
*/

#include <cstdlib>
#include <iomanip>
#include <iostream>
#include <vector>
using namespace std;

class Construct {
public:
  // Default Constructor
  Construct();
  // Getters
  int getOnt();
  string getStrong();
  double getDoublee();
  bool getBeel();

  // Setters
  int setOnt(int newOnt);
  string setStrong(string newStrong);
  double setDoublee(double newDoublee);
  bool setBeel(bool newBeel);

  // Helper Functions
  void print();

private:
  int ont;
  string strong;
  double doublee;
  bool beel;
};

int main(int argc, char const *argv[]) {
  Construct con;
  con.print();

  Construct fuoco;
  fuoco.setOnt(566);
  fuoco.setBeel(true);
  fuoco.print();
  fuoco.setDoublee(0);
  fuoco.setStrong("Unstrong");
}

// Functions
// Default Constructor
Construct::Construct() {
  ont = 0;
  strong = "N/A";
  doublee = -1.1;
  beel = false;
}

int Construct::getOnt() {
  return ont;
}

string Construct::getStrong() {
  return strong;
}

double Construct::getDoublee() {
  return doublee;
}

bool Construct::getBeel() {
  return beel;
}

int Construct::setOnt(int newOnt) {
  if (newOnt >= 0) {
    ont = newOnt;
  }
}

string Construct::setStrong(string newStrong) {
  strong = newStrong;
}

double Construct::setDoublee(double newDoublee) {
  if (newDoublee <= 0) {
    doublee = newDoublee;
  }
}

bool Construct::setBeel(bool newBeel) {
  beel = newBeel;
}

void Construct::print() {
  cout<<"Construct: "<<"(INT: "<<ont<<"| STRING: "<<strong<<"| DOUBLE: "<<doublee<<"| BOOL: "<<beel<<")"<<endl;
}
