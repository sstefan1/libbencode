#include "Bencode/BList.h"
#include "Bencode/BItemVisitor.h"

namespace bencode {

BList::BItemList::size_type BList::size() const { return ItemList.size(); }

bool BList::empty() const { return ItemList.empty(); }

void BList::push_back(const std::shared_ptr<BItem> &Item) {
  if (Item == nullptr)
    return;
  ItemList.push_back(Item);
}

void BList::accept(BItemVisitor *Visitor) { Visitor->visit(this); }

} // namespace bencode
