#include <iostream>

using namespace std;

int main()
{
    /*
    //suma elementelor a unui sir introdus de la tastatura
    int a[20], nr, i;
    cout << "Numarul de elemente din sirul a (maxim 20)";
    cin >> nr;
    for (i = 0; i < nr; i++){
        cout << "a[" << i << "] = ";
        cin >> a[i];
    }

    long sum;

    for(i = 0, sum = 0; i < nr; i++){
        sum = sum + a[i];
    }
    cout << "Suma elementelor sirului a este: " << sum << endl;
    */

    /*Creaţi un program care determină valoarea maximă
    dintr-un șir de valori numerice*/

    int a[20], nr, i, maxim;
    cout << "Numarul de elemente din sirul a (maxim 20)";
    cin >> nr;
    for (i = 0; i < nr; i++){
        cout << "a[" << i << "] = ";
        cin >> a[i];
    }
    maxim = a[0];
    for (i = 1; i < nr; i++){
        if(maxim < a[i])
            maxim = a[i];
    }
    cout << "Elementul maxim al sirului a este: " << maxim << endl;
    return 0;



}
