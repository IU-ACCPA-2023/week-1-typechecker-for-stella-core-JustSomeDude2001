//
// Created by justsomedude on 23.03.23.
//

#include "MyVisitor.h"
#include <iostream>

namespace Stella
{
    void MyVisitor::visitProgram(Program *t) {} //abstract class
    void MyVisitor::visitLanguageDecl(LanguageDecl *t) {} //abstract class
    void MyVisitor::visitExtension(Extension *t) {} //abstract class
    void MyVisitor::visitDecl(Decl *t) {} //abstract class
    void MyVisitor::visitLocalDecl(LocalDecl *t) {} //abstract class
    void MyVisitor::visitAnnotation(Annotation *t) {} //abstract class
    void MyVisitor::visitParamDecl(ParamDecl *t) {} //abstract class
    void MyVisitor::visitReturnType(ReturnType *t) {} //abstract class
    void MyVisitor::visitThrowType(ThrowType *t) {} //abstract class
    void MyVisitor::visitExpr(Expr *t) {} //abstract class
    void MyVisitor::visitMatchCase(MatchCase *t) {} //abstract class
    void MyVisitor::visitOptionalTyping(OptionalTyping *t) {} //abstract class
    void MyVisitor::visitPatternData(PatternData *t) {} //abstract class
    void MyVisitor::visitExprData(ExprData *t) {} //abstract class
    void MyVisitor::visitPattern(Pattern *t) {} //abstract class
    void MyVisitor::visitLabelledPattern(LabelledPattern *t) {} //abstract class
    void MyVisitor::visitBinding(Binding *t) {} //abstract class
    void MyVisitor::visitType(Type *t) {} //abstract class
    void MyVisitor::visitVariantFieldType(VariantFieldType *t) {} //abstract class
    void MyVisitor::visitRecordFieldType(RecordFieldType *t) {} //abstract class
    void MyVisitor::visitTyping(Typing *t) {} //abstract class

    void MyVisitor::visitAProgram(AProgram *a_program)
    {
        /* Code For AProgram Goes Here */

        std::cout << "Visiting AProgram...\n";

        if (a_program->languagedecl_) a_program->languagedecl_->accept(this);
        if (a_program->listextension_) a_program->listextension_->accept(this);
        if (a_program->listdecl_) a_program->listdecl_->accept(this);

    }

    void MyVisitor::visitLanguageCore(LanguageCore *language_core)
    {
        /* Code For LanguageCore Goes Here */

        std::cout << "Visiting language core...\n";
    }

    void MyVisitor::visitAnExtension(AnExtension *an_extension)
    {
        /* Code For AnExtension Goes Here */

        if (an_extension->listextensionname_) an_extension->listextensionname_->accept(this);

    }

    void MyVisitor::visitDeclFun(DeclFun *decl_fun)
    {
        /* Code For DeclFun Goes Here */

        if (decl_fun->listannotation_) decl_fun->listannotation_->accept(this);
        visitStellaIdent(decl_fun->stellaident_);
        if (decl_fun->listparamdecl_) decl_fun->listparamdecl_->accept(this);
        if (decl_fun->returntype_) decl_fun->returntype_->accept(this);
        if (decl_fun->throwtype_) decl_fun->throwtype_->accept(this);
        if (decl_fun->listdecl_) decl_fun->listdecl_->accept(this);
        if (decl_fun->expr_) decl_fun->expr_->accept(this);

    }

    void MyVisitor::visitDeclTypeAlias(DeclTypeAlias *decl_type_alias)
    {
        /* Code For DeclTypeAlias Goes Here */

        visitStellaIdent(decl_type_alias->stellaident_);
        if (decl_type_alias->type_) decl_type_alias->type_->accept(this);

    }

    void MyVisitor::visitALocalDecl(ALocalDecl *a_local_decl)
    {
        /* Code For ALocalDecl Goes Here */

        if (a_local_decl->decl_) a_local_decl->decl_->accept(this);

    }

    void MyVisitor::visitInlineAnnotation(InlineAnnotation *inline_annotation)
    {
        /* Code For InlineAnnotation Goes Here */


    }

    void MyVisitor::visitAParamDecl(AParamDecl *a_param_decl)
    {
        /* Code For AParamDecl Goes Here */

        visitStellaIdent(a_param_decl->stellaident_);
        if (a_param_decl->type_) a_param_decl->type_->accept(this);

    }

    void MyVisitor::visitNoReturnType(NoReturnType *no_return_type)
    {
        /* Code For NoReturnType Goes Here */


    }

    void MyVisitor::visitSomeReturnType(SomeReturnType *some_return_type)
    {
        /* Code For SomeReturnType Goes Here */

        if (some_return_type->type_) some_return_type->type_->accept(this);

    }

    void MyVisitor::visitNoThrowType(NoThrowType *no_throw_type)
    {
        /* Code For NoThrowType Goes Here */


    }

    void MyVisitor::visitSomeThrowType(SomeThrowType *some_throw_type)
    {
        /* Code For SomeThrowType Goes Here */

        if (some_throw_type->listtype_) some_throw_type->listtype_->accept(this);

    }

    void MyVisitor::visitIf(If *if_)
    {
        /* Code For If Goes Here */

        if (if_->expr_1) if_->expr_1->accept(this);
        if (if_->expr_2) if_->expr_2->accept(this);
        if (if_->expr_3) if_->expr_3->accept(this);

    }

    void MyVisitor::visitLet(Let *let)
    {
        /* Code For Let Goes Here */

        visitStellaIdent(let->stellaident_);
        if (let->expr_1) let->expr_1->accept(this);
        if (let->expr_2) let->expr_2->accept(this);

    }

    void MyVisitor::visitLessThan(LessThan *less_than)
    {
        /* Code For LessThan Goes Here */

        if (less_than->expr_1) less_than->expr_1->accept(this);
        if (less_than->expr_2) less_than->expr_2->accept(this);

    }

    void MyVisitor::visitLessThanOrEqual(LessThanOrEqual *less_than_or_equal)
    {
        /* Code For LessThanOrEqual Goes Here */

        if (less_than_or_equal->expr_1) less_than_or_equal->expr_1->accept(this);
        if (less_than_or_equal->expr_2) less_than_or_equal->expr_2->accept(this);

    }

    void MyVisitor::visitGreaterThan(GreaterThan *greater_than)
    {
        /* Code For GreaterThan Goes Here */

        if (greater_than->expr_1) greater_than->expr_1->accept(this);
        if (greater_than->expr_2) greater_than->expr_2->accept(this);

    }

    void MyVisitor::visitGreaterThanOrEqual(GreaterThanOrEqual *greater_than_or_equal)
    {
        /* Code For GreaterThanOrEqual Goes Here */

        if (greater_than_or_equal->expr_1) greater_than_or_equal->expr_1->accept(this);
        if (greater_than_or_equal->expr_2) greater_than_or_equal->expr_2->accept(this);

    }

    void MyVisitor::visitEqual(Equal *equal)
    {
        /* Code For Equal Goes Here */

        if (equal->expr_1) equal->expr_1->accept(this);
        if (equal->expr_2) equal->expr_2->accept(this);

    }

    void MyVisitor::visitNotEqual(NotEqual *not_equal)
    {
        /* Code For NotEqual Goes Here */

        if (not_equal->expr_1) not_equal->expr_1->accept(this);
        if (not_equal->expr_2) not_equal->expr_2->accept(this);

    }

    void MyVisitor::visitTypeAsc(TypeAsc *type_asc)
    {
        /* Code For TypeAsc Goes Here */

        if (type_asc->expr_) type_asc->expr_->accept(this);
        if (type_asc->type_) type_asc->type_->accept(this);

    }

    void MyVisitor::visitAbstraction(Abstraction *abstraction)
    {
        /* Code For Abstraction Goes Here */

        if (abstraction->listparamdecl_) abstraction->listparamdecl_->accept(this);
        if (abstraction->expr_) abstraction->expr_->accept(this);

    }

    void MyVisitor::visitTuple(Tuple *tuple)
    {
        /* Code For Tuple Goes Here */

        if (tuple->listexpr_) tuple->listexpr_->accept(this);

    }

    void MyVisitor::visitRecord(Record *record)
    {
        /* Code For Record Goes Here */

        if (record->listbinding_) record->listbinding_->accept(this);

    }

    void MyVisitor::visitVariant(Variant *variant)
    {
        /* Code For Variant Goes Here */

        visitStellaIdent(variant->stellaident_);
        if (variant->exprdata_) variant->exprdata_->accept(this);

    }

    void MyVisitor::visitMatch(Match *match)
    {
        /* Code For Match Goes Here */

        if (match->expr_) match->expr_->accept(this);
        if (match->listmatchcase_) match->listmatchcase_->accept(this);

    }

    void MyVisitor::visitList(List *list)
    {
        /* Code For List Goes Here */

        if (list->listexpr_) list->listexpr_->accept(this);

    }

    void MyVisitor::visitAdd(Add *add)
    {
        /* Code For Add Goes Here */

        if (add->expr_1) add->expr_1->accept(this);
        if (add->expr_2) add->expr_2->accept(this);

    }

    void MyVisitor::visitLogicOr(LogicOr *logic_or)
    {
        /* Code For LogicOr Goes Here */

        if (logic_or->expr_1) logic_or->expr_1->accept(this);
        if (logic_or->expr_2) logic_or->expr_2->accept(this);

    }

    void MyVisitor::visitMultiply(Multiply *multiply)
    {
        /* Code For Multiply Goes Here */

        if (multiply->expr_1) multiply->expr_1->accept(this);
        if (multiply->expr_2) multiply->expr_2->accept(this);

    }

    void MyVisitor::visitLogicAnd(LogicAnd *logic_and)
    {
        /* Code For LogicAnd Goes Here */

        if (logic_and->expr_1) logic_and->expr_1->accept(this);
        if (logic_and->expr_2) logic_and->expr_2->accept(this);

    }

    void MyVisitor::visitApplication(Application *application)
    {
        /* Code For Application Goes Here */

        if (application->expr_) application->expr_->accept(this);
        if (application->listexpr_) application->listexpr_->accept(this);

    }

    void MyVisitor::visitConsList(ConsList *cons_list)
    {
        /* Code For ConsList Goes Here */

        if (cons_list->expr_1) cons_list->expr_1->accept(this);
        if (cons_list->expr_2) cons_list->expr_2->accept(this);

    }

    void MyVisitor::visitHead(Head *head)
    {
        /* Code For Head Goes Here */

        if (head->expr_) head->expr_->accept(this);

    }

    void MyVisitor::visitIsEmpty(IsEmpty *is_empty)
    {
        /* Code For IsEmpty Goes Here */

        if (is_empty->expr_) is_empty->expr_->accept(this);

    }

    void MyVisitor::visitTail(Tail *tail)
    {
        /* Code For Tail Goes Here */

        if (tail->expr_) tail->expr_->accept(this);

    }

    void MyVisitor::visitSucc(Succ *succ)
    {
        /* Code For Succ Goes Here */

        if (succ->expr_) succ->expr_->accept(this);

    }

    void MyVisitor::visitLogicNot(LogicNot *logic_not)
    {
        /* Code For LogicNot Goes Here */

        if (logic_not->expr_) logic_not->expr_->accept(this);

    }

    void MyVisitor::visitPred(Pred *pred)
    {
        /* Code For Pred Goes Here */

        if (pred->expr_) pred->expr_->accept(this);

    }

    void MyVisitor::visitIsZero(IsZero *is_zero)
    {
        /* Code For IsZero Goes Here */

        if (is_zero->expr_) is_zero->expr_->accept(this);

    }

    void MyVisitor::visitFix(Fix *fix)
    {
        /* Code For Fix Goes Here */

        if (fix->expr_) fix->expr_->accept(this);

    }

    void MyVisitor::visitNatRec(NatRec *nat_rec)
    {
        /* Code For NatRec Goes Here */

        if (nat_rec->expr_1) nat_rec->expr_1->accept(this);
        if (nat_rec->expr_2) nat_rec->expr_2->accept(this);
        if (nat_rec->expr_3) nat_rec->expr_3->accept(this);

    }

    void MyVisitor::visitFold(Fold *fold)
    {
        /* Code For Fold Goes Here */

        if (fold->type_) fold->type_->accept(this);
        if (fold->expr_) fold->expr_->accept(this);

    }

    void MyVisitor::visitUnfold(Unfold *unfold)
    {
        /* Code For Unfold Goes Here */

        if (unfold->type_) unfold->type_->accept(this);
        if (unfold->expr_) unfold->expr_->accept(this);

    }

    void MyVisitor::visitDotRecord(DotRecord *dot_record)
    {
        /* Code For DotRecord Goes Here */

        if (dot_record->expr_) dot_record->expr_->accept(this);
        visitStellaIdent(dot_record->stellaident_);

    }

    void MyVisitor::visitDotTuple(DotTuple *dot_tuple)
    {
        /* Code For DotTuple Goes Here */

        if (dot_tuple->expr_) dot_tuple->expr_->accept(this);
        visitInteger(dot_tuple->integer_);

    }

    void MyVisitor::visitConstTrue(ConstTrue *const_true)
    {
        /* Code For ConstTrue Goes Here */


    }

    void MyVisitor::visitConstFalse(ConstFalse *const_false)
    {
        /* Code For ConstFalse Goes Here */


    }

    void MyVisitor::visitConstInt(ConstInt *const_int)
    {
        /* Code For ConstInt Goes Here */

        visitInteger(const_int->integer_);

    }

    void MyVisitor::visitVar(Var *var)
    {
        /* Code For Var Goes Here */

        visitStellaIdent(var->stellaident_);

    }

    void MyVisitor::visitAMatchCase(AMatchCase *a_match_case)
    {
        /* Code For AMatchCase Goes Here */

        if (a_match_case->pattern_) a_match_case->pattern_->accept(this);
        if (a_match_case->expr_) a_match_case->expr_->accept(this);

    }

    void MyVisitor::visitNoTyping(NoTyping *no_typing)
    {
        /* Code For NoTyping Goes Here */


    }

    void MyVisitor::visitSomeTyping(SomeTyping *some_typing)
    {
        /* Code For SomeTyping Goes Here */

        if (some_typing->type_) some_typing->type_->accept(this);

    }

    void MyVisitor::visitNoPatternData(NoPatternData *no_pattern_data)
    {
        /* Code For NoPatternData Goes Here */


    }

    void MyVisitor::visitSomePatternData(SomePatternData *some_pattern_data)
    {
        /* Code For SomePatternData Goes Here */

        if (some_pattern_data->pattern_) some_pattern_data->pattern_->accept(this);

    }

    void MyVisitor::visitNoExprData(NoExprData *no_expr_data)
    {
        /* Code For NoExprData Goes Here */


    }

    void MyVisitor::visitSomeExprData(SomeExprData *some_expr_data)
    {
        /* Code For SomeExprData Goes Here */

        if (some_expr_data->expr_) some_expr_data->expr_->accept(this);

    }

    void MyVisitor::visitPatternVariant(PatternVariant *pattern_variant)
    {
        /* Code For PatternVariant Goes Here */

        visitStellaIdent(pattern_variant->stellaident_);
        if (pattern_variant->patterndata_) pattern_variant->patterndata_->accept(this);

    }

    void MyVisitor::visitPatternTuple(PatternTuple *pattern_tuple)
    {
        /* Code For PatternTuple Goes Here */

        if (pattern_tuple->listpattern_) pattern_tuple->listpattern_->accept(this);

    }

    void MyVisitor::visitPatternRecord(PatternRecord *pattern_record)
    {
        /* Code For PatternRecord Goes Here */

        if (pattern_record->listlabelledpattern_) pattern_record->listlabelledpattern_->accept(this);

    }

    void MyVisitor::visitPatternList(PatternList *pattern_list)
    {
        /* Code For PatternList Goes Here */

        if (pattern_list->listpattern_) pattern_list->listpattern_->accept(this);

    }

    void MyVisitor::visitPatternCons(PatternCons *pattern_cons)
    {
        /* Code For PatternCons Goes Here */

        if (pattern_cons->pattern_1) pattern_cons->pattern_1->accept(this);
        if (pattern_cons->pattern_2) pattern_cons->pattern_2->accept(this);

    }

    void MyVisitor::visitPatternFalse(PatternFalse *pattern_false)
    {
        /* Code For PatternFalse Goes Here */


    }

    void MyVisitor::visitPatternTrue(PatternTrue *pattern_true)
    {
        /* Code For PatternTrue Goes Here */


    }

    void MyVisitor::visitPatternInt(PatternInt *pattern_int)
    {
        /* Code For PatternInt Goes Here */

        visitInteger(pattern_int->integer_);

    }

    void MyVisitor::visitPatternSucc(PatternSucc *pattern_succ)
    {
        /* Code For PatternSucc Goes Here */

        if (pattern_succ->pattern_) pattern_succ->pattern_->accept(this);

    }

    void MyVisitor::visitPatternVar(PatternVar *pattern_var)
    {
        /* Code For PatternVar Goes Here */

        visitStellaIdent(pattern_var->stellaident_);

    }

    void MyVisitor::visitALabelledPattern(ALabelledPattern *a_labelled_pattern)
    {
        /* Code For ALabelledPattern Goes Here */

        visitStellaIdent(a_labelled_pattern->stellaident_);
        if (a_labelled_pattern->pattern_) a_labelled_pattern->pattern_->accept(this);

    }

    void MyVisitor::visitABinding(ABinding *a_binding)
    {
        /* Code For ABinding Goes Here */

        visitStellaIdent(a_binding->stellaident_);
        if (a_binding->expr_) a_binding->expr_->accept(this);

    }

    void MyVisitor::visitTypeFun(TypeFun *type_fun)
    {
        /* Code For TypeFun Goes Here */

        if (type_fun->listtype_) type_fun->listtype_->accept(this);
        if (type_fun->type_) type_fun->type_->accept(this);

    }

    void MyVisitor::visitTypeRec(TypeRec *type_rec)
    {
        /* Code For TypeRec Goes Here */

        visitStellaIdent(type_rec->stellaident_);
        if (type_rec->type_) type_rec->type_->accept(this);

    }

    void MyVisitor::visitTypeSum(TypeSum *type_sum)
    {
        /* Code For TypeSum Goes Here */

        if (type_sum->type_1) type_sum->type_1->accept(this);
        if (type_sum->type_2) type_sum->type_2->accept(this);

    }

    void MyVisitor::visitTypeTuple(TypeTuple *type_tuple)
    {
        /* Code For TypeTuple Goes Here */

        if (type_tuple->listtype_) type_tuple->listtype_->accept(this);

    }

    void MyVisitor::visitTypeRecord(TypeRecord *type_record)
    {
        /* Code For TypeRecord Goes Here */

        if (type_record->listrecordfieldtype_) type_record->listrecordfieldtype_->accept(this);

    }

    void MyVisitor::visitTypeVariant(TypeVariant *type_variant)
    {
        /* Code For TypeVariant Goes Here */

        if (type_variant->listvariantfieldtype_) type_variant->listvariantfieldtype_->accept(this);

    }

    void MyVisitor::visitTypeList(TypeList *type_list)
    {
        /* Code For TypeList Goes Here */

        if (type_list->type_) type_list->type_->accept(this);

    }

    void MyVisitor::visitTypeBool(TypeBool *type_bool)
    {
        /* Code For TypeBool Goes Here */


    }

    void MyVisitor::visitTypeNat(TypeNat *type_nat)
    {
        /* Code For TypeNat Goes Here */


    }

    void MyVisitor::visitTypeUnit(TypeUnit *type_unit)
    {
        /* Code For TypeUnit Goes Here */


    }

    void MyVisitor::visitTypeVar(TypeVar *type_var)
    {
        /* Code For TypeVar Goes Here */

        visitStellaIdent(type_var->stellaident_);

    }

    void MyVisitor::visitAVariantFieldType(AVariantFieldType *a_variant_field_type)
    {
        /* Code For AVariantFieldType Goes Here */

        visitStellaIdent(a_variant_field_type->stellaident_);
        if (a_variant_field_type->optionaltyping_) a_variant_field_type->optionaltyping_->accept(this);

    }

    void MyVisitor::visitARecordFieldType(ARecordFieldType *a_record_field_type)
    {
        /* Code For ARecordFieldType Goes Here */

        visitStellaIdent(a_record_field_type->stellaident_);
        if (a_record_field_type->type_) a_record_field_type->type_->accept(this);

    }

    void MyVisitor::visitATyping(ATyping *a_typing)
    {
        /* Code For ATyping Goes Here */

        if (a_typing->expr_) a_typing->expr_->accept(this);
        if (a_typing->type_) a_typing->type_->accept(this);

    }


    void MyVisitor::visitListStellaIdent(ListStellaIdent *list_stella_ident)
    {
        for (ListStellaIdent::iterator i = list_stella_ident->begin() ; i != list_stella_ident->end() ; ++i)
        {
            visitStellaIdent(*i) ;
        }
    }

    void MyVisitor::visitListExtensionName(ListExtensionName *list_extension_name)
    {
        for (ListExtensionName::iterator i = list_extension_name->begin() ; i != list_extension_name->end() ; ++i)
        {
            visitExtensionName(*i) ;
        }
    }

    void MyVisitor::visitListExtension(ListExtension *list_extension)
    {
        for (ListExtension::iterator i = list_extension->begin() ; i != list_extension->end() ; ++i)
        {
            (*i)->accept(this);
        }
    }

    void MyVisitor::visitListDecl(ListDecl *list_decl)
    {
        for (ListDecl::iterator i = list_decl->begin() ; i != list_decl->end() ; ++i)
        {
            (*i)->accept(this);
        }
    }

    void MyVisitor::visitListLocalDecl(ListLocalDecl *list_local_decl)
    {
        for (ListLocalDecl::iterator i = list_local_decl->begin() ; i != list_local_decl->end() ; ++i)
        {
            (*i)->accept(this);
        }
    }

    void MyVisitor::visitListAnnotation(ListAnnotation *list_annotation)
    {
        for (ListAnnotation::iterator i = list_annotation->begin() ; i != list_annotation->end() ; ++i)
        {
            (*i)->accept(this);
        }
    }

    void MyVisitor::visitListParamDecl(ListParamDecl *list_param_decl)
    {
        for (ListParamDecl::iterator i = list_param_decl->begin() ; i != list_param_decl->end() ; ++i)
        {
            (*i)->accept(this);
        }
    }

    void MyVisitor::visitListExpr(ListExpr *list_expr)
    {
        for (ListExpr::iterator i = list_expr->begin() ; i != list_expr->end() ; ++i)
        {
            (*i)->accept(this);
        }
    }

    void MyVisitor::visitListMatchCase(ListMatchCase *list_match_case)
    {
        for (ListMatchCase::iterator i = list_match_case->begin() ; i != list_match_case->end() ; ++i)
        {
            (*i)->accept(this);
        }
    }

    void MyVisitor::visitListPattern(ListPattern *list_pattern)
    {
        for (ListPattern::iterator i = list_pattern->begin() ; i != list_pattern->end() ; ++i)
        {
            (*i)->accept(this);
        }
    }

    void MyVisitor::visitListLabelledPattern(ListLabelledPattern *list_labelled_pattern)
    {
        for (ListLabelledPattern::iterator i = list_labelled_pattern->begin() ; i != list_labelled_pattern->end() ; ++i)
        {
            (*i)->accept(this);
        }
    }

    void MyVisitor::visitListBinding(ListBinding *list_binding)
    {
        for (ListBinding::iterator i = list_binding->begin() ; i != list_binding->end() ; ++i)
        {
            (*i)->accept(this);
        }
    }

    void MyVisitor::visitListType(ListType *list_type)
    {
        for (ListType::iterator i = list_type->begin() ; i != list_type->end() ; ++i)
        {
            (*i)->accept(this);
        }
    }

    void MyVisitor::visitListVariantFieldType(ListVariantFieldType *list_variant_field_type)
    {
        for (ListVariantFieldType::iterator i = list_variant_field_type->begin() ; i != list_variant_field_type->end() ; ++i)
        {
            (*i)->accept(this);
        }
    }

    void MyVisitor::visitListRecordFieldType(ListRecordFieldType *list_record_field_type)
    {
        for (ListRecordFieldType::iterator i = list_record_field_type->begin() ; i != list_record_field_type->end() ; ++i)
        {
            (*i)->accept(this);
        }
    }


    void MyVisitor::visitInteger(Integer x)
    {
        /* Code for Integer Goes Here */

        std::cout << "Visiting Integer...";
    }

    void MyVisitor::visitChar(Char x)
    {
        /* Code for Char Goes Here */

        std::cout << "Visiting Char...";
    }

    void MyVisitor::visitDouble(Double x)
    {
        /* Code for Double Goes Here */
    }

    void MyVisitor::visitString(String x)
    {
        /* Code for String Goes Here */
    }

    void MyVisitor::visitIdent(Ident x)
    {
        /* Code for Ident Goes Here */
    }

    void MyVisitor::visitStellaIdent(StellaIdent x)
    {
        /* Code for StellaIdent Goes Here */
    }

    void MyVisitor::visitExtensionName(ExtensionName x)
    {
        /* Code for ExtensionName Goes Here */
    }


}