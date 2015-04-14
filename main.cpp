#include"lab3.h"

int main(){
  lab3 lab3;
  int i,size;
  ifstream opr("file.in",ios::in);
  if(!opr){
    cerr<<"File is not opened"<<endl;
    exit(1);
  }
  opr>>size;
  vector <int> a(size);
  for(i=0;i<size;i++){
    opr>>a.at(i);
  }
  lab3.sort(a,size);
}
