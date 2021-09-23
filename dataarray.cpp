//
// Created by Arias Arevalo, Carlos on 9/23/21.
//

#include "dataarray.h"
#include <string>
#include <sstream>

using std::string;
using std::stringstream;

DataArray::DataArray() {
    _size = 0;
    _data = nullptr;
}

DataArray::DataArray(const DataArray &other) {
    if (_data != nullptr){
        delete[] _data;
        _data = nullptr;
    }
    _data = new double[other._size];
    _size = other._size;
    for (unsigned int i = 0; i < _size; ++i) {
        _data[i] = other._data[i];
    }
}

DataArray::~DataArray() {
    if (_data != nullptr)
        delete[] _data;
}

DataArray DataArray::operator=(const DataArray &rhs) {
    if (_size != rhs._size){
        if (_data != nullptr){
            delete[] _data;
            _data = nullptr;
        }
        _data = new double[rhs._size];
        _size = rhs._size;
    }
    for (unsigned int i = 0; i < _size; ++i) {
        _data[i] = rhs._data[i];
    }
    return *this;
}

string DataArray::ToString() const {
    if (_size == 0){
        return "[]";
    }
    stringstream ss;
    ss << "[";
    for (unsigned int i = 0; i < _size - 1; ++i) {
        ss << _data[i] << ", ";
    }
    ss << _data[_size - 1] << "]";
    return ss.str();
}

void DataArray::AddElement(double element) {
    double* newData = new double[_size + 1];
    for (unsigned int i = 0; i < _size; ++i) {
        newData[i] = _data[i];
    }
    newData[_size] = element;
    delete[] _data;
    _data = newData;
    _size++;
}
