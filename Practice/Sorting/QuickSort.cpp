#include<iostream>
using namespace std;

int partition(int *arr , int s , int e){

  int pivotElement = arr[s];// Pivot Element 

int count = 0 ;// Pivot element se chotte element nikalege 

for(int k = s+1 ; k<=e ; k++ ) {
    if(arr[k]<pivotElement){
        count++;
    }
}

int pivotIndex = s+count;// pivot ko sahi position pe place karege , left me saare chotte or Right me saare badde
swap(arr[s],arr[pivotIndex]);

// ab hum check karege ki left wale chotte hai or right wale badde agar nahi hai to unko sahi place pe daal dege 

int i = s , j = e ;

while(i<pivotIndex && j > pivotIndex){

    while(arr[i]<arr[pivotIndex]){
        i++;
    }
    while(arr[j]>arr[pivotIndex]){
        j--;
    }

    swap(arr[i],arr[j]);
}

return pivotIndex;// Saare Index ki values ko sort kardega
}


void quickSort(int *arr , int s , int e){
    // Base case 
    if(s>=e){
        return ; 
    }

    int p = partition(arr,  s , e);

    quickSort(arr,s,p-1);// left part
    quickSort(arr,p+1,e);// Right part


}
int main(){
     int arr[10] = {6, 3, 7, 4, 5, 8, 1, 2, 9, 11};
    int size = 10;

    quickSort(arr, 0, size - 1);

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
     return 0;
}