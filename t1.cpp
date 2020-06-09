#include <iostream>

using namespace std;

int main()
{
    try {
        int x;
        cin >> x;
        int y;
        cin >> y;
       if(y==0) throw 0;
        cout<<"the first devide by the second is "<<x/y<<endl; 
    }
    catch (int y)
    {
        cout << "error\n";
    }
}
