// This is the code to find the maximum of four numbers using the concept of functions.


// Author : Gulshan Yadav
// Github : https://github.com/gulshan214



#include <iostream>

using namespace std;


// Here we're coding the main function which will give the maximum of 4 provided numbers. 

int max (int a, int b, int c, int d){

    int max_ab, max_cd;

    if (a>b){
    max_ab = a;}

    else {max_ab = b;} 

    if (c>d){
    max_cd = c;}

    else {max_cd = d;} 

    if (max_ab> max_cd){

    return max_ab;
    }

    else {return max_cd;};


}

int main() {

    int p, q, r, s;

// Taking input of the numberes from the user 

    cin>> p;
    cin>> q;
    cin>> r;
    cin>> s;
    
cout << max(p,q,r,s);

    return 0;


}


