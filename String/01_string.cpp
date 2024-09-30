#include<iostream>
using namespace std;

int main(){




// char arr []={'a','p','p','l','e'};
// for(int i=0;i<5;i++){

// cout<<arr[i];
// }



// char arr[20] ;
// cout<<"Enter arr";
// cin>>arr;
// cout<<arr <<endl;
// arr[2] ='\0';
// cout<<arr;





// string


// string s ="Apple";
// string s;
// cout<<"Enter string"; // cin space tab enter ke click hone ke bad value read nhi karta
//thats why we use getline


// getline(cin,s);
// cout <<s <<endl;
// cout<<"Size of string"<<s.size();


// string s1 ;
// cout<<"Enter second string" <<endl;
// getline(cin,s1);

// string s3 = s+s1;
// cout<<"Combined string"<<s3 <<endl;

// string s3 = s.append(s1);
//  cout<<"Combined string :"<<s3 <<endl;
// s3.push_back('p');
// cout<<s3<<endl;
// s3.pop_back();
// cout<<s3<<endl;



// string s4 = "I am very \"good\"boy ";
// // \ this is a escape character using writing double quotes
// cout <<s4;



// reverse a string



// string reverse = "hello"    ;
// int start = 0;
// int end = reverse.size()-1;
// while (start<end)

// {
//     /* code */
//     swap(reverse[start],reverse[end]);
//     start++;
//     end--;
// }

// cout<<reverse <<endl;


// int size =0;
// while (reverse[size]!='\0')
// {
//     /* code */
//     size++;

// }
// cout<<size;

// find string is palindrone or not

string palindrone = "namuan";
int start =0;
int end = palindrone.size()-1;
while (start<end)
{
    /* code */
    if(palindrone[start]!=palindrone[end]){
        cout<<"Not palindrone";
        return 0;
}
start++;
end--;
}

cout<<"palindrone";
    return 0;
}