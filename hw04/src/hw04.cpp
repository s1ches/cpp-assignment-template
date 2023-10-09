#include "include/hw04.h"

std::size_t hw04(const int* input_array, std::size_t elem_count)
{
    if (input_array == nullptr)
        throw std::runtime_error{"Argument null reference exception"};
    
    if(input_array[0] < 0)
        return 0;

    std::size_t out_data_size = 1;
    std::size_t* out_data = new std::size_t[out_data_size]{0};
    
    if(out_data == nullptr)
        throw std::runtime_error{"Memory was not allocated"};

    for(std::size_t i = 0;i < elem_count && input_array[i] >= 0; i++) {
        out_data[out_data_size-1] = input_array[i];

        if(i+1 != elem_count && input_array[i+1] >= 0)
            out_data = realloc(out_data, ++out_data_size);
    }

    std::size_t sum = 0;
    for(std::size_t i = 0;i < out_data_size; i++)
        sum+=out_data[i];

    delete[] out_data;

    return sum;
}

std::size_t* realloc(std::size_t* input_array, const std::size_t elem_count){
    std::size_t* out_array = new std::size_t[elem_count];

    if(out_array == nullptr)
        throw std::runtime_error{"Memory was not allocated"};
    
    if (input_array == nullptr)
        throw std::runtime_error{"Argument null reference exception"};
    
    for(std::size_t i=0;i < elem_count; i++)
        out_array[i] = input_array[i];
    
    delete[] input_array;

    return out_array;
}
