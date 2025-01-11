# Kruskal Algoritması

## 📚 Kruskal Algoritması Nedir?

Kruskal algoritması, **Minimum Yayılım Ağacı (MST)** bulmak için kullanılan bir başka **açgözlü algoritmadır**. Bu algoritma, kenarları ağırlıklarına göre sıralayarak ve her adımda en küçük ağırlıklı kenarı seçerek MST'yi oluşturur.

### 🔍 Nasıl Çalışır?
1. Tüm kenarları ağırlıklarına göre artan sıraya diz.
2. Sırasıyla her kenarı kontrol et:
   - Eğer kenarın eklenmesi bir çevrim oluşturmazsa, MST'ye ekle.
   - Çevrim oluşuyorsa kenarı atla.
3. Tüm düğümler MST'ye dahil edildiğinde işlem tamamlanır.

---

![600px-MST_kruskal_en](https://github.com/user-attachments/assets/cd643ead-75a4-486d-a723-4877ab324915)



## ✨ Kruskal Algoritmasının Özellikleri
- Kenarları sıralar ve en küçükten başlayarak ekler.
- Çevrim kontrolü için genellikle **Birleştirme ve Bulma (Union-Find)** veri yapısı kullanılır.
- Basit ve genellikle seyrek grafiklerde etkilidir.

---

## 🚀 Adım Adım Açıklama

1. **Kenarların Sıralanması**:
   - Grafın tüm kenarlarını ağırlıklarına göre sıralar.

2. **Kenar Seçimi**:
   - Her kenarı sırayla kontrol eder.
   - Eğer kenarın eklenmesi çevrim oluşturmazsa, bu kenar MST'ye eklenir.

3. **Tekrarla**:
   - Bu işlemi, tüm düğümler MST'ye dahil edilene kadar sürdürür.

4. **Sonuç**:
   - Tüm düğümler bağlandığında, MST tamamlanmış olur.

---

## 📖 Kruskal Algoritması Örneği

### Giriş Grafı:
Düğümler: A, B, C, D, E

Ağırlıklı Kenarlar:
- A-B: 1
- A-C: 4
- B-C: 2
- B-D: 6
- C-D: 3
- C-E: 5
- D-E: 7

### Kruskal Algoritması Adımları:

1. Kenarları sıralar: (A-B: 1), (B-C: 2), (C-D: 3), (A-C: 4), (C-E: 5), (B-D: 6), (D-E: 7)

2. İlk kenarı ekler: **A-B (1)**
   - MST: {A, B}

3. İkinci kenarı ekler: **B-C (2)**
   - MST: {A, B, C}

4. Üçüncü kenarı ekler: **C-D (3)**
   - MST: {A, B, C, D}

5. Dördüncü kenarı ekler: **C-E (5)**
   - MST: {A, B, C, D, E}

### MST Sonucu:
Kenarlar: (A-B, B-C, C-D, C-E)
Toplam Ağırlık: 1 + 2 + 3 + 5 = **11**

---

## ✨ Prim ve Kruskal Algoritmaları Arasındaki Farklar

| Özellik                 | Prim Algoritması                               | Kruskal Algoritması                          |
|-------------------------|-----------------------------------------------|---------------------------------------------|
| Yaklaşım                | Düğüm odaklı                                  | Kenar odaklı                                |
| Çalışma Şekli           | Ziyaret edilen düğümlere en yakın kenarı seçer | En küçük ağırlıklı kenarları sıralayarak ekler |
| Veri Yapısı İhtiyacı    | Öncelikli kuyruk                              | Birleştirme ve Bulma (Union-Find)          |
| Yoğun Grafikte Performans| Daha etkili                                  | Daha yavaş                                  |
| Seyrek Grafikte Performans| Daha yavaş                                  | Daha etkili                                 |

---

## 🌟 Avantajlar ve Dezavantajlar

### Prim Algoritması
- **Avantajlar**:
  - Yoğun grafiklerde daha hızlı çalışır.
  - Ziyaret edilen düğümleri takip etmek için uygundur.
- **Dezavantajlar**:
  - Kenarların sıralanmasını gerektirmez ama yoğun olmayan grafiklerde daha az verimlidir.

### Kruskal Algoritması
- **Avantajlar**:
  - Seyrek grafiklerde daha hızlıdır.
  - Kenar sıralaması ile çalıştığı için uygulanması basittir.
- **Dezavantajlar**:
  - Yoğun grafiklerde çevrim kontrolü maliyetli olabilir.

---

## 📖 Daha Fazla Okuma
- [GeeksforGeeks: Kruskal Algoritması](https://www.geeksforgeeks.org/kruskals-minimum-spanning-tree-algorithm-greedy-algo-2/)


---



