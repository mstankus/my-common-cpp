// BinaryForm.hpp
// From https://stackoverflow.com/questions/7349689/how-to-print-using-cout-a-number-in-binary-form

#ifndef INCLUDED_BINARYFORM_HPP
#define INCLUDED_BINARYFORM_HPP

#include <climits>
#include <iostream>

template<typename T>
struct BinaryForm {
   BinaryForm(const T& v) : _bs(v) {}
   const std::bitset<sizeof(T)*CHAR_BIT> _bs;
};

template<typename T>
inline std::ostream& operator<<(std::ostream& os, 
                                const BinaryForm<T> bf) {
    return os << bf._bs;
}
#endif
