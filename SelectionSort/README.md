# Selection Sort Uygulaması

Bu proje, **Selection Sort** algoritmasının bir C programında nasıl uygulanacağını göstermektedir. Program, verilen bir diziyi sıralar ve sıralı halini ekrana yazdırır.

![selectionsort](https://github.com/user-attachments/assets/94c84bcc-c3c2-4aae-92c7-a2c37cfc34c1)


## Selection Sort Nedir?

Selection Sort, bir sıralama algoritmasıdır ve çalışma prensibi şu şekildedir:

1. Dizinin sırasız kısmında en küçük elemanı bulur.
2. Bu elemanı, sırasız kısmın başına taşır.
3. Bu işlemi dizinin tamamı sıralanana kadar tekrar eder.

Selection Sort, basit bir sıralama algoritmasıdır ancak zaman karmaşıklığı açısından büyük veri kümeleri için verimsiz olabilir.

## Zaman Karmaşıklığı (Worst Case)

- **En Kötü Durum (Worst Case)**: O(n²)  
  - Ters sıralı bir diziyle çalışırken algoritma, her karşılaştırma yapılır.

### Not:
Selection Sort büyük veri kümeleri için uygun değildir. Daha verimli sıralama algoritmaları (örneğin, Merge Sort veya Quick Sort) tercih edilebilir.

## Kodun İçeriği

### `selectionsort` Fonksiyonu

Dizi üzerinde **Selection Sort** algoritmasını uygular.

#### Çalışma Prensibi:

1. **En Küçük Elemanı Bulma**:
   - Her adımda dizinin sırasız kısmındaki en küçük eleman bulunur.
2. **Yer Değiştirme**:
   - Bulunan en küçük eleman, sırasız kısmın ilk elemanıyla yer değiştirir.
3. **İşlemin Tekrarı**:
   - Dizi sıralanana kadar işlem tekrarlanır.

### `main` Fonksiyonu

1. Sırasız bir dizi tanımlar.
2. `selectionsort` fonksiyonunu çağırarak diziyi sıralar.
3. Sıralı diziyi ekrana yazdırır.

## Derleme ve Çalıştırma

1. Kodu bir `.c` dosyasına kaydedin (örneğin: `selection_sort.c`).
2. Derlemek için şu komutu kullanın:
   ```bash
   gcc selection_sort.c -o selection_sort
