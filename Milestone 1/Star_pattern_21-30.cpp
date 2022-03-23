#include<iostream>
using namespace std;






// star pattern 21


// int main(){
//     int i,j;
    
//     for(i=1;i<=4;i++){
   
//          for(j=1;j<=8;j++){
//             if(j>=5-i && j<=9-i){
               
//                 cout << "*";
               
//             }
//             else{
//                 cout << " ";

//             }

//         }
//         cout << endl;
//     }
// }



// star pattern 22

// int main(){
//     int i,j,k;
    
//     for(i=1;i<=4;i++){
//         k=59;
//          for(j=1;j<=7;j++){
//             if(j>=5-i && j<=3+i){
              
//                 cout << k;
//                k++;
//                if(j==4){
//                k=75;
//                }
//             }
//             else{
//                 cout << " ";

//             }

//         }
//         cout << endl;
//     }
// }



// star pattern 23

// int main(){
//     int i,j,k,rows;
//     cout << "Enter the number of rows: " << endl;
//     cin >> rows;
//     for(i=1;i<=rows;i++){
//         k=1;
//          for(j=1;j<=rows;j++){
//             if(j<=i){
              
//                 cout << k;
//                k=1-k;
//                }
            
//             else{
//                 cout << " ";

//             }

//         }cout << endl;
        
//     }
// }

// star pattern 24

// int main(){
//     int i,j;
//     for(i=1;i<=7;i++){
//         for(j-1;j<=7;j++){
//             if((i==1 || i==7 || j==1 || j==7) || (i>3 &&i<5 && j>3 && j<5) && (i==3 || i==5 || j==3 || j==5)){
//                 cout << "*";

//             }
//             else{
//                 cout << " ";
//             }
            
//         }
//         cout << endl;
//     }
// }









// star pattern 25

// int main(){
//     int i,j,k=1,n=11,m=0;
//     for(i=1;i<=21;i++){
//         i<n?m++:m--;
//         k=m-1;
//         for(j=1;j<=21;j++){
//             if(j>=n+1-m && j<=n-1+m){
//                 cout << k%10;

//             }
//             else{
//                 cout << " ";
//             }

//         }
//         cout << endl;

//     }
// }



// star pattern 26


// int main(){
//     int i,j;
//     char k;
//     for(i=1;i<=4;i++){
//         k=64+i;
//         for(j=1;j<=4;j++){
//              if(j<=i){
//                  cout<< k--;

//              }
//              else{
//                  cout << " ";

//              }
//         }
//         cout << endl;


//     }
// }



// star pattern 27 

// int main(){
//     int i,j,k;
   
//     for(i=1;i<=4;i++){
//         k=i;
//         for(j=1;j<=7;j++){
//             if(j>=5-i && j<=3+i){
//                 cout<< k;
//                 j<4?k--:k++;
//             }
//             else{
//                 cout<< " ";

//             }
//         }
//         cout << endl;
//     }

// }





// star pattern 28 ( very difficult)

// int mai(){
//     int i,j,x,k=0,p;
//     for(i=1;i<=5;i++){
//         if(i%2==1){
//             k=k+1;

//         }
//         else{
//             k=k+i;
//         }
//         x=1;
//         p=k;

//         for(j=1;j<=9;j++){
//             if(j<=2+i-1){
//                 if(x==1){
//                 cout << p;}
//                 if(i%2){
//                     p++;k++;
//                 }
//                 else{
//                     p--;
//                 }
//             }
//             else{
//                 cout << "*";
//                 x=1-x;
//             }
            



// star pattern 29


int main(){
    int i,j;
    char k=64;
    for(i=1;i<=5;i++){
        k=k+2*(i-1)+1;
        for(j=1;j<=5;j++){
            if(j>=6-i){
                cout << k--;
            }
            else{
                cout << " ";
            }

        }
        cout << endl;
    }
}





// star patten 30 (difficult)


// int main(){
//     int i,j,k,a;
//     cout << "Enter the value of k : " << endl;
//     cin >> k;
//     for(i=1;i<=3*k;i++){
//         for(j=1;j<=2*k-1;j++){
//             if(i<-k){
//                 if(j>=2*k-1){
//                     cout << "*";
//                 }else{
//                     cout << " ";
//                 }

//             }else if(i<=2*k){
//                 a=0;
//                 if(j==k){
//                     cout <<  "|" ;
//                     a=1;}
//                 if(j<(i-k-1)){
//                     cout << "*";
//                     a=1;

//                 }
//                 if(j>-i){
//                     cout << "*";
//                     a=1;
//                 }
//                 if(a==0){
//                     cout << " ";
//                 }
                

//             }
//             else if(i<=2*k){
//                 if(j<3*k+1-i){
//                     cout<< "*";

//                 }
//                 else{
//                     cout << " ";
//                 }
//             }
//         }
//         cout << endl;
//     }
// }


