#include <iostream>

using namespace std;

template <class T>
class Vector
{
public:
    T *arr;
    int size;
    Vector(int m)
    {
        size = m;
        arr = new T[size];
    }
    T sum(Vector &v)
    {
        T d = 0;
        for (int i = 0; i < size; i++)
        {
            d += this->arr[i] * v.arr[i];
        }
        return d;
    }
};

int main()
{
    Vector<int> v1(2);  // Vector of integers
    v1.arr[0] = 1;
    v1.arr[1] = 2;

    Vector<int> v2(2);  // Vector of integers (same type)
    v2.arr[0] = 4;
    v2.arr[1] = 5;

    cout << "Sum: " << v1.sum(v2) << endl;

    return 0;
}
