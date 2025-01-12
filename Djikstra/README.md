# Dijkstra Algoritması

![images](https://github.com/user-attachments/assets/31b0cbf1-f819-4014-a57f-cb0424862dae)

## 📚 Dijkstra Algoritması Nedir?

Dijkstra algoritması, **graf üzerindeki iki düğüm arasındaki en kısa yolu bulmak** için kullanılan bir **açgözlü algoritmadır**. Bu algoritma, negatif ağırlıklı kenarların bulunmadığı yönlendirilmiş ya da yönlendirilmemiş grafiklerde çalışır.

### 🔍 Nasıl Çalışır?
1. **Başlangıç düğümünden başla** ve bu düğüme olan mesafeyi 0 olarak ata. Diğer tüm düğümler için başlangıç mesafesi sonsuzdur.
2. Henüz işlenmemiş düğümler arasında mesafesi en küçük olan düğümü seç.
3. Seçilen düğümün tüm komşularının mesafelerini güncelle:
   - Eğer başlangıç düğümünden bir komşuya ulaşmanın daha kısa bir yolu varsa, bu mesafeyi güncelle.
4. Bu işlemi tüm düğümler işlenene kadar tekrarla.

---

![DijkstraOptimality_crDaveWhyte-Social](https://github.com/user-attachments/assets/b5bcebe8-0212-4983-8d0f-ee5e5c624f70)


## ✨ Dijkstra Algoritmasının Özellikleri
- **Açgözlü yaklaşım** kullanır.
- Her düğüm yalnızca bir kez işlenir.
- Kısa yolları hızlı bir şekilde bulur.
- Negatif ağırlıklı kenarları desteklemez.

---

## 🚀 Adım Adım Açıklama

1. **Başlangıç Mesafelerini Belirleme**:
   - Başlangıç düğümünden kendisine olan mesafe 0, diğer düğümler için ise sonsuzdur.

2. **Düğüm Seçimi**:
   - İşlenmemiş düğümler arasından mesafesi en küçük olanı seç.

3. **Komşu Mesafelerini Güncelleme**:
   - Seçilen düğümün komşuları kontrol edilir.
   - Daha kısa bir yol bulunursa, mesafe değeri güncellenir.

4. **Tekrarla**:
   - Tüm düğümler işlenene kadar bu adımları sürdür.

5. **Sonuç**:
   - Başlangıç düğümünden diğer tüm düğümlere olan en kısa mesafeler hesaplanmış olur.

---

## 📖 Dijkstra Algoritması Örneği

### Giriş Grafı:

Düğümler: A, B, C, D, E, F

Ağırlıklı Kenarlar:

- A-B: 1
- A-C: 4
- B-C: 2
- B-D: 6
- C-D: 3
- C-E: 2
- D-E: 1
- D-F: 5
- E-F: 4

### Algoritma Adımları:

1. Başlangıç düğümü: **A**

   - Mesafeler: A=0, B=∞, C=∞, D=∞, E=∞, F=∞

2. **A'dan B'ye git (1)**:

   - Güncellenen mesafeler: A=0, B=1, C=∞, D=∞, E=∞, F=∞

3. **B'den C'ye git (2)**:

   - Güncellenen mesafeler: A=0, B=1, C=3, D=∞, E=∞, F=∞

4. **C'den E'ye git (2)**:

   - Güncellenen mesafeler: A=0, B=1, C=3, D=∞, E=5, F=∞

5. **C'den D'ye git (3)**:

   - Güncellenen mesafeler: A=0, B=1, C=3, D=6, E=5, F=∞

6. **E'den F'ye git (4)**:

   - Güncellenen mesafeler: A=0, B=1, C=3, D=6, E=5, F=9

7. **D'den F'ye git (5)** (Alternatif yol):

   - A=0, B=1, C=3, D=6, E=5, F=9 (Değişim yok)

### Çıktı:

Başlangıç düğümünden diğer düğümlere en kısa mesafeler:

- A -> A: 0
- A -> B: 1
- A -> C: 3
- A -> D: 6
- A -> E: 5
- A -> F: 9

Alternatif yollar da değerlendirilmiştir.

---

## 🌍 Gerçek Hayattan Örnekler

1. **Navigasyon Sistemleri**:
   - GPS uygulamaları, iki konum arasındaki en kısa rotayı bulmak için Dijkstra algoritmasını kullanır.

2. **Ağ Yönlendirme Protokolleri**:
   - İnternet üzerinden veri paketlerini en kısa yoldan iletmek için kullanılır.

3. **Havaalanı Uçuş Planlaması**:
   - İki havaalanı arasındaki en kısa mesafeli uçuş rotasını belirlemek için uygulanır.

4. **Robotik**:
   - Bir robotun başlangıç noktasından hedefe giderken en kısa yolu bulmasında kullanılır.

---

## 🌟 Avantajlar ve Dezavantajlar

### Avantajlar
- Basit ve etkili bir algoritmadır.
- Yönlendirilmiş ve yönlendirilmemiş grafiklerde çalışır.
- Pozitif ağırlıklı kenarlarla garantili doğru sonuç üretir.

### Dezavantajlar
- Negatif ağırlıklı kenarlarla çalışmaz.
- Yoğun grafiklerde verimli olmayabilir.

---

## 📖 Daha Fazla Okuma
- [GeeksforGeeks: Dijkstra Algoritması](https://www.geeksforgeeks.org/dijkstras-shortest-path-algorithm-greedy-algo-7/)
- [Vikipedi: Dijkstra Algoritması](https://tr.wikipedia.org/wiki/Dijkstra%27n%C4%B1n_algoritmas%C4%B1)


