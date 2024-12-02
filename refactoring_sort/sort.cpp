#include "sort.hpp"

void mergeSort( std::vector <int> &copy_start_vector,int left_border, int right_border,int &pairs){
    if (left_border < right_border ){
        int new_len = ( left_border + right_border ) / 2;

        mergeSort( copy_start_vector, left_border, new_len, pairs );
        mergeSort( copy_start_vector, new_len + 1, right_border, pairs );
        merge( copy_start_vector, left_border, new_len, right_border, pairs );
    }
}

void merge(std::vector< int > &copy_start_vector ,int left_border,int new_len,int right_border, int &pairs){
    int len_left = new_len - left_border + 1;
    int len_right = right_border - new_len;

    std::vector< int> left_vector ( copy_start_vector.begin() + left_border, copy_start_vector.begin() + left_border + len_left ); 
    std::vector< int > right_vector (copy_start_vector.begin() + new_len + 1, copy_start_vector.begin() + new_len + 1 + len_right );


    right_vector.push_back(1e9);
    left_vector.push_back(1e9);

    int i = 0;
    int j = 0;
    for (int k = left_border; k <= right_border; k++){

        if ( left_vector[i] < right_vector[j] ){
            copy_start_vector[k] = left_vector[i];
            i++;
        }

        else if ( left_vector[i] > right_vector[j] ){
                copy_start_vector[k] = right_vector[j];

                if ( i != len_left ){
                    pairs += len_left - i;
            }
            ++j;
        }
    }
}

