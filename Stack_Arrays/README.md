# Dynamic Stack in C

Bu proje, **dinamik bellek yönetimi** kullanarak bir yığın (stack) veri yapısı oluşturmayı ve yığının kapasitesini gerektiğinde artırıp azaltmayı içerir.
![Stack](https://github.com/user-attachments/assets/ffcb3b52-86bb-4637-b19b-7154257d726d)

## Özellikler

1. **Dinamik Boyutlandırma**:
   - Yığın dolduğunda boyut otomatik olarak iki katına çıkar.
   - Elemanlar azaldığında boyut gerektiğinde yarıya düşer.

2. **`push` ve `pop` İşlemleri**:
   - Yığına eleman ekleme (`push`).
   - Yığından eleman çıkarma (`pop`).

3. **Bellek Yönetimi**:
   - Dinamik bellek yönetimiyle gereksiz bellek kullanımını önler.

4. **Durum Gösterimi**:
   - Mevcut yığının boyutunu ve içeriğini yazdırır.

## Çalışma Prensibi

- **Push İşlemi**: Yığına yeni bir eleman eklenir. Eğer yığın doluysa, mevcut kapasite iki katına çıkarılır. Bu işlem sırasında:
  1. Daha büyük boyutlu bir dizi oluşturulur.
  2. Eski dizinin tüm elemanları yeni diziye kopyalanır.
  3. Eski dizi serbest bırakılır.
  
- **Pop İşlemi**: Yığının en üstünden bir eleman çıkarılır ve döndürülür. Eğer eleman çıkarıldıktan sonra kullanılan kapasite toplam kapasitenin dörtte birinden azsa, yığın boyutu yarıya indirilir. Bu işlem sırasında:
  1. Daha küçük boyutlu bir dizi oluşturulur.
  2. Mevcut elemanlar yeni diziye kopyalanır.
  3. Eski dizi serbest bırakılır.

Bu dinamik boyutlandırma yöntemi, bellek kullanımını optimize eder ve gereksiz bellek israfını önler.

## Stack (Yığın) Kullanım Alanları

- **Fonksiyon Çağrıları**: Programlama dillerinde fonksiyon çağrıları sırasında kullanılan çağrı yığını (call stack), bir yığının tipik bir örneğidir.
- **Geri Alma İşlemleri**: Metin editörlerinde yapılan işlemleri geri alma (undo) mekanizmasında yığın yapısı kullanılır.
- **Tarayıcı Geçmişi**: Web tarayıcılarında ileri/geri navigasyon için yığın yapısı kullanılır.
- **Derleyiciler**: Program derleyicilerinde, ifadeleri çözümleme ve değerlendirme sırasında yığın yapıları kullanılır.
- **DFS (Derinlik Öncelikli Arama)**: Graf arama algoritmalarında, DFS yönteminde yığın kullanılır.
- **Hesaplama Motorları**: Ters Polonyalı Gösterim (Reverse Polish Notation) ile çalışan hesap makineleri yığın yapısını temel alır.

## Derleme ve Çalıştırma

1. Kodu bir `.c` dosyasına yapıştırın (örneğin: `dynamic_stack.c`).
2. Aşağıdaki komutu kullanarak derleyin:
   ```bash
   gcc dynamic_stack.c -o dynamic_stack
