#include <simplecpp>
bool point_on_plane(
    double *p1_x, double *p1_y, double *p1_z,
    double *p2_x, double *p2_y, double *p2_z,
    double *p3_x, double *p3_y, double *p3_z,
    double *q_x, double *q_y, double *q_z,
    double *dist)
{
// 3 points give 2 vectors, perpendicular to plane is obtained by the cross product of these two vectors
   double x1 = *p1_x, y1 = *p1_y, z1 = *p1_z,
          x2 = *p2_x, y2 = *p2_y, z2 = *p2_z,
          x3 = *p3_x, y3 = *p3_y, z3 = *p3_z,
          x  = *q_x,   y =  *q_y, z = *q_z;
// vectors in plane
   double a1 = x2 - x1, b1 = y2 - y1, c1 = z2 - z1,
          a2 = x3 - x2, b2 = y3 - y2, c2 = z3 - z2;
// DRs of the perpendicular to plane
   double a = (b1 * c2) - (c1 * b2),
          b = (c1 * a2) - (a1 * c2),
          c = (a1 * b2) - (b1 * a2);
// satifying plane equation or not
   double plane;
   plane = a * (x - x1) + b * ( y - y1 ) + c * ( z - z1);       
// distance of point from plane
   double d,k;
   k = pow ( ( a*a + b*b + c*c ), 0.5);
   d = abs ( a * (x - x1) + b * ( y - y1 ) + c * ( z - z1) ) / k;
   *dist = d;
   if (plane == 0)
        return true;
   else 
        return false;

}