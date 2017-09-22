/*
 Aingty Eung
 013462772
 CECS 282 Lab 10 Program 1 Main File
 */
#include <iostream>
#include <list>
using namespace std;
int main() {
    list<int> iList;
    list<int>::iterator iter1;
    list<int>::iterator iter2;
    int numberOfContent = 0;
    cout << "Enter the number of content: ";
    cin >> numberOfContent;
    cin.ignore();
    
    cout << "\nList generated.\nHere is the list: ";
    for (int i = 0; i <= numberOfContent; i++)
    {
        iList.push_front(i);
        cout << i << " ";
    }
    cout << "\n\n";
    
    iter1 = iList.begin();
    iter2 = iList.end();
    iter2--;
    while (iter1 != iter2)
    {
        swap(iter1, iter2);
        iter1++;
        iter2--;
    }
    
    cout << "List Swapped.\nNew List: ";
    while (!(iList.empty()))
    {
        cout << iList.front() << " ";
        iList.pop_front();
    }
    cout << "\n"<<endl;
    return 0;
}
