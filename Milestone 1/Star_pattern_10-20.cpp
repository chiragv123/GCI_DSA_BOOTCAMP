#include<iostream>
using namespace std;


// star pattern 11

// int main(){
//     int i,j,n,rows,k=0;
//     cout << "Enter the number of rows:" << endl;
//     cin >> rows;
//     for(i=1;i<=rows;i++){
//         if(rows%2==0){
//             if(i<rows/2)
//                 k++;
            
//             if(i>rows/2+1)
//                 k--;
//             else
//                 i<=(rows+1)/2?k++:k--;
            
//         }
//         for(j=1;j<=(rows+1)/2;j++){
//             if(j<=k){
//                 cout << " * ";
//             }
//             else{
//                 cout << "  ";

//             }

//         }
//         cout << endl;

//     } 

// }






// star pattern 12

// int main(){
//     int i,j,rows;
//     cout << "Enter the number of rows:" << endl;
//     cin >> rows;
//     for(i=1;i<=rows;i++){
//         for(j=1;j<=2*rows-1;j++){
//             if(j>=i && j<=8-i){
//              cout << " * ";
//             }
//             else{
//                 cout << "  ";
 
// }

//         }cout << endl;
// }
// }




// star pattern 13

// int main(){
//     int i,j,k;
    
//     for(i=1;i<=4;i++){
//         k=i;
//         for(j=1;j<=7;j++){
//             if(j>=5-i && j<=3+i){
//              cout << k ;
//              j<4?k++:k--;
//             }
//             else{
//                 cout << " ";}

//         }
//         cout << endl;
//     }
// }








// star pattern 14




// int main(){
//     int i,j,k;
    
//     for(i=1;i<=7;i++){
//         k=7-i;
//         for(j=1;j<=7;j++){
//             if(j<=8-i){
//              cout << k ;
//              k--;
//             }
//             else{
//                 cout << " ";}

//         }
//         cout << endl;
//     }
// }









// star pattern 15

// int main(){
//     int i,j,a;
//     int k=0;
//     for(i=1;i<=9;i++){
//          i<6?k++:k--;
//          a=1;
//          for(j=1;j<=5;j++){
//              if(j>=6-k){
//                  cout << a;
//                  a++;

//              }
//              else{
//                  cout << " ";
//              }
//          }
//          cout << endl;
//     }
// }










// star pattern 16
 

 
// int main(){
//      int i,j;
//      for(i=1;i<=7;i++){
//          for(j=1;j<=7;j++){
//              if(j==i || j==8-i){
//                  if(i==8-j){
//                      cout << "\\";
                     
//                  }else{
//                      cout <<  "/";

//                  }
             
//              }else{
//                  cout << "*";
             
             
             
//              }
             
//          }
//          cout << endl;
//      }
         
// }







// star pattern 17


// int main(){
//     int i,j,k=0;
//     for(i=1;i<=9;i++){
//         i<=5?k++:k--;
//         for(j=1;j<=9;j++){
//             if(j<6-k || j>4+k){
//                 cout << "*";

//             }
//             else{
//                 cout << " ";

//             }
//         }
//         cout << endl;
//     }
// }




// star pattern 18


// int main(){
//     int i,j;
//     for(i=1;i<=5;i++){
//         for(j=1;j<=9;j++){
//             if(j>=i && j<=10-i){
//                 cout << "*";

//             }
//              else{
//                  cout << " ";

//              }

//         }
//         cout << endl;
//     }
// }



// star pattern 19

// int main(){
//     int i,j;
//     char k;
//     for(i=1;i<=4;i++){
//         k='A';
//          for(j=1;j<=7;j++){
//             if(j>=5-i && j<=3+i){
//                 cout << "*";
//                 j<4?k++:k--;
//             }
//             else{
//                 cout << " ";

//             }

//         }
//         cout << endl;
//     }
// }



// star pattern 20

// int main(){
//     int i,j,k;
    
//     for(i=1;i<=4;i++){
//         k='A';
//          for(j=1;j<=8;j++){
//             if(j>=5-i && j<=4+i){
//                if(j==5){
//                    k='1';
//                 cout << "*";
//                k++;}
//             }
//             else{
//                 cout << " ";

//             }

//         }
//         cout << endl;
//     }
// }
