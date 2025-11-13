//  m-1   not increament

#include<bits/stdc++.h>
using namespace std;

int main(){
  vector<int> v={1,2,3,4,5,6};
  for(int value:v){
   value++;
  }
  for(int value:v){
   cout<<value<<" ";
  }

}



// # Explanation
// for (int value : v) means:
// 👉 each element of v is copied into a local variable value.
// So when you do value++, you are modifying the copy, not the actual element in v.
// Therefore, v remains unchanged.

⚙️ Output
1 2 3 4 5 6







//    m-2  increament

#include<bits/stdc++.h>
using namespace std;

int main(){
  vector<int> v={1,2,3,4,5,6};
  for(int &value:v){
   value++;
  }
  for(int value:v){
   cout<<value<<" ";
  }

}

// If you want to modify the original vector, you must use a reference:

#Output
2 3 4 5 6 7
