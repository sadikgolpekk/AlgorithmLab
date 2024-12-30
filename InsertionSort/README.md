# Insertion Sort Uygulaması

Bu proje, **Insertion Sort** algoritmasının bir C programında nasıl uygulanacağını göstermektedir. Program, verilen bir diziyi sıralar ve sıralı halini ekrana yazdırır.

## Insertion Sort Nedir?

Insertion Sort, sıralama algoritmalarından biridir ve her bir elemanı doğru yerine "sokarak" çalışır. Dizinin ilk elemanı sıralı kabul edilir ve diğer elemanlar, sıralı kısımda doğru konumlarına yerleştirilir.


![Insertion-sort-example](https://github.com/user-attachments/assets/50108a1a-362b-423e-8954-9ebfb9fdb99c)


### Çalışma Prensibi:

1. İlk eleman sıralı kabul edilir.
2. Sonraki elemanlar sırasıyla alınır ve sıralı kısımda uygun yere yerleştirilir.
3. Elemanların sıralı kısma yerleştirilmesi sırasında elemanlar kaydırılır.

### Zaman Karmaşıklığı (Worst Case)

- **En Kötü Durum (Worst Case)**: O(n²)  
  - Ters sıralı bir diziyle çalışırken, her eleman uygun yere yerleştirilene kadar tüm önceki elemanlarla karşılaştırılır.

### Not:
Insertion Sort, küçük boyutlu veri kümeleri için oldukça etkili olabilir, ancak büyük veri kümelerinde verimli değildir. Daha iyi alternatifler arasında Merge Sort ve Quick Sort yer alır.

## Kodun İçeriği

### `insertionsort` Fonksiyonu

Dizi üzerinde **Insertion Sort** algoritmasını uygular.

#### Çalışma Prensibi:

- Dizinin her bir elemanı sıralı kısma eklenir:
  1. Geçici bir değişkende mevcut eleman saklanır.
  2. Eleman, sıralı kısmın uygun yerine yerleştirilir.
  3. Yerleştirme işlemi sırasında elemanlar kaydırılır.

### `main` Fonksiyonu

1. Sırasız bir dizi tanımlar.
2. `insertionsort` fonksiyonunu çağırarak diziyi sıralar.
3. Sıralı diziyi ekrana yazdırır.

## Derleme ve Çalıştırma

1. Kodu bir `.c` dosyasına kaydedin (örneğin: `insertion_sort.c`).
2. Derlemek için şu komutu kullanın:
   ```bash
   gcc insertion_sort.c -o insertion_sort
