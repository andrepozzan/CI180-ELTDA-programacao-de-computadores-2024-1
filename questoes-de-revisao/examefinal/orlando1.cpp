#include <iostream>

using namespace std;

int main()
{
    int k1, k2, testNum, n;

    testNum = 1;
    k2 = 0;
    k1 = 1;

    while (0 == 0)
    {
        cin >> n;

        while (testNum <= n)
        {
            testNum = k1 * 35;

            if (n % testNum == 0)
            {

                k2 = k2 + 1;

                cout << testNum << endl;
            }
            k1 = k1 + 1;
        }

        cout << "Qtd. de divisores: " << k2 << endl;
    }

    return 0;
}