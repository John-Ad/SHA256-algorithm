#include "SHA256.h"

int main(){
    SHA256 sha256;
    string in="hello world";

    cout<<sha256.getHash((unsigned char*)in.c_str(),in.length())<<endl;
}




