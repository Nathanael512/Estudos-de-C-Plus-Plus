#include <iostream>
using namespace std;

int main() {

    int cont1;

    cont1=0;

    while (cont1++ < 1000)
    {
        cout << cont1 << "\n";

        if (cont1 == 500)
        {
            break;
        }
        
    }
    

    return 0;

}