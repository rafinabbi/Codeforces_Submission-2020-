//
// Created by Rawhatur Rabbi Rafin on 2/20/2020.
//
#include <bits/stdc++.h>
using namespace std;
long long  a;
int sum;
int main(){
    cin>>a;
    if((int)a%2!=0) cout<<"-"<<(long long)ceil(a/2.0);
    else cout<<(a/2);
}
