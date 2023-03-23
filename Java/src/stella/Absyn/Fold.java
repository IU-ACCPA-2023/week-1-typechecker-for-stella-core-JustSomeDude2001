// File generated by the BNF Converter (bnfc 2.9.4.1).

package stella.Absyn;

public class Fold  extends Expr {
  public final Type type_;
  public final Expr expr_;
  public int line_num, col_num, offset;
  public Fold(Type p1, Expr p2) { type_ = p1; expr_ = p2; }

  public <R,A> R accept(stella.Absyn.Expr.Visitor<R,A> v, A arg) { return v.visit(this, arg); }

  public boolean equals(java.lang.Object o) {
    if (this == o) return true;
    if (o instanceof stella.Absyn.Fold) {
      stella.Absyn.Fold x = (stella.Absyn.Fold)o;
      return this.type_.equals(x.type_) && this.expr_.equals(x.expr_);
    }
    return false;
  }

  public int hashCode() {
    return 37*(this.type_.hashCode())+this.expr_.hashCode();
  }


}
