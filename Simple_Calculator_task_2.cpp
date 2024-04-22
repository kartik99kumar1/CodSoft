#include<iostream>
#include<stdlib.h>
using namespace std;

int main()
{
        int n1, n2, result;
        char op;

        cout << "enter a valid arethmetic expression:";
        cin >> n1 >> op >> n2;

        switch(op)
        {
                case '+':
                        result = n1 + n2;
                        break;

                case '-':
                        result = n1 - n2;
                        break;

                case '*':
                        result = n1 * n2;
                        break;

                case '/':
                        if (n2 == 0)
                        {
                                cout << "division by zero error";
                        }
                        result = n1 / n2;
                        break;

                case '%':
                        result = n1 % n2;
                        break;

                default:
                        cout << "invalid arithemetic expression";
                }

        cout << "result is: " << n1 << op << n2 << " = " << result;
        return 0;
}
