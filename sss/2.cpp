
// // M-1 error

#include<bits/stdc++.h>
using namespace std;

  class complex1{
  
      private:
        int a;
        int b;
     private:
       void set_data(int x,int y){
         a=x;
         b=y;
       }
      void show_data(){
        cout<<a<<endl<<b;
      }
      complex1 add(complex1 c){
        complex1 temp;
        temp.a=a+c.a;
        temp.b=b+c.b;
        return temp;
   
       }
  };

int main(){
    complex1 c1,c2,c3;
    c1.set_data(3,6);
    c2.set_data(2,4);
    c3=c1.add(c2);
    c3.show_data();

}

   

//    // M-2 
   #include<bits/stdc++.h>
using namespace std;

  class complex1{
  
      private:
        int a;
        int b;
     private:
       void set_data(int x,int y);
      void show_data();
      complex1 add(complex1 c){
        complex1 temp;
        temp.a=a+c.a;
        temp.b=b+c.b;
        return temp;
   
       }
  };
   void complex1::set_data(int x,int y){
         a=x;
         b=y;
       }
  void complex1::show_data(){
        cout<<a<<endl<<b;
      }

int main(){
    complex1 c1,c2,c3;
    c1.set_data(3,6);
    c2.set_data(2,4);
    c3=c1.add(c2);
    c3.show_data();

}

   



   // M-3 
   #include<bits/stdc++.h>
using namespace std;

  class complex1{
  
      private:
        int a;
        int b;
     private:
       void set_data(int x,int y);
      void show_data();
      complex1 operator+(complex1 x,complex1 y){
        complex1 temp;
        temp.a=x.a+y.a;
        temp.b=x.b+y.b;
        return temp;
   
       }

        complex1 operator-(){
        complex1 temp;
        temp.a=-a;
        temp.b=-b;
        return temp;
   
       }
  };
   void complex1::set_data(int x,int y){
         a=x;
         b=y;
       }
  void complex1::show_data(){
        cout<<a<<endl<<b;
      }

int main(){
    complex1 c1,c2,c3;
    c1.set_data(3,6);
    c2.set_data(2,4);
    c3=c1+c2;
    // OR
    // c3=operator+(c1,c2);
    c3.show_data();
    c3=-c2;
    // OR
    c3=c2.operator-();

}

