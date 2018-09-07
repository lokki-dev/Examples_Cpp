#include <functional>
#include <iostream>
#include "MessageBox.h"

using namespace std;

using display_message = std::function<void(const string&)>;

static void show_windows_message(const string& message) {
  message_box::show(message);
}

static void write_line(const string& message) {
  cout << message << endl;
}

int main(int argc, char* argv[]) {
  display_message message_target;
  
  if (argc > 1)
    message_target = show_windows_message;
  else
    message_target = write_line;
  
  message_target("Hello, World!");
}
