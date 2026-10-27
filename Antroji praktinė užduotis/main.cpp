#include <iostream>
#include <fstream>
//#include <iomanip>
#include <string>
#include <format>

using namespace std;
const int stud_max=100; const int grade_max_count=10;
const int min_grade=1; const int max_grade=10;

void irasiti_Function (string NAMES[], int GRADES[][grade_max_count+1], int &count, int &n);
void perzureti_Function (string NAMES[], int GRADES[][grade_max_count+1], int &count, int &n);
void perzureti_konk_Function (string NAMES[], int GRADES[][grade_max_count+1], int &count, int &n);
void atnaujinti_Function (string NAMES[], int GRADES[][grade_max_count+1], int &count, int &n);
void vidutinis_Function (string NAMES[], int GRADES[][grade_max_count+1], int &count, int &n);
void pasalinti_Function (string NAMES[], int GRADES[][grade_max_count+1], int &count, int &n);

    int main() {
        int count=0, n=0, meniu=0;
        //int students, grade; //Students - studentu kiekis; Grades - studentu pazymiu kiekis
        string NAMES[stud_max]={};
        int GRADES[stud_max][grade_max_count+1]={0};


        beggining:
        cout << "\n-----  MENIU -----\n";
        cout << "1. Ivesti mokini ir jo pazymius\n";
        cout << "2. Perziureti visu mokiniu pazymius\n";
        cout << "3. Perziureti konkretaus mokinio pazymius\n";
        cout << "4. Atnaujinti pazymi\n";
        cout << "5. Apskaiciuoti mokinio vidurki\n";
        cout << "6. Pasalinti mokini\n";
        cout << "0. Iseiti\n";
        again:
        cout << "\nPasirinkite funkcija:\n";
        cin >> meniu;

        cout<<endl;
        ////////////////////////////////////////////////

        switch (meniu) {
            case 1:
                cout<<"-  Ivesti mokini ir jo pazymius  -"<<endl<<endl;
                irasiti_Function (NAMES, GRADES, count, n);
                break;
            case 2:
                cout<<"-  Perziureti visu mokinio pazymius  -"<<endl;
                perzureti_Function (NAMES, GRADES, count, n);
                break;
            case 3:
                cout<<"-  Perziureti konkretaus mokinio pazymius  -"<<endl;
                perzureti_konk_Function (NAMES, GRADES, count, n);
                break;
            case 4:
                cout<<"-  Atnaujinti pazymi  -"<<endl;
                atnaujinti_Function (NAMES, GRADES, count, n);
                break;
            case 5:
                cout<<"-  Apskaiciuoti mokinio vidurkii  -"<<endl;
                vidutinis_Function (NAMES, GRADES, count, n);
                break;
            case 6:
                cout<<"-  Pasalinti mokini  -"<<endl;

                break;
            case 0:
                cout<<"Aciu kad naudojates musu paslaugus"<<endl;
                return 0;
            default:
                cout<<"-  Tokios funkcijos nera  -"<<endl;
            goto again;     }
        cout<<endl<<endl; goto beggining;
         return 0;
    }


////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void irasiti_Function (string NAMES[], int GRADES[][grade_max_count+1], int &count, int &n) {
        int add_stud;

        if (count==0) {
            cout << "Studentu kiekis?\n";
        }else {
            cout << "Kiek dar studentu dateti?\n";}


        cin >> add_stud;
        count += add_stud;


        for (int i = 0; i < count; i++) {

            cout << "\nStudentas " << i+1 << endl;
            cout << "Vardas: \n";
            cin>>ws;
            getline(cin, NAMES[i]);
                back:
                    cout << "Pazymiu kiekis\n";
                    cin>>n;
            if (n>grade_max_count) {
                cout << "-- Maximalus imanoma pazymiu kiekis yra "<<grade_max_count<<" --\n";
                goto back;
            }

                GRADES[i][0] = n; cout<<"Pazymai ( "<<min_grade<<" - "<<max_grade<<" )\n";
                for (int j = 1; j <= n; j++) {repeat:
                cin>>GRADES[i][j];
                    if (GRADES[i][j]<min_grade || GRADES[i][j]>max_grade) {
                        cout << format("Pazymis turi buti tarp {0} ir {1}\n", min_grade, max_grade);
                        goto repeat;}
            }}

    }
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void perzureti_Function (string NAMES[], int GRADES[][grade_max_count+1], int &count, int &n){
        if (count==0) {
            cout << "---  Sarasas Tuscias  ---\n";
        } else{

        for (int k = 0; k < count; k++) {
            cout<<endl<< "\nStudentas Nr." << k+1 << endl;
            cout << "Vardas:" << NAMES[k]<<endl;
            n=GRADES[k][0];cout<<"Pazymius:";
            for (int l = 1; l <= n; l++) {
                cout<<" "<<GRADES[k][l];
            }
        }}}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void perzureti_konk_Function (string NAMES[], int GRADES[][grade_max_count+1], int &count, int &n) {
        char testi; int x=0; back:
            if (count==0) {
                cout << "---  Sarasas Tuscias  ---\n"; return;
            } else{
                cout<<"Studentas Nr.\n";
                cin>>n;
                if (n>count) {
                    cout << "Tokio studento nera";
                    goto back;}

                cout<<endl;
                n--;
                cout << "Vardas:" << NAMES[n]<<endl;
                x=GRADES[n][0];cout<<"Pazymius:";
                for (int l = 1; l <= x; l++) {
                    cout<<" "<<GRADES[n][l];
                }
            }
            again:
    cout << "\n\nAr norit dar perzureti? (y/n)\n";
            cin>>testi;
            if (testi=='y') {
                goto back;
            } else if (testi!='y' && testi!='n'){
                cout <<"Tokios komandos nera\n"; goto again;}
    }
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void atnaujinti_Function (string NAMES[], int GRADES[][grade_max_count+1], int &count, int &n) {
    char testi; int x=0; back:
    if (count==0) {
        cout << "---  Sarasas Tuscias  ---\n"; return;
    } else{
        cout<<"Kam norit atnaujinti pazymius?\nMokinio Nr.\n";
        cin>>n; cout<<endl;
        if (n>count) {
            cout << "\n\nTokio studento nera\n";
            goto back;}
        n--;
        cout << "Vardas:" << NAMES[n]<<endl;
        x=GRADES[n][0];cout<<"Pazymius:";
        for (int l = 1; l <= x; l++) {
            cout<<" "<<GRADES[n][l];
        }


        cout <<"\n\n---  Pazymius bus uzrasytos per naujos  ---\n";back_again:
        cout << "Pazymiu kiekis\n";
        cin>>x;
        if (n>grade_max_count) {
            cout << "-- Maximalus imanoma pazymiu kiekis yra "<<grade_max_count<<" --\n";
            goto back_again;
        }
        GRADES[n][0] = x; cout<<"Pazymai ( "<<min_grade<<" - "<<max_grade<<" )\n";
        for (int j = 1; j <= x; j++) {repeat:
            cin>>GRADES[n][j];
            if (GRADES[n][j]<min_grade || GRADES[n][j]>max_grade) {
                cout << format("Pazymis turi buti tarp {0} ir {1}\n", min_grade, max_grade);
                goto repeat;}}
    }

    cout << "\n\nVardas:" << NAMES[n]<<endl;
    x=GRADES[n][0];cout<<"Pazymius:";
    for (int l = 1; l <= x; l++) {
        cout<<" "<<GRADES[n][l];
    }




     again:
cout << "\n\nAr norit dar atnaujinti? (y/n)\n";
     cin>>testi;
     if (testi=='y') {
         goto back;
     } else if (testi!='y' && testi!='n'){
         cout <<"Tokios komandos nera\n"; goto again;}
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void vidutinis_Function (string NAMES[], int GRADES[][grade_max_count+1], int &count, int &n) {
        char testi; int x=0; double average=0; back:
            if (count==0) {
                cout << "---  Sarasas Tuscias  ---\n"; return;
            } else{
                cout<<"Studentas Nr.\n";
                cin>>n; cout<<endl;
                if (n>count) {
                    cout << "\n\nTokio studento nera\n";
                    goto back;}
                n--;
                cout << "Vardas:" << NAMES[n]<<endl;
                x=GRADES[n][0];cout<<"Pazymius vidurkis:";
                for (int l = 1; l <= x; l++) {
                    average += GRADES[n][l];
                }
                cout <<average/x<<endl;
            }average=0;
    again:
cout << "\n\nAr norit dar pakartoti? (y/n)\n";
    cin>>testi;
    if (testi=='y') {
        goto back;
    } else if (testi!='y' && testi!='n'){
        cout <<"Tokios komandos nera\n"; goto again;
    }}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void pasalinti_Function (string NAMES[], int GRADES[][grade_max_count+1], int &count, int &n) {
        string Temp[stud_max];
        int TEMP[stud_max][grade_max_count+1];
        char testi; int x=0; back:
            if (count==0) {
                cout << "---  Sarasas Tuscias  ---\n";
            } else{
                cout<<"Kam norit atnaujinti pazymius?\nMokinio Nr.\n";
                cin>>n; cout<<endl;
                if (n>count) {
                    cout << "\n\nTokio studento nera\n";
                    goto back;}
                n--;
                cout << "Vardas:" << NAMES[n]<<endl;
                x=GRADES[n][0];cout<<"Pazymius:";
                for (int l = 1; l <= x; l++) {
                    cout<<" "<<GRADES[n][l];
                }


            }
    }