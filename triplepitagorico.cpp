#include <iostream>
//ayuda empleada de la página web: https://www.lawebdelprogramador.com/foros/Dev-C/2123962-C-terna-pitagorica.html
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
                if (a * a + b * b == c *c)
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