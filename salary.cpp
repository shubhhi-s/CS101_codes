#include <simplecpp>
main_program{
double basic, HRA, DA, gross;
cin >> basic;
if (basic <= 10000)
   HRA = 0.2*basic ,
   DA = 0.8*basic;
else if ( (basic > 10000) && ( basic <= 20000) )
   HRA = 0.25*basic , 
   DA = 0.9 * basic;
else if ( basic > 20000)
   HRA = 0.3* basic,
   DA = 0.95* basic;
else 
   HRA = 0, DA = 0, gross = 0;

gross = basic + HRA + DA;
cout << gross << endl;

}