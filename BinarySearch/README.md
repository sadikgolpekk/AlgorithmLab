# İkili Arama (Binary Search) Uygulaması

Bu proje, **ikili arama algoritmasını** kullanarak bir dizide eleman arama işlemini gerçekleştiren bir C programını içermektedir.

## İkili Arama Nedir?


![bePceUMnSG-binary_search_gif](https://github.com/user-attachments/assets/9431a689-1828-4cc9-9fa3-6c2a96674510)


İkili arama (Binary Search), sıralı bir dizide aranan elemanı bulmak için kullanılan bir algoritmadır. Algoritma, her adımda diziyi ikiye bölerek arama yapar ve bu sayede çok hızlı bir şekilde çalışır.

### Çalışma Prensibi

1. Arama işlemi, dizinin ortasındaki elemandan başlar.
2. Eğer ortadaki eleman aranan elemanla eşitse, işlem sona erer.
3. Aranan eleman ortadaki elemandan küçükse, dizinin sol yarısı incelenir.
4. Aranan eleman ortadaki elemandan büyükse, dizinin sağ yarısı incelenir.
5. Bu işlem, eleman bulunana veya dizi alt aralığı boşalana kadar tekrarlanır.

### Zaman Karmaşıklığı (Worst Case)

- **En Kötü Durum (Worst Case)**: O(log n)  
  - Bu durum, eleman bulunamadığında veya arama alanı sürekli ikiye bölündüğünde ortaya çıkar.
  - Örneğin, 128 elemanlı bir dizide arama yapmak için en fazla log₂(128) = 7 karşılaştırma gerekir.
  - Büyük veri setlerinde karmaşıklık konusunda doğrusal aramaya göre çok avantajlı konumdadır.

## Kodun İçeriği

### `ikiliarama` Fonksiyonu

Bu fonksiyon, ikili arama algoritmasını kullanarak verilen sıralı dizide belirli bir elemanı arar.

#### Girdi Parametreleri:

- `dizi[]`: Arama yapılacak sıralı dizi
- `size`: Dizinin eleman sayısı
- `aranan`: Aranacak eleman

#### Çıkış:

- Eğer eleman bulunursa, dizideki indisi döndürür.
- Eğer eleman bulunamazsa, `-1` döndürür.

### `main` Fonksiyonu

1. Bir sıralı dizi tanımlar.
2. Kullanıcıdan aranacak elemanı alır.
3. `ikiliarama` fonksiyonunu çağırarak elemanın dizide olup olmadığını kontrol eder.
4. Sonucu ekrana yazdırır.

## Derleme ve Çalıştırma

1. Kodu bir `.c` dosyasına kaydedin (örneğin: `binary_search.c`).
2. Derlemek için şu komutu kullanın:
   ```bash
   gcc binary_search.c -o binary_search
