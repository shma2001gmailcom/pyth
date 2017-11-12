#ifndef ROW_H
#define ROW_H

#include <sstream>
#include <string>

using namespace std;

template<typename T>
string ToString(T val) {
    stringstream stream;
    stream << val;
    return stream.str();
}

class Row {
public:
    Row();

    Row(int, int);

    virtual ~Row();

    Row(const Row &other);

    int getOne() { return one; }

    int getTwo() { return two; }

protected:
private:
    int one;
    int two;
};

#endif // ROW_H
