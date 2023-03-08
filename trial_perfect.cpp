// perfect number
// aim to find all the divisors less than n and add them
# include <simplecpp>
int perfect(int n) 
{ int sum = 1,i = 2;    // 1 is already considered a factor of all - trivial case
  while(true)          // loop is always entered
      {
        if (i >= n )    // as soon as i = n it gets out of loop
           break;
        if (n % i == 0){ sum += i ;}    // all factors less than n are being added to sum
        i += 1;
       
      }
    cout << sum << endl;
  if (sum == n)
     return  1;
  else 
      return 0;         // returns 0 if sum != n and 1 when sum = n

}   // after return no more commands are followed. I did cout after return, it didn't work

main_program{
    int n; 
    cin >> n;
    cout << perfect(n) << endl;
}