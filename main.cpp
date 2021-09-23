#include "dataarray.h"

#include <iostream>

using std::cout;
using std::endl;

int main() {
    DataArray myData;
    cout << myData.ToString() << endl;
    myData.AddElement(1.1);
    cout << myData.ToString() << endl;
    myData.AddElement(4.5);
    cout << myData.ToString() << endl;
    myData.AddElement(8.4);
    cout << myData.ToString() << endl;

    return 0;
}
