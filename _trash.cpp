#include <bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node* next;
};




//function which detecting cycling in linked list and return the node where cycle starts
Node* detectCycle(Node* head)
{
    //Your code here
    Node* slow = head;
    Node* fast = head;
    while(fast!=NULL && fast->next!=NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
        if(slow==fast)
        {
            break;
        }
    }
    if(fast==NULL || fast->next==NULL)
    {
        return NULL;
    }
    slow = head;
    while(slow!=fast)
    {
        slow = slow->next;
        fast = fast->next;
    }
    return slow;
}

// void printPattern(int n) {
//     cout << n << endl;
    
// }


int main(){   cout << "\n\n"<< "######################################"<<"\n\n";

    // cout << "Enter n" << endl;
    // int n;
    // cin >> n;
    // int size = 2*n-1;
    
    // // int ** arr = new int*[size];
    // int ** arr =(int**)malloc(size*sizeof(int*));
    // for (int i=0; i < size; i++) {
    //     // arr[i] = new int[size];
    //     arr[i] = (int*)malloc(size*sizeof(int*));
    // }

    // for (int i=0; i<size; i++)
    //     for (int j = 0; j < size; j++) {
    //         int r = (i < size-1-i) ? i :  size-1-i;
    //         int c = (j < size-1-j) ? j :  size-1-j;
    //         arr[i][j] = r<c ? n-r : n-c;

    //     }



    // for (int i=0; i<size; i++) {
    //     for (int j = 0; j < size; j++)
    //     {
    //         cout << arr[i][j] << " ";
    //     }
    //     cout << endl; 
    // }
    // vector<int> v = {2,2,3,3,3,4};

    // for (int i=0; i<v.size(); i++) {
    //     cout << v[i] << " ";
    // }

    // cout << "\n\n"<< "######################################"<<"\n\n";

    // map<int,int> m;

    // for (int i=0; i<v.size(); i++) {
    //     m[v[i]] += v[i];

    // }

    // for( auto it = m.begin(); it != m.end(); ++it )
    // {
    //     cout << it->first << " " << it->second << endl;
    // }

    // vector<vector<int>>v = {{1,2,3,4},{5,6,7,8},{9,10,11,12}};

    // cout << v.size() << " " << v[0].size() << endl;

    

    vector<char> mat = {'0','0', '0'};
    cout << mat[0]   << endl;


    cout << "\n\n"<< "######################################"<<"\n";
    return 0;
}
