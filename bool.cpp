#include <iostream>
// a bigger number taken
const int MAX_SYMBOLS = 8; MAX_EXPR_SIZE = 25;
struct Symbol
{
    char name;
    bool value;
    bool operator*(Symbol B)
    {
        return(value || B.value);
    }
    bool operator+(Symbol B)
    {
        return(value && B.value);
    }
    bool operator!()
    { 
        return(!value);
    }
};
class BooleanExpr
{ 
    private:
    int symbol_cnt;
    int expr_len;
    Symbol symbols[MAX_SYMBOLS];
    char expr[MAX_EXPR_SIZE];

    public:
    bool result()
    void read_expr(char* expr, int expr_size, char* symbol, int symbol_size)
    {
       symbol_cnt = symbol_size;
       expr_len = expr_size;
       for(int i = 0; i < symbol_cnt; i++)
       {
           symbols[i].name = symbol[i];
       }
       for(int i = 0; i < expr_len; i++)
       {
           this->expr[i] = expr[i]; 
       }

    }
    void print_truth_table()
    {
        
        

    }
    BooleanExpr()
    {
        //This function is the default constructor for the class
        //You can use this to instantiate an empty boolean expression.
    }
};