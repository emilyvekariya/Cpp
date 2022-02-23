#include <iostream>

using namespace std;
class hello
{
    private:
    int x, y;  
   
    public:
    hello(int x1, int y1)
    {
        x = x1;
        y = y1;
    }
   
    /* Copy constructor */
    hello(const hello &a)
    {
        x = a.x;
        y = a.y;
    }
   
    void display()
    {
        cout<<x<<" "<<y<<endl;
    }
};

int main()
{
    hello obj1(13,15);     // Normal constructor
    hello obj2 = obj1;      // Copy constructor
    cout<<"Normal constructor : ";
    obj1.display();
    cout<<"Copy constructor : ";
    obj2.display();

    return 0;
}
