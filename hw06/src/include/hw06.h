#include <stdexcept>
#include <iostream>
class MyIntVector{
    private:
        int* _array;
        int _length { };
        int _capacity { };
    public:
        MyIntVector(){
            _array = new int[0];
            _capacity = 0;
            _length = 0;
        }

        MyIntVector(int size, int value = 0){
            if(size < 0)
                throw std::runtime_error{"Size must be more then zero or equal zero\nActual: "+size};

            _array = new int[size];
            _capacity = size;
            if(value == 0) _length = 0;
            else _length = size;

            for(int i = 0;i < size; i++)
                _array[i] = value;            
        }

        int size(){
            return _length;
        }

        int capacity(){
            return _capacity;
        }

        MyIntVector resize(int size, int value = 0){
            if(size < 0)
                throw std::runtime_error{"Size must be more then zero or equal zero\nActual: "+size};

            MyIntVector new_vec(size);

            for(int i = 0;i < _length && i < size; i++)
                new_vec.push_back((*this)[i]);

            for(int i = _length;i < size; i++)
                new_vec._array[i] = value;

            delete[] _array;
            _array = nullptr;

            return new_vec;
        }

        void push_back(int value){
            if(_length >= _capacity)
                *this = resize((_capacity+1)*2);
            
            _array[_length++] = value;
        }

        int operator[](int index){
            if(index < 0 || index >= _length)
                throw std::runtime_error{"Index out of range exception"};

            return _array[index];
        }   

        MyIntVector shrink_to_fit(){
            return resize(_length);
        }

    ~MyIntVector(){
        if(!_array)
        {delete[] _array;
        _array = nullptr;}
    }
};