//===- Bencode/Encoder.h -  ------------------------------------*- C++ -*-===//
//
// Data encoder. This is based on
// https://wiki.theory.org/BitTorrentSpecification#Bencoding in BitTorrent
// specification.
//===----------------------------------------------------------------------===//

#ifndef ENCODER_H
#define ENCODER_H

#include "BItemVisitor.h"
#include <memory>
#include <string>

namespace bencode{

class BItem;

class Encoder: BItemVisitor {
public:
    Encoder() = default;

    std::string encode(std::shared_ptr<BItem> Data);
private:
    virtual void visit(BDictionary *Dictionary) override;
    virtual void visit(BInteger *Integer) override;
    virtual void visit(BList *List) override;
    virtual void visit(BString *String) override;

private: 
    std::string EncodedData;
};

} // namespace bencode

#endif // ENCODER_H
