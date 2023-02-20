//5. Составить алгоритм, находящий, является ли частью данного слова слово “раз”. Ответ должен быть “да” или “нет”.

#include <iostream>
#include <string>

using namespace std;

void Find(string &str, string substr)
{
    if(str.find(substr) != string::npos)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
}

int main()
{
    string str;
    getline(cin, str);
    Find(str, "ras");

    return 0;
}
