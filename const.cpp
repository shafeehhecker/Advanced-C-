#include <iostream>
//const
// -A compile time constraint that an object can not be modified
int main() {
    const int i= 9;
 //   i=6;  error: assignment of read-only variable 'i'
    const int *p1 = &i;  // data is const ,pointer is not
 //  *p1 =5;  error: assignment of read-only location '* p1'
    p1++ ; //runs sucessfully
    
    int* const p2; // pointer is const ,data is not
    
    const int* const p3; //data and pointer are both const
    
    int const *p4 = &i;
    
    const_cast<int&>(i)=6; //Get away with const 
    
    int j; //j is not const.
    static_cast<const int&>(j); //This will make j a const integer
    
//Rules of Thumb to be followed with const
//If const is on the left of the * ,data is const
//If const is on the right of *,pointer is const  

/*Uses of const :1)Gaurd against inadvertent write to the variable
2)Self documenting
3)Enable compiler to do more optimization,making code tighter.
4)const means the variable canbe put in ROM
*/
}
