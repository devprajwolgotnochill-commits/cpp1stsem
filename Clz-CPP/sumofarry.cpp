#include<iostream>


int main (){

    int arry[6] = {1 ,3 ,5 ,6 ,7 ,1};

    int sum = 0;
    for(int i=0 ;i < 6 ;i++){
        std::cout << arry[i] << "\n";
        sum += arry[i];
    }
    std::cout<<"Sum = " << sum << std::endl;

    return sum;
    
}
