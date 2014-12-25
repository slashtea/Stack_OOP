#include <iostream>

using namespace std;


#define MAX 10

class Stack {

  private:
    int arr[MAX];   // Contains all the date.
    int top;    // Contains location of Topmost data pushed into the stack.

  public:
    Stack(){top = -1;}    // Constructor... -1 indicates that the stack is empty.

    Stack & push(int a) {
        top++;
        if(top<MAX) {
            arr[top] = a;
            cout << a << " has been pushed" << endl;
            return *this;
        } else {
            cout << " Stack is full" << endl;
            top--;
        }
    }

    int pop() {
        // First we should test if the stack is not empty.
        if(top != -1) {
            int x = arr[top];   // We retreive data from last element.
            arr[top] = NULL;    // We cut lose the last element of the stack.
            top--;              // We set a step back the tracker of the last element of the stack, since we a have an element less then we used to have, we're popping...
            return x;
        } else {
            cout << " Empty Stack" << endl;
        }
    }

    void display() {
        for(int i=top; i>=0; i--) {
            cout << arr[i] << " is being popped" << endl;
        }
    }
};

int main()
{
    Stack s;
    s.push(1).push(2).push(3).push(4);
    //s.push(2);
    //s.push(3);
    //s.push(4);
    cout << " " << endl;

    s.display();

    return 0;
}
