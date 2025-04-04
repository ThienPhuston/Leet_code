class Solution {
    public:
    // ham kiem tra mang co phai cap so cong hay khong?
        bool canMakeArithmeticProgression(vector<int>& arr) {
            int n = arr.size();  //lay kich thuog cua mang
            //sap xep mang bang thuat toan bubble sort
            for (int i = 0; i < n - 1; i++) {
            for (int j = 0; j < n - 1 - i; j++) {
                if (arr[j] > arr[j +1]) {
                    swap(arr[j], arr[j + 1]);// hoan doi neu phan tu truoc lon hon phan tu sau
                      }
                    }
                  }
                    //tinh toan su chenh lch giua 2 phan tu dau tien
                  int ans = arr[1] - arr[0];
                  //kiem tra xem tat ca cac phan tu co su chenh  lech giong nhau hay khong
                  for (int i = 2; i < n; i++) {
                    if (arr[i] - arr[i - 1] != ans) return false;
                  }
                  // neu tat ca giong nhau thi tra ve true
                  return true;
        }
                    // goi ham Nhap Mang
                  void Nhapmang(vector<int>& arr) {
                    int x;
                    for (int i = 0; i < x; i++) {
                        cout << "Phan tu thu " << i + 1 << " ";
                        cin >> x;
                        arr.push_back(x); // them phan tu vao mang
                    }
                  }
                  //ham xuat mang
                 void Xuatmang(vector<int>& arr) {
                    for (int x : arr) {
                        cout << x << " ";
                    }
                    cout << endl;
                 }
    };
