// File generated by the BNF Converter (bnfc 2.9.4.1).

package stella.Absyn;

public class PatternFalse  extends Pattern {
  public int line_num, col_num, offset;
  public PatternFalse() { }

  public <R,A> R accept(stella.Absyn.Pattern.Visitor<R,A> v, A arg) { return v.visit(this, arg); }

  public boolean equals(java.lang.Object o) {
    if (this == o) return true;
    if (o instanceof stella.Absyn.PatternFalse) {
      return true;
    }
    return false;
  }

  public int hashCode() {
    return 37;
  }


}
