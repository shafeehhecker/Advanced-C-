//Program combination of function and class templete
#include <iostream>

using namespace std;
template <typename T>
T square(T x){
    return x*x;
}
template <typename T>
class BoVector{
    T arr[1000];
    int size;
    
 public:
 
    BoVector():size(0){}
    void push(T x) {arr[size]=x;size++; }
    T get(int i) const {return arr[i];}
    int getSize() const {return size;}
    void print() {for(int i=0;i<size;i++){cout<<arr[i]<<endl;}}
    
};


template <typename T>
BoVector<T> operator* (const BoVector<T>& rhs1,BoVector<T>& rhs2){
    BoVector<T> ret;
    for(int i=0;i<rhs1.getSize();i++){
        ret.push(rhs1.get(i)*rhs2.get(i));
    }
    return ret;
}
int main()
{
    BoVector<int> bv;
    bv.push(2);
    bv.push(5);
    bv.push(8);
    bv.push(9);
  //  bv.print();
    
    cout<<"Prnt  squared bv: "<<endl;
    bv=square(bv);
    bv.print();
    return 0;
}
