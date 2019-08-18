int pivot(){
    int s=0;
    int e=vect.size();
    while(s<=e){
        int mid=(s+e)/2;
        if(vect[mid]>vect[mid+1]){
            return mid+1;
        }
        else if(vect[mid]<vect[mid-1]){
           cout<<mid;
        }
        else if(vect[s]>=vect[mid]){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
    }
   return -1;
}
