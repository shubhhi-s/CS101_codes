# include <simplecpp>
main_program{
   int digits = 0;
   int n;
   cin >> n;
   for (int i = 1; i <= n ; i *= 10)
   {
    digits += 1;
   }
   cout << digits << endl;
}