#include <iostream>
#include <vector>
#include "sort.hpp"
#include "print.hpp"
#include <random>

auto usuallfunc(std::vector <int> &start_vector,int len){
    int count_pairs = 0;
    for(int i = 0; i < len; i++){
        for (int j = i; j < len; j++){
            if (i<j && start_vector[i]>start_vector[j]){
                count_pairs++;
            }
        }
    }
    return count_pairs;
}

int main(){
    int len;
    int pairs = 0;
    
    std::cout << "введите длину вектора";
    std::cin >> len;
    std::vector <int> start_vector( len );
    std::mt19937 mt(time(nullptr));
    for (int i=0; i<len;i++){
        start_vector[i]=mt()%1000;
    }
    print_array("Массив до сортировки:", start_vector, len);
    std::vector<int> copy_start_vector(len);
    copy_start_vector=start_vector;

    int count_pairs = usuallfunc(start_vector,len);
    mergeSort(copy_start_vector , 0 , len - 1 , pairs);

    std::cout <<"получено из merge: ";
    std::cout << pairs << std::endl;
    std::cout << "получено обычно: ";
    std::cout << count_pairs << std::endl;


    return 0;
}




