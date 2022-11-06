#include<iostream>
#include<stdlib.h>
using namespace std;

int top = -1, stack[10], n = 10;

bool isfull(){ // Fungsi yang mereturn value boolean untuk mengecek apakah stack sudah full
        if(top==n-1)
            return true;
        else
            return false;
    }

bool isempty() { // Fungsi yang mereturn value boolean untuk mengecek apakah stack masih kosong
        if(top<=-1)
            return true;
        else
            return false;
    }

void push(int val) {
	system("CLS");
    if(isfull())  // Mengecek apakah stack sudah full
    {
        cout << "Stack is full!" << endl;
        return;
    }
    else
    top++;
    stack[top]=val;  // Jika stack masih ada tempat, value akan dimasukkan dalam stack
    cout << "Pushed : " << val << endl;
}

void pop() {
	system("CLS");
    if(isempty()) // Mengecek apakah stack masih kosong
    {
        cout << "Stack is empty!" << endl;
        return;
    }
    else // Jika stack tidak kosong, stack akan di pop
        cout << "Last popped value : " << stack[top] << endl;
        top--;
}

void display() {
	system("CLS");
        if(top>=-1) {  // Jika stack tidak kosong, menampilkan value-value yang sudah dimasukkan
        	cout <<"Stack values are :" << endl;
        	for(int i = top+1; i>=0; i--) {
            cout << stack[i] << endl;
			}
            
        } else
        cout << "nothing to display" << endl;
    }

void Size() { // Menghitung size dari stack
	system("CLS");
	if (top==-1) {
		cout << "Stack is empty!"<< endl;
	} else
    cout << "The size of the stack is "<< top+1 << endl;
}

void menu() {
	cout << "---------------------------" << endl;
    cout << "Menu :" << endl;
    cout << "1. Push \n2. Pop \n3. Display \n4. Check Stack Capacity \n5. Check Stack Content \n6. Stack Size \n7. Exit " << endl;
    cout << "---------------------------" << endl;
    cout << "Choose menu : ";
}

int main()
{
    int c,val;
    do {
        menu();
        cin >> c;

    if(c==1) {
        cout << "Enter value to push : ";
        cin >> val;
        push(val);
    }
    else if(c==2) {
        pop();
    }
    else if(c==3) {
        display();
    }
    else if(c==4) {
    	system("CLS");
        if(isfull())
            cout << "Stack is full!" << endl;
        else
            cout << "Stack is not full" << endl;
            cout << "Current stack count : " << top + 1 << endl; // Menampilkan jumlah stack yang sekarang
    }
    else if(c==5) {
    	system("CLS");
        if(isempty())
            cout << "Stack is empty!" << endl;
        else
            cout << "Stack is not empty!" << endl;
            cout << "Current stack count : " << top + 1 << endl;
    }
    else if(c==6) {
        Size();
    }
    else
    return 0;
    } while(1);
    return 0;
}