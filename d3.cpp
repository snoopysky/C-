    #include <iostream>
    using namespace std;
    
    int main() {
      int a[10];
      for (int i = 0; i < 10; i++) {
        cin >> a[i];
      }  
      // ð�ݣ����ϱȽ����ڵ������������˳����ˣ���ô�ͽ���
      for (int i = 0; i < 9; i++) {
        for (int j = 1; j < 10 - i; j++) {      
      // ��ղŵ�ð������ͬ�����ǲ�ֻ��ͨ�������ֵĴ�С����˳��
      // �����ߵ�Ϊż�����ұߵ�Ϊ��������ô˳��Ҳ��Ҫ�ߵ�
      bool leftIsEven = a[j - 1] % 2 == 0;
      bool rightIsEven = a[j] % 2 == 0;
      if ((leftIsEven && !rightIsEven) ||
          (leftIsEven == rightIsEven && a[j - 1] > a[j])) {        
        int temp = a[j];        
        a[j] = a[j - 1];
        a[j - 1] = temp;
      }
    }
  }  
  for (int i = 0; i < 10; i++) {
    cout << a[i] << ' ';
  }  
  return 0;
}
