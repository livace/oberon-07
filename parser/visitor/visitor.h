#pragma once

class Identifier;
class ProcedureDeclaration;
class ProcedureHeading;
class Type;
class VariableDeclaration;
class Qualident;
class Root;
class Module;
class ConstDeclaration;
class ConstExpression;
class Expression;
class IdentDef;
class Number;
class String;
class ArrayType;
class BaseType;
class FieldList;
class FieldListSequence;
class IdentDefList;
class Integer;
class Length;
class LengthList;
class PointerType;
class QualidentType;
class Real;
class RecordType;
class TypeDeclaration;
class BinaryMinus;
class BinaryPlus;
class Division;
class Factor;
class IntegerDivision;
class LogicalConjunction;
class LogicalDisjunction;
class Modulo;
class Multiplication;
class SimpleExpression;
class SingleTerm;
class Term;
class TermOperation;
class UnaryMinus;
class UnaryPlus;
class FormalParameters;
class FormalType;
class FPSection;
class FPSectionList;
class IdentifierList;
class ProcedureType;
class VariableDeclarationList;

class Visitor {
public:
    virtual void visit(Identifier *identifier) = 0;
    virtual void visit(ProcedureDeclaration *procedure_declaration) = 0; 
    virtual void visit(ProcedureHeading *procedure_heading) = 0; 
    virtual void visit(Type *type) = 0;
    virtual void visit(VariableDeclaration *variable_declaration) = 0;
    virtual void visit(Qualident *qualident) = 0;
    virtual void visit(Root *root) = 0;
    virtual void visit(Module *module) = 0;
    virtual void visit(ConstDeclaration *const_declaration) = 0;
    virtual void visit(ConstExpression *const_expression) = 0;
    virtual void visit(Expression *expression) = 0;
    virtual void visit(IdentDef *identdef) = 0;
    virtual void visit(Number *number) = 0;
    virtual void visit(String *string) = 0;
    virtual void visit(ArrayType *array_type) = 0;
    virtual void visit(BaseType *base_type) = 0;
    virtual void visit(FieldList *field_list) = 0;
    virtual void visit(FieldListSequence *field_list_sequence) = 0;
    virtual void visit(IdentDefList *ident_list) = 0;
    virtual void visit(Integer *integer) = 0;
    virtual void visit(Length *length) = 0;
    virtual void visit(LengthList *length_list) = 0;
    virtual void visit(PointerType *pointer_type) = 0;
    virtual void visit(QualidentType *qualident_type) = 0;
    virtual void visit(Real *real) = 0;
    virtual void visit(RecordType *record_type) = 0;
    virtual void visit(TypeDeclaration *type_declaration) = 0;
    virtual void visit(BinaryMinus *binary_minus) = 0;
    virtual void visit(BinaryPlus *binary_plus) = 0;
    virtual void visit(Division *division) = 0;
    virtual void visit(IntegerDivision *integer_division) = 0;
    virtual void visit(LogicalConjunction *logical_conjunction) = 0;
    virtual void visit(LogicalDisjunction *logical_disjunction) = 0;
    virtual void visit(Modulo *modulo) = 0;
    virtual void visit(Multiplication *multiplication) = 0;
    virtual void visit(SimpleExpression *simple_expression) = 0;
    virtual void visit(SingleTerm *single_term) = 0;
    virtual void visit(Term *term) = 0;
    virtual void visit(TermOperation *term_operation) = 0;
    virtual void visit(UnaryMinus *unary_minus) = 0;
    virtual void visit(UnaryPlus *unary_plus) = 0;
    virtual void visit(FormalParameters *formal_parameters) = 0;
    virtual void visit(FormalType *formal_type) = 0;
    virtual void visit(FPSection *fp_section) = 0;
    virtual void visit(FPSectionList *fp_section_list) = 0;
    virtual void visit(IdentifierList *identifier_list) = 0;
    virtual void visit(ProcedureType *procedure_type) = 0;
    virtual void visit(VariableDeclarationList *variable_declaration_list) = 0;
};
