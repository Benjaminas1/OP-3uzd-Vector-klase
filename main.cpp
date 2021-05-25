#include <iostream>
#include <vector>
#include <chrono>
#include <fstream>
#include "vec.hpp"

using namespace std;

void timeTest(){
    std::chrono::steady_clock::time_point beginV1;
    std::chrono::steady_clock::time_point endV1;
    std::chrono::steady_clock::time_point beginV2;
    std::chrono::steady_clock::time_point endV2;


    beginV1 = std::chrono::steady_clock::now();

    int size[5] = {10000, 100000, 1000000, 10000000, 100000000};

    for(int indx = 0; indx<5; indx++)
    {
        unsigned int sz = size[indx];
        cout << "Size: " << sz << endl;

        std::vector<int> v1;
        for (int i = 1; i <= sz; ++i) v1.push_back(i);
        

        endV1 = std::chrono::steady_clock::now();
        

        beginV2 = std::chrono::steady_clock::now();

        Vector<int> v2;
        for (int i = 1; i <= sz; ++i) v2.push_back(i);
        

        endV2 = std::chrono::steady_clock::now();

        std::cout << "std::vector time = " << std::chrono::duration_cast<std::chrono::milliseconds>(endV1 - beginV1).count() << "ms" << std::endl;
        std::cout << "custom Vector class time = " << std::chrono::duration_cast<std::chrono::milliseconds>(endV2 - beginV2).count() << "ms" << std::endl;
        //std::cout << "Time difference = " << std::chrono::duration_cast<std::chrono::milliseconds>((endV2 - beginV2)-(endV1 - beginV1)).count() << "ms" << std::endl;
        cout << endl;
    }
    
}

template <class T>
void printVector(T vec){
    for(int i=0; i<vec.size(); i++){
        cout << vec[i] << " ";
    }
    cout << endl;
}

void vectorTest(){
    std::vector<int> v1;
    cout << "std::vector<int> results: " << endl;
    v1.push_back(5);
    v1.push_back(3);
    printVector(v1);
    v1.pop_back();
    printVector(v1);
    cout << v1.size() << endl;
    cout << v1[0] << endl;

    cout << "Vector<int> results: " << endl;
    Vector<int> v2;
    v2.push_back(5);
    v2.push_back(3);
    printVector(v2);
    v2.pop_back();
    printVector(v2);
    cout << v2.size() << endl;
    cout << v2[0] << endl;
}

int main(){
    vectorTest();
    timeTest();
}