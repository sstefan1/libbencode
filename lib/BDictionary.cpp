#include "Bencode/BString.h"
#include "Bencode/BItemVisitor.h"
#include "Bencode/BDictionary.h"

namespace bencode {

bool BDictionary::BStringComparator::
operator()(const std::shared_ptr<BString> &lhs,
           const std::shared_ptr<BString> &rhs) const {
  return lhs->value() < rhs->value();
}

BDictionary::BItemMap::size_type BDictionary::size() const { return ItemMap.size(); }

bool BDictionary::empty() const { return ItemMap.empty(); }

std::shared_ptr<BItem> &BDictionary::operator[](const std::shared_ptr<BString> &key) {
  return ItemMap[key];
}

void BDictionary::accept(BItemVisitor *Visitor) { Visitor->visit(this); }

} // namespace bencode
