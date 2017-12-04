#include <iostream>

using namespace std;

void SzukaniePalety{
    system(cls);
    cout<<"============================================"<<endl;
    cout<<"=========== Wszukiwanie Palety ============="<<endl;
    cout<<"============================================"<<endl;
    cout<<"== 1. Wyszukaj po identyfikatorze         =="<<endl;
    cout<<"== 2. Wyszukaj po zawartosci              =="<<endl;
    cout<<"============================================"<<endl;
}
void DodawaniePalety{
    system(cls);
    cout<<"============================================"<<endl;
    cout<<"============ Dodawanie palety =============="<<endl;
    cout<<"============================================"<<endl;
    cout<<"== 1. =         =="<<endl;
    cout<<"== 2. =              =="<<endl;
    cout<<"============================================"<<endl;
}
void GenerowanieRaportu{
    system(cls);
    cout<<"============================================"<<endl;
    cout<<"============ Generowanie raportu ==========="<<endl;
    cout<<"============================================"<<endl;
    cout<<"== 1. =         =="<<endl;
    cout<<"== 2. =              =="<<endl;
    cout<<"============================================"<<endl;
}
void EdytowaniePalety{
    system(cls);
    cout<<"============================================"<<endl;
    cout<<"============ Edytowanie palety ============="<<endl;
    cout<<"============================================"<<endl;
    cout<<"== 1. =         =="<<endl;
    cout<<"== 2. =              =="<<endl;
    cout<<"============================================"<<endl;
}
void IloscWozkow{
    system(cls);
    cout<<"============================================"<<endl;
    cout<<"========= Ilosc dostepnych wozkow =========="<<endl;
    cout<<"============================================"<<endl;
    cout<<"== 1. =         =="<<endl;
    cout<<"== 2. =              =="<<endl;
    cout<<"============================================"<<endl;
}
int main()
{
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
    switch(main_menu)
    {
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
        exit 0;
    break;
    }


    return 0;
}
