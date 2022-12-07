#include <iostream>
#include <windows.h>
#include <stack>
#include <list>
#include <queue>

using namespace std;

template<typename T> void affiche(const T& contain)
{
    stack<int> tempo1;
    stack<int> tempo2;
    tempo1 = contain;
    cout << "{ ";
    for (int i = 0; i < contain.size(); i++) {
        tempo2.push(tempo1.top());
        tempo1.pop();
    }
    for (int i = 0; i < contain.size(); i++) {
        cout << tempo2.top() << "; ";
        tempo2.pop();
    }
    cout << "}" << endl;
}

int main() {

    SetConsoleOutputCP(CP_UTF8);

    cout << "***=== début du code ===***" << endl << endl;

    stack<int> s1;

    s1.push(1);
    s1.push(2);
    s1.push(3);
    s1.push(4);

    cout << "s1 déclaré : ";
    affiche(s1);

    cout << endl << "***=== fin du code ===***" << endl;
    return 0;
}
