#include <iostream>
#include <array>
#define MAX 10
using namespace std;

template<typename T>
class Stack{
    public:
        array<T, MAX> items = {};
        int size;

        Stack() : size(0){};
        void push(T item){
            this->items[this->size]=item;
            this->size++;
        };
        T pop(){
            if(this->size == 0){
                cout<<"Stack is empty"<<endl;
                return 0;
            }else{
                --this->size;
                T lastitem = this->items[this->size];
                return lastitem;
            }
        };
        T peek(){
            if(this->size == 0){
                cout<<"Stack is empty"<<endl;
                return 0;
            }else{
                for(int i = this->size-2; i>=0 ; i--){
                    pop();
                }
                for(int i = this->size-1; i>=0 ; i--){
                    return this->items[i];
                }  
            }
        };
        void sort(){
            for(int k=1; k<10; k++)   
            {  
            T temp = this->items[k];  
            int j= k-1;  
            while(j>=0 && temp >= this->items[j])  
            {  
                this->items[j+1] = this->items[j];   
                j = j-1;  
            }  
            this->items[j+1] = temp;  
            }
        };
        void print(){
            for(int i = this->size-1; i>=0 ; i--){
                cout<<this->items[i]<<"\t";
            }
        };
        int binarySearch(int item){
            int first = 0;
            int last = this->size - 1;
            int mid;
            bool found = false;

            sort();

            while(first<=last&& !found){
                mid = (first + last) / 2;

                if(this->items[mid] == item){
                    found = true;
                }else if(this->items[mid] > item){
                    first = mid - 1;
                }else{
                    last = mid + 1;
                }
            }
            if(found){
                return (this->size-1)-mid;
            }else{
                return -1;
            }
        }
};

