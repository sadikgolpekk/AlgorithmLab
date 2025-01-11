# Prim Algoritması



## 📚 Prim Algoritması Nedir?

Prim algoritması, **Minimum Yayılım Ağacı (Minimum Spanning Tree, MST)** bulmak için kullanılan bir ***açgözlü algoritmadır***\*.\* MST, bir grafın tüm düğümlerini en düşük toplam kenar ağırlığıyla ve çevrim içermeden bağlayan bir alt kümedir.

###  🔍 Nasıl Çalışır?

Algoritma, MST'yi şu adımlarla oluşturur:

1. **Rastgele bir düğümle başlar**.
2. **En küçük ağırlıklı kenarı seçer** ve bu kenar, ziyaret edilen bir düğümü ziyaret edilmemiş bir düğüme bağlar.
3. Bu işlemi, tüm düğümler MST'ye dahil edilene kadar tekrarlar.

---

![prims](https://github.com/user-attachments/assets/2b084421-894c-4892-b5da-2c3e8ccf3970)


## ✨ Prim Algoritmasının Özellikleri

- Açgözlü yaklaşım: Her zaman mevcut en küçük ağırlıklı kenarı seçer.
- Tüm düğümleri birbirine bağlar.
- En düşük toplam kenar ağırlığına sahip bir MST üretir.

---

## 🚀 Adım Adım Açıklama

1. **Başlangıç**:

   - Herhangi bir düğümden (genellikle kaynak düğüm) başla.
   - Bu düğümü ziyaret edilmiş olarak işaretle.

2. **Kenar Seçimi**:

   - Ziyaret edilen düğümlerden, ziyaret edilmemiş bir düğüme giden en küçük ağırlıklı kenarı seç.
   - Bu kenarı MST'ye ekle ve bağlantılı düğümü ziyaret edilmiş olarak işaretle.

3. **Tekrarla**:

   - Ziyaret edilen ve edilmeyen düğümleri bağlayan en küçük ağırlıklı kenarı seçmeye devam et.
   - Tüm düğümler MST'ye dahil edilene kadar devam et.

4. **Sonuç**:

   - Tüm düğümler ziyaret edildiğinde, MST tamamlanır ve toplam kenar ağırlığı minimumdur.

---

## 📖 Örnek

### Giriş Grafı:

Düğümler: A, B, C, D, E\
Ağırlıklı Kenarlar:

- A-B: 1
- A-C: 4
- B-C: 2
- B-D: 6
- C-D: 3
- C-E: 5
- D-E: 7

### Prim Algoritması Adımları:

1. **A** ile başla.

   - Ziyaret edilen: {A}
   - Mevcut kenarlar: (A-B: 1), (A-C: 4)
   - **A-B** kenarını seç (ağırlık: 1).

2. **B**'yi MST'ye ekle.

   - Ziyaret edilen: {A, B}
   - Mevcut kenarlar: (B-C: 2), (A-C: 4), (B-D: 6)
   - **B-C** kenarını seç (ağırlık: 2).

3. **C**'yi MST'ye ekle.

   - Ziyaret edilen: {A, B, C}
   - Mevcut kenarlar: (C-D: 3), (C-E: 5), (B-D: 6)
   - **C-D** kenarını seç (ağırlık: 3).

4. **D**'yi MST'ye ekle.

   - Ziyaret edilen: {A, B, C, D}
   - Mevcut kenarlar: (D-E: 7), (C-E: 5)
   - **C-E** kenarını seç (ağırlık: 5).

5. **E**'yi MST'ye ekle.

   - Ziyaret edilen: {A, B, C, D, E}

### MST Sonucu:

Kenarlar: (A-B, B-C, C-D, C-E)\
Toplam Ağırlık: 1 + 2 + 3 + 5 = **11**

---

## 🌟 Avantajlar

- MST'yi garanti eder.
- Yoğun grafikler için basit ve etkilidir.

## ⚠️ Sınırlamalar

- Bağlantısız grafikler için uygun değildir.
- Çok büyük grafiklerde en hızlı algoritma olmayabilir.

---

## 🎥 Görsel Örnek



---

## 📖 Daha Fazla Okuma

- [GeeksforGeeks: Prim Algoritması](https://www.geeksforgeeks.org/prims-minimum-spanning-tree-mst-greedy-algo-5/)
- [Vikipedi: Prim Algoritması](https://tr.wikipedia.org/wiki/Prim_algoritmas%C4%B1)

---

## 📝 Lisans

Bu dokümantasyon MIT Lisansı ile lisanslanmıştır.

