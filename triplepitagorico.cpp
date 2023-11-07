#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int a, b, c;

    a = b = c = 1;

    while (a <= 100)
    {
        while (b <= 100)
        {
            while (c <= 100)
            {
                if ((a^2) + (b^2) == (c^2));
                    cout << "a: " << a << " b: " << b << " c: " << c << endl;
                c++;
            }
            if (c > 100) c = 1;
            b++;
        }
        if (b > 100) b = 1;
        a++;
    }

    return 0;
}