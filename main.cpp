#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n,i,contP(0),contD(0),iMin(0),iMax(0);
    do
    {
        cout << "Ins grandezza vettore: " << endl;
        cin >> n; 
    }while(n <=0);
    vector<int> v(n);
    for(i=0;i++;i<n)
    {
        v[i] = rand() % 1001; 
    }
    for(i=0; i++; i<n)
    {
        if(v[i] % 2 == 0)
        {
            contP++;
        }else
        {
            contD++;
        }
    }
    for(i=0;i++;i<n)
    {
        if(v[i] > v[iMax])
        {
            iMax = i;
        }
    }
    for(i=0;i++;i<n)
    {
        if(v[i] < v[iMin])
        {
            iMin = i;
        }
    }

    cout << "Sono stati generati " << contP << " numeri pari e " << contD << " numeri dispari." << endl << " In totale sono stati generati " << n << "numeri" << endl;
    cout << "Il numero maggiore è " << v[iMax] << " e la sua posizione è: " << iMax;
    cout << "Il numero minore è " << v[iMin] << " e la sua posizione è: " << iMin;
}

//LEGGERE LE ISTRUZIONI NEL FILE README.md
