//
// Created by justsomedude on 26.03.23.
//

#ifndef WEEK_1_TYPECHECKER_FOR_STELLA_CORE_JUSTSOMEDUDE2001_STOREDTYPE_H
#define WEEK_1_TYPECHECKER_FOR_STELLA_CORE_JUSTSOMEDUDE2001_STOREDTYPE_H

#include "Enums.h"
#include <vector>

namespace Stella {

    class StoredType {
    public:
        VisitableTag tag;

        int scope;

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

        bool operator==(StoredType const& b) {
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

        bool operator!=(StoredType const& b) {
            return !(*this == b);
        }
    };

} // Stella

#endif //WEEK_1_TYPECHECKER_FOR_STELLA_CORE_JUSTSOMEDUDE2001_STOREDTYPE_H
