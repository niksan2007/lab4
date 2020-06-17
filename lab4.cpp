#include <iostream>

using namespace std;

int sum(int* a, int n);
int umnoj(int x, int y);
int F(int i);
int G(int i);

int main()
{
    setlocale(LC_ALL, "Russian");
    int num;
    cout << "Введите номер задания(1, 2 или 3) или 0 для завершения работы: " << endl;
    cin >> num;
    cout << endl;
    system("cls");
    while (num)
    {
        if (num == 1)
        {
            int  n, count = 0;
           
            cout << "Введите размер массива: ";
            cin >> n;
            int* a = new int[n];
            for (int i = 0; i < n; i++)
            {
                cout << "Введите число: ";
                cin >> a[i];
            }
            cout << "Сумма равна: " << sum(a, n) << endl;
        }
        if (num == 2)
        {
            int y,x;
            cout << "Введите 2 числа: " << endl;
            cout << "x=";
            cin >> x;
            cout << "y=";
            cin >> y;
            if ((x > 0 && y > 0) || (x < 0 && y < 0))
                cout <<umnoj(abs(x), abs(y)) << endl;
            else
                cout << -(int)umnoj(abs(x), abs(y)) << endl;
            system("pause");
        }
        if (num == 3)
        {
            cout << "F(n) = 2 * F(n – 1) * G(n – 1)," << endl << "G(n) = 4 * F(n–1) + G(n – 1)" << endl << endl;
            for (int i = 1; i <= 10; i++)
                cout << "F(" << i << ")= " << F(i) << "   " << "G(" << i << ")= " << G(i) << endl;
        }
        if (num > 3 || num < 1) cout << "Вы выбрали не существующую задачу. Повторите выбор." << endl;
        cout << endl << "Введите номер задания(1, 2 или 3) или 0 для завершения работы: " << endl;
        cin >> num; cout << endl;
        system("cls");
    }
    return 0;
}

int sum(int* a, int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
        sum += a[i];
    return sum;
};

int umnoj(int x, int y)
{
    if (x == 0 || y == 0)
        return 0;
    if (y < 1)
        return x;
    else
        return x + umnoj(x, --y);
}

int F(int i)
{
    if (i == 1)
        return 2;
    return 2 * F(i - 1) * G(i - 1);
}

int G(int i)
{
    if (i == 1)
        return 1;
    return 4 * F(i - 1) + G(i - 1);
}

