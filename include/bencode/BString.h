//===- Bencode/BString.h -  -------------------------------------*- C++ -*-===//
// 
// Representation of a string.
//
//===----------------------------------------------------------------------===//

#ifndef B_STRING_H
#define B_STRING_H

#include "BItem.h"
#include <string>

namespace bencode {
    
class BString: public BItem {
public:
    explicit BString(std::string Value) : _Value(Value) {}

    std::string value() const;
    void setValue(std::string Value);
    std::string::size_type length() const;

    virtual void accept(BItemVisitor *Visitor) override;

private:
    std::string _Value;
};

} // namespace bencode

#endif // B_STRING_H
