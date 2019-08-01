#include <iostream>
#include <cmath>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--){
	    int n,m;
	    cin>>n>>m;
	    int a[n],b[m];
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	    }
	    for(int i=0;i<m;i++){
	        cin>>b[i];
	    }
	    int t,i=0,g=(m+n);
	    //g=g+(m+n)%2;
	    while(g){
	    	i=0;
	    	while ((i+g)<(m+n)){
	            if(i<n && i+g<n && a[i]>a[i+g]){
	                t=a[i];
	                a[i]=a[i+g];
	                a[i+g]=t;
	            }
	            else if(i<n && i+g>=n && a[i]>b[i+g-n]){
	                t=a[i];
	                a[i]=b[i+g-n];
	                b[i+g-n]=t;
	            }
	            else if(b[i-n]>b[i+g-n]){
	                t=b[i-n];
	                b[i-n]=b[i+g-n];
	                b[i+g-n]=t;
	            }
	            i=i+1;
	        }
	        if(g==1){
	            g=0;
	        }
	        else{
	            g=ceil(g/2);
	        }
	        
	    }
	    for(i=0;i<(n+m);i++){
	        if(i<n){
	            cout<<a[i]<<" ";
	        }
	        else{
	            cout<<b[i-n]<<" ";
	        }
	    }
	    cout<<"\n";
	}
	return 0;
}