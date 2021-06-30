#include <iostream>
#include <memory>
using namespace std;
class smartpointer {
    int a;
    int d;

public:
    smartpointer(int l, int b)
    {
        a = l;
        d = a;
    }

    int gumar()
    {
        return a + d;
    }
};
int main()
{
    shared_ptr<smartpointer> a(new smartpointer(5, 5));
    cout << a->gumar() << endl;
    shared_ptr<smartpointer> a1;
    a1 = a;
    cout << a1->gumar() << endl;
    cout << a->gumar() << endl;
    
    return 0;
}
