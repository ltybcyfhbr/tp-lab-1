#include"task4.h"


void main()
{
    const int N = 100;
    char *x, *y, *z = NULL;
    x = new char[N + 1];
    y = new char[N + 1];
    srand(time(NULL));
    for (int i = 0; i < N; i++)
    {
        if (i == 0)
        {
            x[i] = itoa(rand() % 9 + 1);
            y[i] = itoa(rand() % 9 + 1);
        }
        else
        {
            x[i] = itoa(rand() % 10);
            y[i] = itoa(rand() % 10);
        }
    }
    x[N] = '\0';
    y[N] = '\0';
    char a[3] = "99";
    char b[2] = "1";
    print(std::cout, a);
    std::cout << std::endl;
    std::cout << "+";
    std::cout << std::endl;
    print(std::cout, b);
    std::cout << std::endl;
    std::cout << "=";
    std::cout << std::endl;
    z = sum(b, a);
    print(std::cout, z);
    std::cout << std::endl;
    delete[] x;
    delete[] y;
    delete[] z;
    system("pause");
}