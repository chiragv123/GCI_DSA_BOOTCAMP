
int main(){
    int i,j,k,a;
    cout << "Enter the value of k : " << endl;
    cin >> k;
    for(i=1;i<=3*k;i++){
        for(j=1;j<=2*k-1;j++){
            if(i<-k){
                if(j>=2*k-1){
                    cout << "*";
                }else{
                    cout << " ";
                }

            }else if(i<=2*k){
                a=0;
                if(j==k){
                    cout <<  "|" ;
                    a=1;}
                if(j<(i-k-1)){
                    cout << "*";
                    a=1;

                }
                if(j>-i){
                    cout << "*";
                    a=1;
                }
                if(a==0){
                    cout << " ";
                }
                

            }
            else if(i<=2*k){
                if(j<3*k+1-i){
                    cout<< "*";

                }
                else{
                    cout << " ";
                }
            }
        }
        cout << endl;
    }
}


