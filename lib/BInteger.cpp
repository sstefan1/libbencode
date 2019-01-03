#include "BInteger.h"
#include "BItemVisitor.h"

namespace bencode {

BInteger::BInteger(int64_t Value) : Value(Value) {}

int64_t BInteger::value() const { return Value; }

void BInteger::setValue(int64_t Value) { this->Value = Value; }

void BInteger::accept(BItemVisitor *Visitor) { visitor->visit(this); }

} // namespace bencode
