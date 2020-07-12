int Solution::braces(string A) {
  stack<char> s;
  for (char ch : A) {
    if (ch == ')') {
      char top = s.top();
      s.pop();
      bool flag = true;
      while (top != '(') {
        if (top == '+' or top == '-' or top == '*' or top == '/')
          flag = false;
        top = s.top();
        s.pop();
      }
      if (flag)
        return 1;
    } else
      s.push(ch);
  }
  return 0;
}
