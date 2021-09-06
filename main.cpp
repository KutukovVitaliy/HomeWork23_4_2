#include <iostream>

#define form(a,y)   for(a = 0; a < y; ++a)
#define EQ(f1)  f1 ## Fnc

bool minFnc(int a){
    if(a < 20) return true;
    else return false;
}

bool maxFnc(int a){
    if(a >= 20) return true;
    else return false;
}

int main() {
    int i, wag[10], sum = 0;
    std::cout << "Hello, World!" << std::endl;
    form(i,10){
     std::cout << "Input quantity of passenger in wagon #" << i + 1 << ":";
     std::cin >> wag[i];
     if(EQ(max)(wag[i])) std::cout << "There are no empty seats in the wagon" << std::endl;
     else if(EQ(min)(wag[i]))std::cout << "There are empty seats in the wagon" << std::endl;
     sum+= wag[i];
    }
    std::cout << "Total passenger quantity: " << sum << std::endl;
    return 0;
}
