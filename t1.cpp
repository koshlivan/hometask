#include <iostream>

using namespace std;

int main()
{
    try {
        int x;
        cout<<"enter a nomenator:\n";
        cin >> x;
        
        int y;
        cout<<"enter a denomenator:\n";
        cin >> y;
        
       if(y==0) throw "error:";
        cout<<"the first devide by the second is "<<x/y<<endl; 
    }
    catch (string er)
    {
        cout <<er<< " you can\'t devide by zero\n";
    }
}
