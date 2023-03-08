#include <simplecpp>
main_program{
// how to print nth number of a series
// nth odd no.     (2n -1) should be printed
int n;
cin >> n;
int term = -1, i = 1;

while(i <= n){
    term += 2;
    i += 1;

}
cout << term << endl;
}