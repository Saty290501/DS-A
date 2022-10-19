#include <iostream>
using namespace std;
 
class Rectangle {
    int length;
    int width;
public:
   friend void Area( Rectangle R );
   void setWidth( int len,int wid ){
       length = len;
       width = wid;
   }
};

// Note: printWidth() is not a member function of any class.
void Area( Rectangle R ) {
   /* Because printWidth() is a friend of Box, it can
   directly access any member of this class */
   cout << "Width of box : " << R.width*R.length <<endl;
}

int main( ) {
   Rectangle R;
   R.setWidth(5,10);
   Area( R );
   return 0;
}