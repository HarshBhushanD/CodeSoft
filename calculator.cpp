#include<iostream>
using namespace std;

int main()
{    
     cout<<"\n-----------Welcome to Calculator-----------\n"<<endl;
    int a,b;
    cout<<"enter the number on which the calculation to be performed ";
    cin>>a>>b;

    char op;
    cout<<"input the operator";
    cin>>op;
      
      switch(op)
      {
        case '+':
        cout<<a+b<<endl;
        break;
        case '-':
        cout<<a-b<<endl;
        break;    
        case '*':
        cout<<a*b<<endl;
        break;
        case '/':
        cout<<a/b<<endl;
        break;

        default:
        cout<<"enter another operator"<<endl;
        break;     
      }

       cout<<"Thanks for Use.Have a good day ahead.";
        return 0;
}