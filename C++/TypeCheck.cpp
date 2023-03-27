#include <iostream>
#include "TypeCheck.h"
#include "Stella/Absyn.H"
#include "MyVisitor.h"

namespace Stella {

    void typecheckProgram(Program *program) {
        program->accept(new MyVisitor());
        std::cout << "NOTE: There is a lot of debug info printed for developer's convenience. Do not pay mind to it.\n";
        std::cout << "There is no check for existence of main method.\n";

        std::cout << "TYPE CHECKING PASSED SUCCESSFULLY.\n";
    }


} // namespace Stella
