#include <simplecpp>
bool lab_marks (int &total_marks)
{
    int n, answer, sum = 0, n2 = 0, n1 = 0, n0 = 0;
    repeat(7)
     {  // keeping track of no. of 0s 1s and 2s
       cin >> n;
       if (n == 2) n2 += 1;
       else if (n == 1) n1 += 1;
       else n0 += 1;
       sum += n;

     }
     

    if ( n0 >= 2)
        answer = sum;
    else if  ( ( n0 == 1) && (n1 >= 1) ) // one zero and atleast one 1
         answer = sum - 1;
    else if ( (n0 == 1) && (n1 == 0))    // six 2s are added
         answer = sum - 2;
    else if ( (n0 == 0) && (n1 >= 2))    // no 0s and atleast two 1s
         answer = sum - 2;
    else if ( (n0 == 0) && (n1 == 1))    // only one 1 there
         answer = sum - 3;
    else
         answer = sum - 4;

    total_marks += answer;
    int plag;
    cin >> plag;
    if ( plag == 1)
          return true;
    else
          return false;

}

bool quiz_marks( int &total_marks)
{
  int n, sum = 0, min = 3;  // any value would always be less than 3
  repeat(6)
    {   cin >> n;
        if (n < min)
            { min = n;}
        sum += n;
    }
  sum = sum - min;
  total_marks += sum;
  int plag;
  cin >> plag;
  if (plag == 1)
     return true;
  else
     return false;

}
int midsem_marks()
{   
    int midsem_marks;
    cin >> midsem_marks;
    return midsem_marks;
}

int endsem_marks()
{   
    int endsem_marks;
    cin >> endsem_marks;
    return endsem_marks;
}

bool project_marks (int &total_marks)
{
    int marks, plag;
    cin >> marks;
    if (total_marks > 80)
         total_marks += marks;
    cin >> plag;
    if (plag == 1)
         return true;
    else
         return false;

}
int calculate_grade(int total_marks, bool plag_in_quiz, bool plag_in_lab, bool plag_in_project)
{
    if ( plag_in_quiz == true)
        total_marks -= 10;
    if ( plag_in_lab == true)
         total_marks -= 10;
    if ( plag_in_project == true)
         total_marks -= 10;

// grades obtained
    if (  ( (total_marks % 10 ) == 0) && (total_marks > 30) )
         return ( total_marks / 10);
    if ( ( (total_marks % 10 ) != 0) && (total_marks > 30) )
         return  ( ( total_marks / 10 ) + 1 );
    if (total_marks <= 30)
         return 0;
}
 
