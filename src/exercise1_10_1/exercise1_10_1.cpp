#include <iostream>
#include <fstream>

using namespace std;
int main()
{
  int age;
  cout << "How old are you?" << endl;
  cin >> age;
  cout << "your age is : " << age << endl;

  ofstream fitness_club_member_file("fitness_club_member.txt");
  fitness_club_member_file << age << endl;

}
