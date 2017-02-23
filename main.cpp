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
    /*
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
    */

    /*Creaţi un program care realizează inversarea ordinii
    elementelor dintr-un șir de valori numerice*/
    /*
    int a[20], nr, i, j, aux;
    cout << "Numarul de elemente din sirul a (maxim 20)";
    cin >> nr;
    for (i = 0; i < nr; i++){
        cout << "a[" << i << "] = ";
        cin >> a[i];
    }
    for (i = 0, j = nr - 1; i < j; i++, j--){
        aux = a[i];
        a[i] = a[j];
        a[j] = aux;
    }
    for (i = 0; i < nr; i++){
        cout << a[i] << " ";
    }
    cout << endl;
    return 0;
    */

    /*Creaţi un program care decalează valorile dintr-un șir numeric,
    spre stânga, cu o poziție. Primul element din șirul inițial nu se
    pierde ci se adaugă la sfârșitul șirului*/

    int a[20], nr, i, aux;
    cout << "Numarul de elemente din sirul a (maxim 20)";
    cin >> nr;
    for (i = 0; i < nr; i++){
        cout << "a[" << i << "] = ";
        cin >> a[i];
    }
    aux = a[0];
    for (i = 0; i < nr - 1; i++)
        a[i] = a[i + 1];
    a[nr - 1] = aux;

    for (i = 0; i < nr; i++){
        cout << a[i] << " ";
    }
    cout << endl;
    return 0;

}
