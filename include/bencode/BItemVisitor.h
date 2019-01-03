//===- Bencode/BItemVisitor.h -  --------------------------------*- C++ -*-===//
//
// Base class for all visitors of BItem subclasses.
// Implements the Visitor design pattern.
//
//===----------------------------------------------------------------------===//
//

#ifndef B_ITEM_VISITOR_H
#define B_ITEM_VISITOR_H

namespace bencode {

class BDictionary;
class BInteger;
class BList;
class BString;

class BItemVisitor {
public:
  virtual ~BItemVisitor() = default;

  virtual void Visit(BDictionary *Dictionary) = 0;
  virtual void Visit(BInteger *Integer) = 0;
  virtual void Visit(BList *List) = 0;
  virtual void Visit(BString *String) = 0;

protected:
  BItemVisitor() = default;
};

} // namespace bencode

#endif // B_ITEM_VISITOR_H
