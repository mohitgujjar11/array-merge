#include <iostream>
using namespace std;
int main(){
int  arr[]={1,2,3,4};
int arr2[]={4,5,6,7};
int merg[8];
for(int i=0;i<8;i++){
  if(i<4){
     merg[i]=arr[i];
  }
  else{
     merg[i]=arr2[i-4];
  }
}

for(int i=0;i<8;i++){
  cout<<merg[i]<<endl;
}

}