// friend  function

// #include<bits/stdc++.h>
// using namespace std;
// class B;
// class A{
//     private:
//        int a;
//     public:
//       friend void fun(A,B);  
     
//   };
// class B{
//      private:
//        int b;
//     public:
//       friend void fun(A,B);  
//   };
// void fun(A o1,B o2){
//     cout<<"sum"<<o1.a+o2.b;
// }

// int main(){
//     A obj1;
//     B obj2;
//     fun(obj1 , obj2);
// }



 // M-2

 #include<bits/stdc++.h>
using namespace std;
class B;
class A{
    private:
       int a;
    public:
      friend void fun(A,B);  
      void set(int y){a=y;}

  };
class B{
     private:
       int b;
    public:
      friend void fun(A,B);
       void set(int y){b=y;}
  
  };
void fun(A o1,B o2){
    cout<<"sum"<<o1.a+o2.b;
}

int main(){
    A obj1;
    B obj2;
    obj1.set(2);
    obj2.set(3);
    fun(obj1 , obj2);
}
