#include <iostream>
using namespace std;

int main() {
    for (int i=0; i<8; ++i)
    {
    for (int j = 0; j < 8; ++j)
    {
         if ((i + j) % 2 == 0)
         {
            cout << "* ";
         } else {
            cout << ' ';
        }
    }
        cout << endl;
    }
    return 0;
}
