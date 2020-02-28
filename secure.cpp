#include <iostream> 

using namespace std;

int main()

{ 
     cout<<"SECURE YOUR TEXT \n\n\n";
     int i,k;
     char a[100];
     cout<<"Enter 1 for encryption \n";
     cout<<"Enter 2 for decryption \n";
     cin>> k;
     cout<<"please enter text : " ;
     cin>> a;
     switch(k){
      case 1:
        for(i=0; (i<100 && a[i]!= '\0'); i++)
      a[i]+=2;
      cout<<"encrypted text : "<< a <<end1;
      break; 
       case 2:
        for( i=0; (i<100 && a[i]!= '\0'); i++)
      a[i]-=2;
       cout<<" decrypted text : " << a <<end1;
       break;
        default : 
         cout<< "invalid input! choose 1 or 2 only.";
      }
}      
     
