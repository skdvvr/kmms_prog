#include <iostream>
#include <vector>

void mergeSort( std::vector< int > & start_vector,int left_border, int right_border,int & pairs);
void merge(std::vector< int > & start_vector ,int left_border,int new_len,int right_border, int & pairs);

int main(){
    int len;
    int pairs = 0;
    std::cout < < "введите длину вектора";
    std::cin > > len;

    std::vector < int > start_vector( len );
    std::cout < < "Введите элементы вектора";
    for (int i = 0 ; i < len ; i++){
        int element;
        std::cin > > element;
        start_vector[i] = element;
    }

    mergeSort(start_vector , 0 , len - 1 , pairs);
    std::cout < < pairs < < std::endl ;
}

void mergeSort( std::vector< int > & start_vector,int left_border, int right_border,int & pairs){
    if ( left_border < right_border ){
        int new_len = ( left_border + right_border ) / 2;

        mergeSort( start_vector, left_border, new_len, pairs );
        mergeSort( start_vector, new_len + 1, right_border, pairs );
        merge( start_vector, left_border, new_len, right_border, pairs );
    }
}

void merge(std::vector< int > & start_vector ,int left_border,int new_len,int right_border, int & pairs){
    int len_left = new_len - left_border + 1;
    int len_right = right_border - new_len;

    std::vector< int > left_vector ( len_left );
    std::vector< int > right_vector ( len_right );

    for (int i = 0 ; i < len_left ; i++){
        left_vector[i] = start_vector[left_border + i];
    }
    for (int j = 0; j < len_right; j++){
        right_vector[j] = start_vector[new_len + j + 1];
    }

    right_vector.push_back(1e9);
    left_vector.push_back(1e9);

    int i = 0;
    int j = 0;
    for (int k = left_border; k <= right_border; k++){

        if ( left_vector[i] < right_vector[j] ){
            start_vector[k] = left_vector[i];
            i++;
        }

        else if ( left_vector[i] > right_vector[j] ){
                start_vector[k] = right_vector[j];

                if ( i != len_left ){
                    pairs += len_left - i;
            }
            ++j;
        }
    }
}




