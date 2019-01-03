//===- Bencode/BItem.h -  ---------------------------------------*- C++ -*-===//
//
// Base class for all items (integers, strings, etc.).
//
//===----------------------------------------------------------------------===//

#ifndef B_ITEM_H
#define B_ITEM_H

#include <memory>

namespace bencode{

class BItemVisitor;

class BItem {
public:
  virtual ~BItem() = 0;

  /// BItemVisitor support:
  /// Accepts the item by the giben visitor.
  /// Subclasses should implement this function in this way:
  /// void Subclass::accept(BItemVisitor *visitor){
  ///   visitor->visit(this);
  /// }
  virtual void accept(BItemVisitor *visitor) = 0;

protected:
  BItem() = default;

private:
  /// Disabling copy construction and assignment.
  BItem(const BItem &) = delete;
  BItem &operator=(const BItem &) = delete;
};

} // namespace bencode

#endif // B_ITEM_H
