#include <iostream>

using namespace std;


int n;
int* inputArray;


void pre_order(int root) {
    cout << root << " ";
    
    for (int i = 0; i < n; i++)
        if (inputArray[i] == root)
            pre_order(i);
    
    return;
}


void post_order(int root) {
    for (int i = 0; i < n; i++)
        if (inputArray[i] == root)
            post_order(i);
    
    cout << root << " ";
    
    return;
}


void in_order(int root) {
    int id = 0;
    while ((inputArray[id] != root) && (id < n))
        id++;
    if (id < n)
        in_order(id);
    
    cout << root << " ";
    
    if (id < n)
        for (int i = id + 1; i < n; i++)
            if (inputArray[i] == root)
                in_order(i);
    
    return;
}


int main() {
    cin >> n;
    inputArray = new int[n];
    for (int i = 0; i < n; i++)
        cin >> inputArray[i];
    
    int root = 0;
    while (inputArray[root] != -1)
        root++;
    
    pre_order(root);
    cout << endl;
    post_order(root);
    cout << endl;
    in_order(root);
    cout << endl;
    
    return 0;
}