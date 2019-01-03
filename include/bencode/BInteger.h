//===- Bencode/BInteger.h -  ------------------------------------*- C++ -*-===//
//
// Bencoded representation of an integer.
//
//===----------------------------------------------------------------------===//

#ifndef B_INTEGER_H
#define B_INTEGER_H

#include "BItem.h"
#include <cstdint>

namespace bencode {

class BInteger : public BItem {
public:
  explicit BInteger(int64_t Value);

  int64_t value() const;
  void setValue(int64_t Value);

  /// BItemVisitor support.
  virtual void accept(BItemVisitor *Visitor) override;

private:
  int64_t Value;
};

} // namespace bencode

#endif // B_INTEGER_H
