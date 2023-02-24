#include<iostream>
using namespace std;
class Array
{
    private:
    int a[10];
    int size=0;

    public:
     void insert(int index, int value)
     {
        a[index]=value;
        size++;
     }
    int geta(int index)
    {
       
        return a[index];
    }
    int getSize()
    {
        return size;
    }
    int search(int value)
    {
        for(int i=0;i<size;i++)
        {
            if(a[i]==value)
            return i;
        }
     
        return -1;
    }

void delet(int index)
{
     for(int i=index;i<size;i++)
     {
        a[i]=a[i+1];
     }
 a[size-1]=0;
 size--;
}

void printArray()
{
    for(int i=0;i<size;i++)
    {
        cout<<a[i]<<" "<<endl;
    }
}
};
int main()
{
    Array a;
    int n,x,value,index;
    //insert

    cout<<"enter howmany element u want to enter";
    cin>>n;
    cout<<"enter "<<n<<"elements"<<endl;
    
    for(int i=0;i<n;i++)
    {
        cin>>x;
        a.insert(i,x);
    }
    for(int i=0;i<a.getSize();i++)
    {
         cout<<a.geta(i)<<"  "<<endl;
    }

    //search

    cout<<"enter element that you want to search";
    cin>>value;
    int b=a.search(value);
    if(b!=-1)
       cout<<"element found at  "<<b<<endl;
   else
      cout<<"element not found"<<endl;

      //delete
      cout<<"enter element index u want to delete";
      cin>>index;
      a.delet(index);
      a.printArray();
  
return 0;
}