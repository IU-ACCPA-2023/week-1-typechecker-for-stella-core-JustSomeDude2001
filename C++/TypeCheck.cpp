#include <iostream>
#include "TypeCheck.h"
#include "Stella/Absyn.H"
#include "MyVisitor.h"

namespace Stella {

    void typecheckProgram(Program *program) {
        program->accept(new MyVisitor());
    }

} // namespace Stella
