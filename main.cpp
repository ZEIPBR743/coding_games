#include <iostream>
#include <string>
using namespace std;

class arr{
public:
    int num = -1;
    int digit = -1;
    int amt = -1;
    int next  = 0;
    arr(int a, int b, int c){
        num = a;
        digit = b;
        amt = c;
    }
    int getNum(){
        return num;
    }

};

class elements{
public:
    arr start1(1, -1, -1);
    elements(int a){

    }

    int add(int toadd){
        if (start.getNum()==toadd){

        }
    }
};

string getHint(string secret, string guess) {
    std::cout << secret << "\n";
    std::cout << secret.at(1) << "\n";
    elements arr1(4);
    elements arr2(4);
    for (int i=0; i<4; i++){
        int numb = secret.at(i) - '0';
        arr1.add(numb);
    }
    for (int i=0; i<4; i++){
        int numb = secret.at(i) - '0';
        arr2.add(numb);
    }
    arr1

    return 0;
}



int main() {
    //std::cout << "Hello, World!" << std::endl;
    getHint("1807","7810");
    return 0;
}
