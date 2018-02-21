#include <iostream>
#include<vector>
using namespace std;
class Stack {
private:
    int item, i,num;
    vector <int> arr_stack;
    int top;

public:
    Stack() {
        top = 0;
    }
    void push();
    void pop();
    void display();
};
void Stack::push(){
    cout<<"\nEnter the size:-";
    cin>>num;
    for(i=0;i<num;i++){
        if (top == num)
            cout << "\nStack is Full!";
        else {
            cout << "\nEnter The Value to be pushed : ";
            cin>>item;
            arr_stack.push_back(item);
            top++;
        }
    }
}

void Stack::pop() {
    if (top == 0)
        cout<<"\nStack is Empty!";
    else {
        --top;
        cout<<"\nPosition : "<<top<<", Popped Value  :"<< arr_stack[top];
    }
}

void Stack::display() {
    cout<<"\nStack Size : "<<top;
    for(i = (top - 1); i >= 0; i--)
        cout<<"\nPosition : "<<i<<", Value  :"<< arr_stack[i];
}
int main() {
    Stack obj;
    obj.push();
    obj.pop();
    obj.display();
}
