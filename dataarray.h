//
// Created by Arias Arevalo, Carlos on 9/23/21.
//

#ifndef DYNAMIC_MEMORY_01_DATAARRAY_H
#define DYNAMIC_MEMORY_01_DATAARRAY_H

#include <string>
using std::string;

class DataArray {
    double* _data;
    unsigned int _size;
public:
    DataArray();
    DataArray(const DataArray& other);
    ~DataArray();
    DataArray operator=(const DataArray& rhs);
    string ToString()const;
    void AddElement(double element);
};


#endif //DYNAMIC_MEMORY_01_DATAARRAY_H
