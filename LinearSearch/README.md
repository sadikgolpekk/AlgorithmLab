# Doğrusal Arama (Linear Search) Uygulaması

Bu proje, **doğrusal arama algoritmasını** kullanarak bir dizide eleman arama işlemini gerçekleştiren bir C programını içermektedir.

## Doğrusal Arama Nedir?

Doğrusal arama (Linear Search), bir dizide aranan elemanı bulmak için elemanların sırayla kontrol edilmesi işlemidir. Basit bir algoritma olduğu için küçük veri setlerinde tercih edilir.

### Çalışma Prensibi

1. Arama işlemi dizinin ilk elemanından başlar.
2. Her eleman sırayla kontrol edilir.
3. Eğer eleman aranan değerle eşleşirse, işlemi durdurur ve elemanın indisi döndürülür.
4. Eğer tüm elemanlar kontrol edildikten sonra aranan eleman bulunamazsa, `-1` değeri döndürülür.

### Zaman Karmaşıklığı (Worst Case)

- **En Kötü Durum (Worst Case)**: O(n)  
  - Bu durumda, aranan eleman ya dizinin sonunda bulunur ya da dizide hiç yoktur.

## Kodun İçeriği

### `dogrusalarama` Fonksiyonu

Bu fonksiyon, doğrusal arama algoritmasını kullanarak bir dizide belirli bir elemanı arar.

#### Girdi Parametreleri:

- `dizi[]`: Arama yapılacak dizi
- `size`: Dizinin eleman sayısı
- `aranacak`: Aranacak eleman

#### Çıkış:

- Eğer eleman bulunursa, dizideki indisi döndürür.
- Eğer eleman bulunamazsa, `-1` döndürür.

### `main` Fonksiyonu

1. Kullanıcıdan aranacak elemanı alır.
2. Bir dizi tanımlar.
3. `dogrusalarama` fonksiyonunu çağırarak elemanın dizide olup olmadığını kontrol eder.
4. Sonucu ekrana yazdırır.

## Derleme ve Çalıştırma

1. Kodu bir `.c` dosyasına kaydedin (örneğin: `linear_search.c`).
2. Derlemek için şu komutu kullanın:
   ```bash
   gcc linear_search.c -o linear_search
