#include<iostream>
#include<map>
using namespace std;

int main() {
    int t;
    cin>>t;
    for(int i=0; i<t; i++){
        int l;
        cin>>l;
        map<int, bool> hm;
        int num;
        for(int j=0; j<l; j++){
            cin>>num;
            hm[num]=1;
        }
        int q;
        cin>>q;
        int search;
        for(int k=0;k<q; k++){
            cin>>search;
            if(hm.count(search)){
                cout<<"Yes"<<endl;
            }else{
                cout<<"No"<<endl;
            }
        }
    }
	return 0;
}
