class Solution{
  public:
  void reverseArray(int arr[],int lb,int ub)
      {
          while(lb<=ub)
          {
              swap(arr[lb],arr[ub]);
              lb++;
              ub--;
          }
      }
  void rotateArr(int arr[], int d, int n){
  // code here
  if(d>n)
  {
    int q ;
    q = d/n;
    d = d - q * n;
  }
  reverseArray(arr,0,d-1);
  reverseArray(arr,d,n-1);
  reverseArray(arr,0,n-1);
      }
};
