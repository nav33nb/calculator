#include<iostream>

using namespace std;

int add(int num1, int num2)
{
  return (num1+num2);
}

int main()
{
  fint num1,num2;
  cout << "Calculator" << endl;
  cout << "Enter two numbers" <<endl;

  cout << "num1 : ";
  cin >> num1;
  cout << "num2 : ";
  cin >> num2;

  cout << "Result : " << add(num1,num2) << endl;

}
