#include<cstdio>
#include<iostream>

namespace my{
    void cout(int x){
        printf("%d\n", x);
    }
}

namespace you{
    int cout = 1;
}

int main(){
    int a = 100;
    std::cout << a << std::endl;
    my::cout(you::cout);
    std::cout << you::cout;
    return 0;
}