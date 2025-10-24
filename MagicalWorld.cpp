#include <bits/stdc++.h>
using namespace std;

int main() {
	/*
	    Hume second area ko jyada karna hai.
	    Basic approach hai - hume at most 2 operation lagenge.
	    
	    1 opreation mein hum red ke dimension ko 1 to N kuch bhi kar sakte hai.
	    
	    hum try karenge ki uska dimension as small as possible ho.
	    
	    
	*/
    int t;
    cin>>t;
    while(t--){
        int a,b,x;
        cin>>a>>b>>x;
        
        // Dono ka area nikaal lenge.
        int a1 = a*b;
        int a2 = x*x;
        
        // Agar blue ka already jyaada hai to 0 operation.
        if(a2>=a1)
            cout<<0<<endl;
        else{
            // Agar 1st ka chhota wal dimension hi blue ke pure area se jyaada hai tab bade wale ko 1 bhi kar de, phir vbhi jyda hi hoga blue se, isi liye dono ko change karna hoga.
            if(min(a,b)>(x*x))
                cout<<2<<endl;
                
            // nahi to bade wale ko hi 1 kar denge 1 operation mein.
            else
                cout<<1<<endl;
        }
    }
}
