#include <iostream>
//
// Created by Joseph Malin on 2017-10-19.
//
/*!
 * Defines a vector as a array of double-precision floating point values
 */
class Vector {
private:
    double* elements;
    int sz;
public:
    explicit Vector(int s) : elements{new double[s]}, sz{s} {}; /*!< Initializes a vector of length s */
    int len() { return sz; } /*!< returns the size of the vector */
    double& operator[](int i) { return elements[i];} /*!< returns an element of the vector */
};
class Container {
public:
    virtual double& operator[](int) = 0;
    virtual int size() const = 0;
    virtual ~Container() = default;
};
class VectorContainer : public Container {
    Vector v;
public:
    explicit VectorContainer(int size) {
        v = new Vector(size);
    }
    ~VectorContainer() override = default;
    double& operator[](int i) override { return v[i]; }
    int size() { return v.len(); }
};
int main(){
    Vector v1(10);
    VectorContainer v2(5);
    int s1 = v1.len();
    int s2 = v2.size();
    for (int index = 0; index != s1 ; ++index) {
        v1[index] = index;
    }
    for (int index1 = 0; index1 < s1; ++index1) {
        std::cout << v1[index1] << " ";
    }
    std::cout << std::endl;

    for (int index2 = 0; index2 != s2; ++index2) {
        v2[index2] = index2;
    }
    for (int index3 = 0; index3 != s2; ++index3) {
        std::cout << v2[index3] << " ";
    }
    std::cout << std::endl;
};