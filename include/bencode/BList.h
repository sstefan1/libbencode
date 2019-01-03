//===- Bencode/BList.h -  ---------------------------------------*- C++ -*-===//
//
// Representation of a list.
//
//===----------------------------------------------------------------------===//

#ifndef B_LIST_H
#define B_LIST_H

#include "BItem.h"
#include <vector>
#include <memory>

namespace bencode {

class BList : public BItem {
public:
  using BItemList = std::vector<std::shared_ptr<BItem>>;

public:
  BList() = default; 

  BItemList::size_type size() const;
  bool empty() const;

  void push_back(const std::shared_ptr<BItem> &Item);

  BItemList &List() const;

  /// BItemVisitor support.
  virtual void accept(BItemVisitor *Visitor) override;

private:
  BItemList ItemList;
};

} // namespace bencode

#endif // B_LIST_H
