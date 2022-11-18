#include <iostream>
using namespace std;
class Counter
{
private:
    int count;
public:
    void count_set(int l)
    {
        this->count = l;
    }
    Counter()
    {
        this->count = 1;
    }
    void Plus()
    {
        count++;
    }
    void Minus()
    {
        count--;
    }
    void Res()
    {
        cout << count;
        cout << endl;
    }
    /*void Exit(bool temp)
    {
      cout<<"\nДо свидания!";
      temp=false;
    }*/
};
int main()
{
    cout << "Вы хотите указать начальное значение счётчика? Введите да или нет:\n";
    string text;
    Counter calc;
    int n;
    char s;
    char m;
    cin >> text;
    if (text == "да")
    {
        cin >> n;
        calc.count_set(n);
    }
    else
    {
        n = 1;
    }
    bool temp = true;
    while (temp)
    {
        cout << "Введите команду ('+', '-', '=' или 'x')";
        cin >> s;
        switch (s)
        {
        case '+':
            calc.Plus();
            break;
        case '-':
            calc.Minus();
            break;
        case '=':
            calc.Res();
            break;
        case 'x':
            //calc.Exit(temp);
            temp = false;
            cout << "\nДо свидания!";
            break;
        }
    }
    return 0;
}