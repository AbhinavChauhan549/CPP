// GFG : isme hame do array given hoge ek petrol balance bateyega or doosra distance for next petrol pump
// isme hame check karna hai ki kya hum ek petrol pump se shuru ho ke saare pump visit kar sakte hai kya ni

/*
class Solution{
  public:

    //Function to find starting point where the truck can start to get through
    //the complete circle without exhausting its petrol in between.
    int tour(petrolPump p[],int n)
    {

       int deficit=0;
       int balance =0;
       int start =0;

       for(int i=0 ; i<n ;i++){
           balance+=p[i].petrol-p[i].distance;

           if(balance<0){
               deficit+=balance;
               start=i+1;
               balance=0;
           }
       }

       if(deficit+balance >=0){
           return start;
       }
       else{
           return -1;
       }
    }
};

*/