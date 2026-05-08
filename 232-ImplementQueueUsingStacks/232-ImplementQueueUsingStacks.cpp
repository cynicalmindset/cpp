// Last updated: 09/05/2026, 00:21:29
class MyQueue {
public:
  stack<int> ip;
  stack<int> op;
  int p = 1;
  MyQueue() {}

  void push(int x) {
    if (ip.empty()) {
      p = x;
    }
    ip.push(x);
  }

  int pop() {
    if (op.empty()) {
      while (!ip.empty()) {
        op.push(ip.top());
        ip.pop();
      }
    }
    int val = op.top();
    op.pop();
    return val;
  }

  int peek() {
    if (op.empty()) {
      return p;
    }
    return op.top();
  }

  bool empty() {
    if (ip.empty() && op.empty())
      return true;
    return false;
  }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */
