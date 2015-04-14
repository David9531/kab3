#include"lab3.h"

void lab3::sort(vector <int> a, int size){
  int i,n,mass;
  for(i=1;i<size;i++){
    mass=a.at(i);
    n=i;
    while(n>0 && a.at(n-1)>mass){
      a.at(n)=a.at(n-1);
      --n;
    }
    a.at(n)=mass;
  }
  for(i=0;i<size;i++){
    cout<<a.at(i)<<"\t";
  }
  cout<<endl;
  add(a,size);
}

void lab3::add(vector <int> a, int size){
  int i,kg;
  for(i=size-1,kg=0;i>size-6;i--){
    kg=kg+a.at(i);
  }
  cout<<kg<<endl;
}

 
  
