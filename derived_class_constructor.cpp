#include <iostream>

using namespace std;



class W{
    int a;

     public:
     W(){cout<<"W constructor"<<endl;}
};

class X:public W{
    int r;
    public:
    X(){
        cout<<"child constructor"<<endl;
    }
    
    X(int a){
        cout<<"child X constructor"<<endl;
    }
};


int main(){
    W a;
    X q;
    X q1(1);
    return 0;
}
