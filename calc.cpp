#include<iostream>

using namespace std;

//FUNCTION TO MULTIPLY
int mul(int num1,int num2){
  int mul = num1*num2;
  return (mul);
}

int sub(int num1,int num2){
  cout << "This is sub" << endl;
  return (num1-num2);
}

//FUNCTION TO ADD
int add(int num1, int num2){
  int sum=num1+num2;
  return (sum);
}

int main(){
  int num1,num2;
  cout << "Calculator" << endl;
  cout << "Enter two numbers" <<endl;

  cout << "num1 : ";
  cin >> num1;
  cout << "num2 : ";
  cin >> num2;

  cout << "Result Addition       : " << add(num1,num2) << endl;
  cout << "Result Subtraction    : " << sub(num1,num2) << endl;
  cout << "Result Multiplication : " << mul(num1,num2) << endl;
}
