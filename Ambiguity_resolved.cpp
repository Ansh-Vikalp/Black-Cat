// This line is added later

#include<iostream>
using namespace std;

class ab{
    public:
    void show(){
        cout<<"Good morning!\n";
    }
};

class cd{
    public:
    void show(){
        cout<<"Hellow!\n";
    }
};

class final: public ab, public cd{
    public:
    void Resolved(){
        ab::show(); //Declaration
    }
  
};


int main(){

    final obj;
   obj.Resolved();
    
    return 0;
}
