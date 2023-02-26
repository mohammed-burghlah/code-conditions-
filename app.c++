#include <iostream>
using namespace std ;
int main() {
int a,b,c ; //declere 
cout << " give the number (a) " << endl ; //assignment and input
cin >> a ; 
cout << " give the number (b) " << endl ;
cin >> b ;
cout << " give the number (c) " << endl ;
cin >> c ;
if (a>b & a>c)
    cout << "a is the bigger one " << endl;

else if (b>a & b>c)
    cout << "b is the bigger one " << endl;
else if (a=b=c)
    cout<< "the three numbres are equal" << endl;
else
    cout << "c is the bigger one " << endl;
}