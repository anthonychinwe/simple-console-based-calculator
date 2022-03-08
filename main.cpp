#include <iostream>

using namespace std;
void dOptions()
{
    cout<<"Please select an arithmetic operation by inputting a number \n";
    cout<<"1.Addition\n";
    cout<<"2.Subtraction\n";
    cout<<"3.Multiplication\n";
    cout<<"4.Division\n";
    cout<<"5.Exit\n";

}
float addNum(float a,float b)
{
  return a+b;
}
float subNum(float a,float b)
{
  return a-b;
}
float multNum(float a,float b)
{
  return a*b;
}
float divNum(float a,float b)
{
  return a/b;
}

int main()
{
    int x,y,z;
        dOptions();
        cin>>x;
        cout<<"Input the two operands\n";
        cin>>y>>z;
        do
       {
        switch(x)
        {
            case 1:
            cout<<addNum(y,z);
            break;
            case 2:
            cout<<subNum(y,z);
            break;
            case 3:
            cout<<multNum(y,z);
            break;
            case 4:
            cout<<divNum(y,z);
            break;
            default:
            cout<<"Choose an operator";
         }
    }
    while(x>5);


}
