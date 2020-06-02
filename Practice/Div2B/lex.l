vi mx(n);
int books = 0;
int r = 0;
int l = 0;
int time = t;
while (l < n and r < n) {
  if (a[r] <= time) {
    books++;
    time -= a[r];
    mx[l] = max(mx[l], books);
    r++;
  } else {
    l++;
    r = l;
    books = 0;
    time = t;
  }
}
cout << *max_element(all(mx)) << endl;