//
// Created by justsomedude on 26.03.23.
//

#ifndef WEEK_1_TYPECHECKER_FOR_STELLA_CORE_JUSTSOMEDUDE2001_STOREDTYPE_H
#define WEEK_1_TYPECHECKER_FOR_STELLA_CORE_JUSTSOMEDUDE2001_STOREDTYPE_H

#include "Enums.h"
#include <vector>
#include <string>
#include <iostream>

namespace Stella {

    class StoredType {
    public:
        VisitableTag tag;

        int scope;
        std::string ident = "";

        std::vector<StoredType> argsTypes = {};
        std::vector<StoredType> returnTypes = {};

        StoredType(VisitableTag _tag, int _scope) {
            tag = _tag;
            scope = _scope;
        }

        StoredType(VisitableTag _tag = VisitableTag::tagTypeNat,
                   int _scope = 0,
                   std::vector<StoredType> _argsTypes = {},
                   std::vector<StoredType> _returnTypes = {}) {
            tag = _tag;
            scope = _scope;
            argsTypes = _argsTypes;
            returnTypes = _returnTypes;
        }

        bool operator==(const StoredType& b) {
            if (tag != b.tag ||
                argsTypes.size() != b.argsTypes.size() ||
                returnTypes.size() != b.returnTypes.size()) {
                return false;
            }
            for (int i = 0; i < b.argsTypes.size(); i++) {
                if (argsTypes[i] == b.argsTypes[i]) {
                    continue;
                } else {
                    return false;
                }
            }
            for (int i = 0; i < b.returnTypes.size(); i++) {
                if (returnTypes[i] == b.returnTypes[i]) {
                    continue;
                } else {
                    return false;
                }
            }
            return true;
        }

        bool operator!=(const StoredType& b) {
            return !(this->operator==(b));
        }

        StoredType& operator= (const StoredType &b) {
            tag = b.tag;
            scope = b.scope;
            argsTypes = b.argsTypes;
            returnTypes = b.returnTypes;
            return *this;
        }

        void print() {
            std::cout << "\n===============\n";
            std::cout << "Ident:      " << ident << '\n';
            std::cout << "Tag:        " << tag << '\n';
            std::cout << "ArgTags:    ";
            for (int i = 0; i < argsTypes.size(); i++) {
                std::cout << argsTypes[i].tag << " ";
            } std::cout << '\n';
            std::cout << "ReturnTags: ";
            for (int i = 0; i < returnTypes.size(); i++) {
                std::cout << returnTypes[i].tag << " ";
            } std::cout << '\n';
            std::cout << "\n===============\n";
        }
    };
} // Stella

#endif //WEEK_1_TYPECHECKER_FOR_STELLA_CORE_JUSTSOMEDUDE2001_STOREDTYPE_H
