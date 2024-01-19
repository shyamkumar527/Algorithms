int BE(int n,int p){
  while(b){
        if(b&1){
            b-=1;
            res*=a;
        }
        else{
            b/=2;
            a*=a;
        }
    }
}
