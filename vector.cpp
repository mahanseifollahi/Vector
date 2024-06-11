#include <iostream>
using namespace std;

template<typename T>
class Vector{
private:
T* items;
int size;
public:
Vector(){
    size=0;
    items= new T[size];
}
void pushback(){
    size++;
    T* items2=new T[size];
    for (int  i = 0; i < size-1; i++)
    {
        items2[i]=items[i];
    }cin>>items2[size-1];
    delete[] items;
    items=items2;
}
void swap(int inndex,T value){
if(inndex>=size)
    cout<<"invalid index";
    else
    items[inndex]=value;
}
void popback(){
    size -=1;
    T* items3=new T[size];
    for (int i = 0; i < size; i++)
    {
        items3[i]=items[i];
    } delete[] items;
    items=items3;
}
int getsize(){
    return size;
}
void resize(int newsize){
    size=newsize;
    T *newitems=new T[size];
    for(int i=0;i<size;i++){
        cin>>newitems[i];
    }
       delete[] items;
    items=newitems;
}
void print(){
    for(int i=0;i<size;i++)
    cout<<items[i]<<"  ";
    cout<<endl;
    cout<<"size= "<<size<<endl;
    }
};
int main(){
Vector<float> a;
 a.pushback();
 a.pushback();
a.resize(3);
a.print();
cout<<endl;
a.swap(2,7);
a.print();
cout<<endl;
return 0;
}