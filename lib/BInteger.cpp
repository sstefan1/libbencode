#include "Bencode/BInteger.h"
#include "Bencode/BItemVisitor.h"

namespace bencode {

BInteger::BInteger(int64_t Value) : Value(Value) {}

int64_t BInteger::value() const { return Value; }

void BInteger::setValue(int64_t Value) { this->Value = Value; }

void BInteger::accept(BItemVisitor *Visitor) { Visitor->visit(this); }

} // namespace bencode
