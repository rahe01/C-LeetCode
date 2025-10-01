# Pass by Value ✨

## 📌 Definition
- যখন কোনো ফাংশনকে ভ্যারিয়েবল পাঠানো হয়, তখন আসল ভ্যারিয়েবলের মানের **একটি কপি** ফাংশনের মধ্যে যায়।
- ফাংশনের ভিতরে যেকোনো পরিবর্তন শুধু ওই **কপির** উপর হয়, আসল ভ্যারিয়েবলে কোনো প্রভাব পড়ে না।

---

## 🔹 Example Code (C++)

```cpp
#include <iostream>
using namespace std;

void change(int a) {
    a = 100;   // শুধু কপি পরিবর্তিত হলো
    cout << "Inside function a = " << a << endl;
}

int main() {
    int x = 5;
    change(x);
    cout << "Outside function x = " << x << endl;
    return 0;
}




