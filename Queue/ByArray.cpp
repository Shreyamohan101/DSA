#include<bits/stdc++.h>
using namespace std;

class Queue{
    int *arr;
    int start;
    int end;
    int maxsize; int currsize;
    
    public:
    Queue(int maxsize){
        this->maxsize = maxsize;    
        arr = new int[maxsize];
        start = -1;
        end = -1;
        currsize = 0;
}
void push(int element)
{
    if( currsize >= maxsize )
    {
    cout<< "Queue is full!"<< endl;
    exit(1);
    }
    if(end == -1)
    {
        end = 0;
        start = 0;
    }
    else
    end = (end+1)%maxsize;
    arr[end] = element;
    currsize++;
   
}
int pop()
{
    if(start == -1)
    {
        cout<< "Queue is empty"<< endl;
    }
    int popped = arr[start];
    if(currsize == 1)
    {
        start = -1;
        end = -1;
    }
    else{
        start = (start+1)%maxsize;
        currsize--;
        return popped;
    }


}
 int top() {
    if (start == -1) {
      cout << "Queue is Empty" << endl;
      exit(1);
    }
    return arr[start];
  }
  int size() {
    return currsize;
  }

};
int main()
{
      Queue q(6);
  q.push(4);
  q.push(14);
  q.push(24);
  q.push(34);
  cout << "The peek of the queue before deleting any element " << q.top() << endl;
  cout << "The size of the queue before deletion " << q.size() << endl;
  cout << "The first element to be deleted " << q.pop() << endl;
  cout << "The peek of the queue after deleting an element " << q.top() << endl;
  cout << "The size of the queue after deleting an element " << q.size() << endl;

  return 0;

}
