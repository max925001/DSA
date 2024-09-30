#include<iostream>
using namespace std;
int main(){


// 1111
//2222
//3333
//4444
// for(int i =0;i<4;i++){
//     for(int j=0;j<4 ;j++){
//         cout<<i<< " ";
//     }
//     cout<<endl;
// }

//aaaa
//bbbb
//cccc

// for(int i=0;i<4;i++){
// for(int j=0;j<4;j++){

//    char ch = 'a'+i;
//    //char ch = 'a'+j;
//    cout<<ch;
    
// }
// cout<<endl;



// }



int sum =0;
for(int i=1;i<6;i++){


for(int j=1;j<6;j++){
cout<< j+sum <<" ";
    
}
sum=sum+5;

cout<<endl;


}

//1
//12
//123
//1234

for(int i =1;i<=5;i++){

for(int j=1;j<=i;j++){
cout<<j ;
}
cout<<endl;

}


//1
//22
//333



for(int i =1;i<=5;i++){

for(int j=1;j<=i;j++){
cout<<i ;
}
cout<<endl;

}


//1
//21
//321
//4321

for(int i =1;i<=5;i++){

for(int j=i;j>=1;j--){
cout<<j ;

}
cout<<endl;

}


for(int i =1;i<5;i++){
//char ch = 'a' +i-1;
for(int j=1;j<=i;j++){

char ch = 'a' +i-1;
cout <<ch;

}
cout<<endl;

}



//*****
//****
//***
//**
//*


int n=5;
for(int i=1;i<=5;i++){

for(int j=1;j<=n;j++){
    //cout<<'*';
cout<<j;
}
n--;
cout<<endl;
}



//    *
//   **
//  ***
// ****


//     * 
//    * * 
//   * * * 


for(int i=1; i<=5;i++){

for(int j=1;j<=5-i;j++){
    cout<<" ";


  
}
  for(int k=1;k<=i;k++){
    //cout<<"*";
    cout<<"* ";

}
cout<<endl;

}




//     1
//    22
//   333


for(int i=1; i<=5;i++){

for(int j=1;j<=5-i;j++){
    cout<<" ";


  
}
  for(int k=1;k<=i;k++){
    //cout<<"*";
    cout<<i <<" ";

}
cout<<endl;

}
    return 0;
}