#include <iostream>
#include <list>
#include <windows.h>

using namespace std;

template<typename T> void affiche(const T& contain)
{
    cout << "{ ";
    for(const auto& e : contain)
        cout << e << "; ";
    cout << "}" << endl;
}

int main() {

    SetConsoleOutputCP(CP_UTF8);

    cout << "***=== début du code ===***" << endl << endl;

    list<int> li1 = { 11, 22, 33 };

    cout << "li1 déclaré : ";
    affiche(li1);

    cout << endl;

    li1.push_back(44);
    cout << "li1.push_back(44) : ";
    affiche(li1);
    li1.emplace_back(55);
    cout << "li1.emplace_back(55) : ";
    affiche(li1);
    li1.push_front(0);
    cout << "li1.push_front(0) : ";
    affiche(li1);
    li1.emplace_front(-11);
    cout << "li1.emplace_front(-11) : ";
    affiche(li1);

    cout << endl;

    auto it = li1.begin();
    it++;
    li1.insert(it, -1);
    cout << "li1.insert(it, -1) : ";
    affiche(li1);

    cout << endl;

    back_insert_iterator<list<int>> itb(li1);
    cout << "back_insert_iterator<list<int>> itb(li1) : " << endl;
    *itb++ = 111;
    cout << "    *itb++ = 111 : ";
    affiche(li1);
    *itb++ = 222;
    cout << "    *itb++ = 222 : ";
    affiche(li1);

    front_insert_iterator<list<int>> itf(li1);
    cout << "back_insert_iterator<list<int>> itf(li1) : " << endl;
    *itf++ = -222;
    cout << "    *itf++ = -222 : ";
    affiche(li1);
    *itf++ = -333;
    cout << "    *itf++ = -333 : ";
    affiche(li1);

    insert_iterator<list<int>> iti(li1, ++it);
    cout << "back_insert_iterator<list<int>> iti(li1, ++it) : " << endl;
    *iti++ = 1111;
    cout << "    *iti++ = 1111 : ";
    affiche(li1);
    *iti++ = 2222;
    cout << "    *iti++ = 2222 : ";
    affiche(li1);

    cout << endl << "***=== fin du code ===***" << endl;
    return 0;
}
