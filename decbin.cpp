#include <simplecpp>
// decimal to binary
main_program{
int bin =0,n,rem, i=1;
cin >> n;
while (n != 0) {
    rem = n%2;
    n = n/2;
    bin += rem*i;
    i *= 10;
    

}

cout << bin << endl;
}