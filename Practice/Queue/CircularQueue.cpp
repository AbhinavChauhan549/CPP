// Circular Queue Implementation

/*
#include <bits/stdc++.h>

class CircularQueue{

    public:

    int s;

    int *arr;

    int f;

    int r;



    CircularQueue(int n){

        s=n;

        arr=new int[n];

        f=-1;

        r=-1;

    }



    bool enqueue(int e){

        int ans=0;



        //queue is full

        if((f==0 and r==s-1) or(r==(f-1)%(s-1))) return false;



        //agar element 1st hi h insertion may

        else if(f==-1){

            f=0;r=0;

        }

        //loop nature as circullar queue h

        else if(f!=0 and r==s-1){

            r=0;

        }

        //normal queue wala case

        else {

            r++;

        }

            arr[r]=e;

            return true;



    }



    int dequeue(){

        int ans;



        //empty queue

        if(f==-1) return -1;



        ans=arr[f];

        arr[f]=-1;



        //single element

        if(f==r){

            f=-1;

            r=-1;

        }



        //circular nature

        else if(f==s-1){

            f=0;

        }

        // normal case queue

        else f++;



        return ans;



    }

};


*/