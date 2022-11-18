#include <iostream>
using namespace std;
class Calcurator {
private:
    int num1;
    int num2;

public:
    /*  Calcurator(int a, int b)
      {
          this->num1 = a;
          this->num2 = b;
      }*/
    bool set_num1(double num1) {
        this->num1 = num1;
        if (this->num1 == 0) {
            // cout << "\nНеверный ввод!";
            return false;
        }
        else {

            return true;
        }
    }
    bool set_num2(double num2) {
        this->num2 = num2;
        if (this->num2 == 0) {
            // cout << "\nНеверный ввод!";
            return false;
        }
        else {

            return true;
        }
    }
    void add() {
        double res;
        res = num1 + num2;
        cout << "\nnum1 + num2=" << res;

        //  return 0;
    }
    void multiply() {
        double res;
        res = num1 * num2;
        cout << "\nnum1 * num2=" << res;
        ;
        // return 0;
    }
    void subtract_1_2() {
        double res;
        res = num2 - num1;
        cout << "\nnum2 - num1=" << res;
        ;
        //  return 0;
    }
    void subtract_2_1() {
        double res;
        res = num1 - num2;
        cout << "\nnum1 - num2=" << res;
        //  return 1;
    }
    void divide_1_2() {
        double res;
        res = num1 / num2;
        cout << "\nnum1 / num2=" << res;
        //  return 0;
    }
    void divide_2_1() {
        double res;
        res = num2 / num1;
        cout << "\nnum2 / num1=" << res;
        // return 0;
    }
};

int main() {
    int a, b;
    Calcurator calc;
    cout << "Введите num1: ";
    cin >> a;
    cout << "\nВведие num2: ";
    cin >> b;
    calc.set_num1(a);
    if (calc.set_num1(a) == false) {
        cout << "\nНеверный ввод!";
        do
        {
            cout << "Введите num1: ";
            cin >> a;
        } while (!calc.set_num1(a));

        // return 0;
    }
    calc.set_num2(b);
    if (calc.set_num2(b) == false) {
        cout << "\nНеверный ввод!";
        do
        {
            cout << "\nВведите num2: ";
            cin >> b;
        } while (!calc.set_num2(b));
        // return 0;
    }
    calc.add();
    calc.multiply();
    calc.subtract_1_2();
    calc.subtract_2_1();
    calc.divide_1_2();
    calc.divide_2_1();
}
