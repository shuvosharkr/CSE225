#include <iostream>
#include "HashType.cpp"
using namespace std;

int main()
{
    HashType<int> h1;
    h1.Insert(45300);
    h1.Insert(20006);
    h1.Insert(50002);
    h1.Insert(40017);
    h1.Insert(25001);
    h1.Insert(13000);
    h1.Insert(65905);
    h1.Insert(30001);
    h1.Insert(95000);
    h1.Insert(65913);
    h1.Insert(66933);
    h1.Insert(31011);

    cout<<"Before Deletion: "<<endl;
    h1.Print();
    cout<<endl;

    h1.Delete(13000);
    h1.Delete(20006);
    h1.Delete(50002);

    cout<<"After Deletion: "<<endl;
    h1.Print();

    cout<<endl;
    cout<<"Index Of The Element: "<<h1.Find(66933)<<endl;

    cout<<endl;
    cout<<"Rehash Table: "<<endl;
    int* b = h1.Rehash();
    for(int i=0;i<20;i++){
          cout<<b[i]<<endl;
    }
    return 0;
}
