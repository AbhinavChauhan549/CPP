// Map is used for Hashing
/*
Hashing se data easily:
1) store
2) fetch or search

linear chaining karte hai or division method :
index for storing is calculated by using n%10
or agar ek index pe jada element ho te hai to chaining karte hai linked list ki tarah

Time Complexity (for all cases ): O(log(n))

Map mein data key : value pair ki form me store hota hai
or key ki value koi bhi datatype(int , char ,string ) or user defined datatype (list, vector  , map) ho sakta hai

Map result ko accordingly provide ya print karta hai not randomly.
*/
//========================================Map functions==========================================================

/*
1) mpp.find(arr[i]) : returns the iterator of arr[i] in the map.
2) mpp.end() : returns the iterator to the index which is past the indexes present in map (map ke bahar ka index return karega)

agar merko check karna ki element present hai map me ya nahi :
if(mpp.find(arr[i]) == mpp.end()) : agar ye true hoga to matlab element present nahi hai map me.
*/