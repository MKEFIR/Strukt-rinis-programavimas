#include <iostream>
#include <string>
//#include <>


using namespace std;
int main() {
int b = 0;
    double a;
int S[5];
    for (int i = 0; i < 5; i++) {
     cin >> S[i];
    }

    for (int i = 0; i < 5; i++) {
       a = a + S[i];
        if (b < S[i]) {b = S[i];}
    }
cout << "Vidurkis - " << a/5 << ", o didziasis pazymis - " << b;
    return 0;
}
