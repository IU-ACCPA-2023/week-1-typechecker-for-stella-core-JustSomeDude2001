#include <iostream>
#include "TypeCheck.h"
#include "MyVisitor.h"
#include "Stella/Absyn.H"

namespace Stella
{
  void typecheckProgram(Program *program)
  {
    program->accept(new MyVisitor());
  }

} // namespace Stella
