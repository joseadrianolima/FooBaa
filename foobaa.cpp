#include <iostream>
#include <string>
using namespace std;
int main()
{
    for (int i = 1; i <= 100; i++)
    {
        int modType = 3 * ((i % 3) == 0) + 5 * ((i % 5) == 0);
        
        switch (modType)
        {
        case 3:
            cout << "Foo" << endl;
            break;
        case 5:
            cout << "Baa" << endl;
            break;
        case 8:
            cout << "FooBaa" << endl;
            break;
        default:
            cout << i << endl;
            break;
        }
    }
    return 0;
}
