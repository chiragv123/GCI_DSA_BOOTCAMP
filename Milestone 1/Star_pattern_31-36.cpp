#include<iostream>
using namespace std;



// star pattern 31

// int main(){
//     int i,j,k,line,num;
//     char alpha;
//     cout<< "Enter number of lines: " << endl;
//     cin>> line;
//     for(i=1;i<=line;i++){
//         k=1;
//         num = 1;
//         alpha = 'A';
//         for(j=1;j<=2*line-1;j++){

//             if(j>=line+1-i&&j<=line-1+1){
//                 if(k){
//                     if(i%2==1){
//                         cout << num ;
//                     }
//                     else{
//                         cout << alpha;
//                     }

//                 }
//                 else{
//                     cout << " ";
//                     k=1-k;
//                 }
                
            
//             }
//             else{

//                 cout << " ";

//             }
//         }
//         cout << endl;
//     }

// }




// star pattern 32


    
// int main(){
//     int i,j,n;
    
//     cout<< "Enter number of lines: " << endl;
//     cin>> n;
//     for(i=1;i<=n;i++){
       
//         for(j=1;j<=n;j++){
//             if(j==i || j==n+1-i){
//                 cout << "*";

//             }
//             else{
//                 cout << " ";
//             }

//         }
//          cout << endl;
// }
// }






  
// star pattern 33

    
// int main(){
//     int i,j;
//     char k;

    
    
//     for(i=1;i<=4;i++){
//         k='A';
       
//         for(j=1;j<=7;j++){
//             if(j<=5-i || j>=3+i){
//                 cout << k;

//             }
//             else{
//                 cout << " ";
//                 k++;
//             }

//         }
//          cout << endl;
// }
// }





// star pattern 34

// int main(){
//     int i,j;
//     int p,rows;
//     int k=1;
//     cout << "Enter the number of rows: " << endl;
//     cin  >> rows;
//     for(i=1;i<=rows;i++){
//         p=k;
//         for(j=1;j<=i;j++){
//             cout << p;
//             p=p-(rows-i+j);

//         }
//         cout << endl;
//         k=k+1+rows-i;

//     }
// }









// star pattern 35



// int main(){
//     int i,j,row;
//     int k=1;
//     cout << "Enter the number of rows: " <<endl;
//     cin >> row;
//     for(i=1;i<=2*row-1;i++){
//         j=0;
//         if(i<row-k){
//             cout << " ";
//         }
//         else{
//             if(k){
//                 cout << "*";
//             }
//             else{
//                 cout << " ";
//             }
//             k=1-k;
//         }
//         if(i==row+k){
//             j++;
//             cout << endl;
//             if(i==2*row-1){
//                 break;
//             }
//             i=0;
//             k=1;
//         }
//     }
// }





// star pattern 36



// int main(){
//     int i,j,k;
//     for(i=1;i<=5;i++){
//         k=0;
//         for(j=1;j<=5;j++){
//             if(j<=i){
//                 cout << k;
//                 k=k+i-1;
//             }
//             else{
//                 cout << " ";
//             }
//         }
//         cout << endl;
//     }
// }
 


 