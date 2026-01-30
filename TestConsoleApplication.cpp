#include <iostream>
using namespace std;

// 加法
double add(double a, double b) {
    return a + b;
}

// 減法
double subtract(double a, double b) {
    return a - b;
}

// 乘法
double multiply(double a, double b) {
    return a * b;
}

// 除法
double divide(double a, double b) {
    if (b != 0)
        return a / b;
    else {
        cout << "錯誤: 除數不能為零!" << endl;
        return 0; // 或者可以返回特殊值表示錯誤
    }
}

int main() {
    double num1 = 0.0, num2 = 0.0;
    char op = 0;
    cout << "簡易計算機 (函數版)\n";
    cout << "請輸入運算式 (格式: 數字 運算符 數字，例如 3 + 4): ";
    cin >> num1 >> op >> num2;
    if (!cin) {
        cout << "輸入錯誤: 請輸入有效的數字和運算符!" << endl;
        return 1;
    }

    switch(op) {
        case '+':
            cout << "結果: " << add(num1, num2) << endl;
            break;
        case '-':
            cout << "結果: " << subtract(num1, num2) << endl;
            break;
        case '*':
            cout << "結果: " << multiply(num1, num2) << endl;
            break;
        case '/':
            if (num2 != 0) {
                cout << "結果: " << divide(num1, num2) << endl;
            } else {
                cout << "錯誤: 除數不能為零!" << endl;
            }
            break;
        default:
            cout << "錯誤: 不支援的運算符!" << endl;
    }

    return 0;
}

