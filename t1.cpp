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
    }
    catch (int y)
    {
        cout << "error\n";
    }
}
