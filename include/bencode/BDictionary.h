//===- Bencode/BDictionary.h -  ---------------------------------*- C++ -*-===//
// 
// Representation of a dictionary.
//
//===----------------------------------------------------------------------===//

#ifndef B_DICTIONARY_H
#define B_DICTIONARY_H

#include "BItem.h"
#include <map>
#include <memory>

namespace bencode {
class BString;

class BDictionary : public BItem {
private:
  class BStringComparator {
  public:
    bool operator()(const std::shared_ptr<BString> &lhs,
                    const std::shared_ptr<BString> &rhs) const;
  };

public:
  using BItemMap = std::map<std::shared_ptr<BString>, std::shared_ptr<BItem>,
                            BStringComparator>;

public:
  BDictionary() = default;

  BItemMap::size_type size() const;
  bool empty() const;

  /// Element access and modifiers.
  std::shared_ptr<BItem> &operator[](const std::shared_ptr<BString> &key);

  /// BItemVisitor support.
  virtual void accept(BItemVisitor *Visitor) override;

private:
  BItemMap ItemMap;
};

} // namespace bencode

#endif // B_DICTIONARY_H
