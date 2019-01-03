#include "Bencode/BString.h"
#include "Bencode/BItemVisitor.h"

namespace bencode {

std::string BString::value() const { return _Value; }

void BString::setValue(std::string Value) { _Value = Value; }

std::string::size_type BString::length() const { return _Value.length(); }

void BString::accept(BItemVisitor *Visitor) { Visitor->visit(this); }

} // namespace bencode
