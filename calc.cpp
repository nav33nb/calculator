#include<iostream>

using namespace std;

int sub(int num1,int num2){
  return (num1-num2);
}

int add(int num1, int num2)
{
  int sum=num1+num2;
  return (sum);
}

int Multiply_Function (int num1, int num2)
{
  //This is the Multiply Function
  return (num1*num2);
}

int main()
{
  int num1,num2;
  cout << "Calculator" << endl;
  cout << "Enter two numbers" <<endl;

  cout << "num1 : ";
  cin >> num1;
  cout << "num2 : ";
  cin >> num2;

  cout << "Result Addition    : " << add(num1,num2) << endl;
  cout << "Result Subtraction : " << sub(num1,num2) << endl;

}
