#include <iostream>
#include <string>

// Project 1 — Jaylen Chae
// CIS 5 Week 04 · Student card
  using std::cout;
  using std::cin;
  using std::string;
  using std:: endl;
int main() {
  const int CURRENT_YEAR = 2026;

  // TODO (week 3): declare and initialize the four boxes
  //   first (std::string), age (int), credits (int), gpa (double)
  string name;
  int age;
  int credits;
  double gpa;

  cout << "Hello and what is your name?" << endl;
  cin >> name;
  cout <<  "How old are you?" << endl; 
  cin >> age;
  cout << "How many units are you taking currently?" << endl;
  cin >> credits;
  cout << "What is your current gpa" << endl;
 cin >> gpa;
 
  int credits_left = 60 - credits;

  cout << "---Student Card---" << endl;
  cout << "Name: " << name << endl;
  cout << "Age: " << age << endl;
  cout << "Current Units enrolled: " << credits << endl;
  cout << "Current GPA: " << gpa << endl;
  cout << "Units Remaining: " << credits_left << endl;

  return 0;
}
 