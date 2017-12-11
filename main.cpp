#include <iostream>
#include <windows.h>
#include <time.h>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

void SzukaniePaletyID(){
    int szukaj_menu;
    int ID_palety;
    int tag_Palety;
    cin>>szukaj_menu;
    switch(szukaj_menu){
    case 1:
        system("cls");
        cout<<"============================================"<<endl;
        cout<<"=========== Szukanie Palety po ID =========="<<endl;
        cout<<"============================================"<<endl;
        cout<<"== Podaj ID palety: ";
        cin>>ID_palety;
    break;
    case 2:
        system("cls");
        cout<<"============================================"<<endl;
        cout<<"======= Szukanie Palety po Zawartosci ======"<<endl;
        cout<<"============================================"<<endl;
        cout<<"== Podaj szukana zawartosc: ";
        cin>>tag_Palety;
    break;
    }
}

void SzukaniePalety(){
    system("cls");
    cout<<"============================================"<<endl;
    cout<<"=========== Wszukiwanie Palety ============="<<endl;
    cout<<"============================================"<<endl;
    cout<<"== 1. Wyszukaj po identyfikatorze         =="<<endl;
    cout<<"== 2. Wyszukaj po zawartosci              =="<<endl;
    cout<<"============================================"<<endl;
    SzukaniePaletyID();
}
void DodawaniePalety(){
    system("cls");
    cout<<"============================================"<<endl;
    cout<<"============ Dodawanie palety =============="<<endl;
    cout<<"============================================"<<endl;
    cout<<"== 1.                                    =="<<endl;
    cout<<"== 2. =                                   =="<<endl;
    cout<<"============================================"<<endl;
}
void GenerowanieRaportu(){
    system("cls");
    cout<<"============================================"<<endl;
    cout<<"============ Generowanie raportu ==========="<<endl;
    cout<<"============================================"<<endl;
    cout<<"== 1. =                                   =="<<endl;
    cout<<"== 2. =              =="<<endl;
    cout<<"============================================"<<endl;
}
void EdytowaniePalety(){
    system("cls");
    cout<<"============================================"<<endl;
    cout<<"============ Edytowanie palety ============="<<endl;
    cout<<"============================================"<<endl;
    cout<<"== 1. =         =="<<endl;
    cout<<"== 2. =              =="<<endl;
    cout<<"============================================"<<endl;
}
void IloscWozkow(){
    system("cls");
    cout<<"============================================"<<endl;
    cout<<"========= Ilosc dostepnych wozkow =========="<<endl;
    cout<<"============================================"<<endl;
    cout<<"== 1. =         =="<<endl;
    cout<<"== 2. =              =="<<endl;
    cout<<"============================================"<<endl;
}

void Main_Menu(){
    int main_menu;
    cout<<"============================================"<<endl;
    cout<<"=================== MENU ==================="<<endl;
    cout<<"============================================"<<endl;
    cout<<"== 1. Wyszukaj palete                     =="<<endl;
    cout<<"== 2. Dodaj palete                        =="<<endl;
    cout<<"== 3. Generuj raport o stanie magazynowym =="<<endl;
    cout<<"== 4. Edytuj palete                       =="<<endl;
    cout<<"== 5. Ilosc dostepnych wozkow paletowych  =="<<endl;
    cout<<"== 6. Wyjscie                             =="<<endl;
    cout<<"============================================"<<endl;
    cin>>main_menu;
    switch(main_menu){
    case 1:
        SzukaniePalety();
    break;
    case 2:
        DodawaniePalety();
    break;
    case 3:
        GenerowanieRaportu();
    break;
    case 4:
        EdytowaniePalety();
    break;
    case 5:
        EdytowaniePalety();
    break;
    case 6:
        exit(0);
    break;
    default:
        cout<<"Niepoprawny wybor. Sprobuj ponownie!"<<endl;
        Sleep(1000);
        system("cls");
        //zapetlic wbyor !!! :D
    break;
    }
}

int main()
{
    Main_Menu();
    return 0;
}
