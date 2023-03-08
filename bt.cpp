#include <iostream>
using namespace std;
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
};
int main()
{
    /*Symbol A, B;
    A.value = 0;
    B.value = 1;
    cout << A*B << " " << A+B << " " << !A << " " << !B << endl;*/
    int expr_size;
    int symbols_size;
    cin >> expr_size >> symbols_size;
    char expr[expr_size];
    char symbols[symbols_size];

    for(int i=0; i<expr_size; i++){
        cin >> expr[i];
    }

    for(int i=0; i<symbols_size; i++){
        cin >> symbols[i];
    }



}