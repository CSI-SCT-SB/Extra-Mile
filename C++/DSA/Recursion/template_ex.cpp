//simple demo to understand template <class T>
#include<iostream>
using namespace std;

template<class T>  //here we are using template class
class number{
    private:
        T a,b;
    public:
        T add();
        void intialise(T a,T b);
        void print();
};

template<class T>  //we have to write this as we are defining a class function which has template class defined on top
void number<T>::print(){
    cout<<a<<" "<<b<<endl;
}

template<class T>  //we have to write this as we are defining a class function which has template class defined on top
void number<T>::intialise(T a,T b){
    this->a=a;
    this->b=b;
}

template<class T>  //we have to write this as we are defining a class function which has template class defined on top
T number<T>::add(){
    T c = a + b;
    return c;
}

int main(){
    number<int> num;  //imp
    number<float> num2; //imp //in these 3 we are using different datatypes 
    number<string> num3;//imp //but we declared a generic type class which works on all three
    num.intialise(5,10);
    num2.intialise(4.5,5.5);
    num3.intialise("abcd","efgh");
    num.print();
    cout<<num.add()<<endl;
    num2.print();
    cout<<num2.add()<<endl;
    num3.print();
    cout<<num3.add()<<endl;
    return 0;
}