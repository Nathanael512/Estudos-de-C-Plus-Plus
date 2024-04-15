#include <iostream>
using namespace std;

/* -- Estrutura

for(x=0; x<10; x++) {
    comando 1;
    comando 2;
    comando 3;
    comando ...;

}
*/

int main() {

    int x,y,z;
 

    for (x=0,y=1,z=0 ; x <=10 && z<=6 ; x++,y+=2,z+=2) {
        cout << x << " - " << y << " - " << z << "\n";
    }


    return 0;

}