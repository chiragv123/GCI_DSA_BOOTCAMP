#include<iostream>
using namespace std;



// star pattern 1
// int main(){
//     int i,j;
//     for(i=0;i<=5;i++){
//         for(j=0;j<=5;j++){
//             if(j<=i){
//                 cout << "*" ;

//             }
//             else{
//                 cout<<" " ;
//             }
    
//         }
//         printf("\n");

//     }
     
//     return 0;
    
// }


// star pattern 2

// int main(){
//     int i,j;

//     for(i=1;i<=5;i++){
//         for(j=1;j<=5;j++){
//             if(j>=6-i){
//             cout << "*" ;
            
//             }else{
//                cout << " " ;
//             }


//         }printf("\n");

//     }
// }




// star pattern 3


// int main(){
//     int i,j;
//     for(i=1;i<=7;i++){
//         for(j=1;j<=7;j++){
//             if(j>=i){
//                 cout << "*";

//             }else{
//                 cout << " ";

//             }
//         }
//         cout << endl;
//     }
// }



// star pattern 4

// int main(){
//     int i,j;
//         for(i=1;i<=7;i++){
//         for(j=1;j<=7;j++){
//             if(j<=8-i){
//                 cout << "*";

//             }else{
//                 cout << " ";

//             }
//         }
//         cout << endl;
//     }
// }

    




// star pattern 5

// int main(){
//     int i,j;
//     for(i=1;i<=5;i++){
//         for(j=1;j<=9;j++){
//             if(j>=6-i && j<=4+i){
//                 cout << "*";

//             }
//             else{
//                 cout << " ";
//             }
//         }
//         cout << endl;
//     }
// }


// star pattern 6

// int main(){
//     int i,j,k;
//     for(i=1;i<=5;i++){
//         k=1;
//         for(j=1;j<=9;j++){
//             if(j>=6-i&&j<=4+i&&k){
//                 cout << "*";
//                 k=0;
//             }
//             else{
//                 cout << " ";
//                 k=1;

//             }
//         }
//         cout << endl;
//     }
// }


// star pattern 7

// int main(){
//     int i,j;
//     for(i=1;i<=5;i++){
//         for(j=1;j<=9;j++){
//             if(j<6-i || j>4+i){
//                 cout << "*";
//             }else{
//                 cout << " ";

//             }
//         }cout << endl;
//     }
// }


// star pattern 8


// int main(){
//     int i,j,k;
//     for(i=1;i<=4;i++){
//         k=1;
//         for(j=1;j<=7;j++){
//             if(j>=5-i&&j<=3+i){
//                 cout << k ;
//                 j<4?k++:k--;
//             }else{
//                 cout << " ";
//             }
//         }
//         cout << endl;

//     }
// }


// star pattern 9


// int main(){
//     int i,j;
//     char k;
//     for(i=1;i<4;i++){
//         k='A';
//         for(j=1;j<=7;j++){
//             if(j<5-i || j>3+i){
//                 cout<< k;
//                 j<4?k++:;
//             }
//             else{
//                 cout << " ";

//             }
//         }cout << endl ;
//     }


// }




// star pattern 10

//  int main(){
//      int i,j,k=0,row,n;
//      cout << "Enter the number of rows: " << endl;
//      cin >> row ;
//      n=(row+1)/2;
//      for(i=1;i<=row;i++){
//          if(row%2==0){
//              if(i<=n){
//                  k++;}

//                  if(i>n+1){
//                      k--;
//                  }
                 
//          }
//          else
//                  i<=n?k++:k--;
//          }for(j=1;j<=row;j++){
//                if(j>=n+1-k && j<=n-1+k){
//                  cout << "*";

//              }else{
//                  cout << " ";

//              }
//          }cout << endl;

//  }