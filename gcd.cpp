//
// Created by Andrew on 2018-09-14.
//
int gcd ( const int a , const int b ){
    int smallerNum;
    int biggerNum;

    if(a < b){
        smallerNum = a;
        biggerNum = b;
    }else{
        smallerNum = b;
        biggerNum = a;
    }

    for(int i = smallerNum; i >= 1; i--){
        if(smallerNum%i==0){
            if(biggerNum%i==0){
                return i;
            }
        }
    }
}