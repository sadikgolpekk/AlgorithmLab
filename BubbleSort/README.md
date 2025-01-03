# Bubble Sort Uygulaması

Bu proje, **Bubble Sort** algoritmasının bir C programında nasıl uygulanacağını göstermektedir. Program, verilen bir diziyi sıralar ve sıralı halini ekrana yazdırır.

## Bubble Sort Nedir?

![bubblesort](https://github.com/user-attachments/assets/011147dc-e3cd-497b-8f20-8bf5259d21f8)


Bubble Sort, basit bir sıralama algoritmasıdır. Algoritma, ardışık elemanları karşılaştırarak, gerektiğinde yerlerini değiştirerek çalışır. Bu işlem, dizinin tamamı sıralanana kadar devam eder.
Bubble sort algoritmasına "bubble sort" (kabarcık sıralama) denmesinin sebebi, sıralama işlemi sırasında büyük ya da küçük değerlerin (sıralama yönüne bağlı olarak) liste boyunca "kabarcıklar gibi" yukarı veya aşağı doğru hareket etmesidir.

### Çalışma Prensibi:

1. İlk elemandan başlayarak her bir çifti karşılaştırır.
2. Eğer bir eleman, bir sonrakinden büyükse yer değiştirir.
3. Bu işlem sırasında, her yinelemede en büyük eleman dizinin sonuna taşınır.
4. İşlem, dizinin tamamı sıralanana kadar tekrarlanır.

## Zaman Karmaşıklığı (Worst Case)

- **En Kötü Durum (Worst Case)**: O(n²)  
  - Ters sıralı bir diziyle çalışırken algoritma, her eleman için tüm diğer elemanları karşılaştırır.

### Not:
Bubble Sort, küçük veri kümeleri için uygun olabilir, ancak büyük veri kümelerinde verimli değildir. Daha iyi alternatifler arasında Quick Sort veya Merge Sort bulunur.

## Kodun İçeriği

### `bubblesort` Fonksiyonu

Dizi üzerinde **Bubble Sort** algoritmasını uygular.

#### Çalışma Prensibi:

- İki iç içe döngü kullanır:
  - **Dış Döngü**: Dizinin sırasız kısmını temsil eder.
  - **İç Döngü**: Sırasız kısımdaki elemanları karşılaştırır ve yer değiştirir.
- En büyük eleman her yinelemede sona taşınır.

### `main` Fonksiyonu

1. Sırasız bir dizi tanımlar.
2. `bubblesort` fonksiyonunu çağırarak diziyi sıralar.
3. Sıralı diziyi ekrana yazdırır.

## Derleme ve Çalıştırma

1. Kodu bir `.c` dosyasına kaydedin (örneğin: `bubble_sort.c`).
2. Derlemek için şu komutu kullanın:
   ```bash
   gcc bubble_sort.c -o bubble_sort
