// File generated by the BNF Converter (bnfc 2.9.4.1).

package stella.Absyn;

public class Variant  extends Expr {
  public final String stellaident_;
  public final Expr expr_;
  public int line_num, col_num, offset;
  public Variant(String p1, Expr p2) { stellaident_ = p1; expr_ = p2; }

  public <R,A> R accept(stella.Absyn.Expr.Visitor<R,A> v, A arg) { return v.visit(this, arg); }

  public boolean equals(java.lang.Object o) {
    if (this == o) return true;
    if (o instanceof stella.Absyn.Variant) {
      stella.Absyn.Variant x = (stella.Absyn.Variant)o;
      return this.stellaident_.equals(x.stellaident_) && this.expr_.equals(x.expr_);
    }
    return false;
  }

  public int hashCode() {
    return 37*(this.stellaident_.hashCode())+this.expr_.hashCode();
  }


}
