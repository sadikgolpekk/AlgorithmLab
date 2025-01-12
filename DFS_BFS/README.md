# DFS ve BFS Algoritmaları

## Giriş
DFS (Depth First Search - Derinlik Öncelikli Arama) ve BFS (Breadth First Search - Genişlik Öncelikli Arama), **graf** ve **ağaç** yapılarında gezinmek veya veri aramak için kullanılan iki temel algoritmadır. Bu algoritmalar, düğümleri belirli bir sıra ile ziyaret eder ve çeşitli uygulamalarda, örneğin yol bulma, veri indeksleme gibi alanlarda yaygın olarak kullanılır.

---

## BFS (Breadth First Search)
### Temel Kavramlar
BFS, bir düğümden başlayarak komşu düğümleri genellik sırasıyla (katman katman) ziyaret eder. Çoğu durumda **kuyruk veri yapısı** kullanılır.

### Ağaçta BFS
- BFS, bir **kök düğüm** ile başlar.
- Komşu düğümleri seviyelere ayırarak tarar.
- Örneğin:
  1. Kökten başlar.
  2. Birinci seviyedeki düğümler ziyaret edilir.
  3. Daha sonra ikinci seviyeye geçilir.

### Grafın BFS Gezinmesi
- Graf yapılarında BFS, her düğümün tüm komşularını ziyaret ederek devam eder.
- **Döngüler** ve **ziyaret edilmiş düğümler** için dikkat edilmelidir; aksi takdirde algoritma sonsuz bir döngüe girebilir.

### BFS Adımları
1. Başlangıç düğümünü kuyrukta sakla.
2. Kuyruğun ilk düğümünü ziyaret et ve düğüme komşularını kuyruğa ekle.
3. Kuyruk boş olana kadar bu adımları tekrarla.

### BFS Kullanım Alanları
- Yol bulma (en kısa yol)
- Veri tabanı sorguları
- Web tarama botları

---

## DFS (Depth First Search)

### Temel Kavramlar
DFS, bir düğümden başlayarak mümkün olduğunca derine iner, daha sonra geri döner. Genelde **yığın veri yapısı** kullanılır veya **recursive ("özyinelemeli") bir yaklaşım** tercih edilir.

### Ağaçta DFS
- DFS, bir düğümün alt dallarını tamamıyla gezmeden bir sonraki düğüme geçmez.
- **Preorder, Inorder, Postorder** gezme yöntemleri DFS türevidir.

### Grafın DFS Gezinmesi
- Graf yapılarında DFS, her düğümün komşularını tek tek ziyaret eder ve bir yol tamamen bitene kadar derine gider.
- DFS'de döngülerden kaçınmak için **ziyaret edilen düğümlerin kaydı tutulur**.

### DFS Adımları
1. Başlangıç düğümünü yığına ekle.
2. Yığındaki son düğümü ziyaret et ve komşularını yığına ekle.
3. Yığın boş olana kadar bu adımları tekrarla.

### DFS Kullanım Alanları
- Labirentten çıkış yolu bulma
- Oyunların yapay zeka uygulamaları
- Topolojik sıralama

---

## BFS ve DFS Karşılaştırması

| **Özellik**             | **BFS**                                | **DFS**                                |
|---------------------------|-----------------------------------------|-----------------------------------------|
| **Yapı**                 | Kuyruk                                 | Yığın veya özyineleme              |
| **Arama Sırası**          | Yatay (katman katman)                  | Derinlemesine                           |
| **Ağaç Kullanımı**       | Seviyelere göre tarar                  | Derinlik bazlı tarar                   |
| **Graf Kullanımı**       | En kısa yolu garantiler               | Derinlik bazlı yaklaşır              |
| **Bellek Kullanımı**       | Daha fazla (geniş grafıklerde)         | Daha az (derin grafıklerde)            |
| **Uygulama Alanları**     | Yol bulma, en kısa mesafe               | Labirent çözümü, topolojik sıralama  |

---

## Örneklerle BFS ve DFS

### BFS Örneği
Bir graf:
```
    A
   / \
  B   C
 /|   |
D E   F
```
**BFS Adımları**:
- Kuyruk: [A]
- A çıkar: [B, C]
- B çıkar: [C, D, E]
- C çıkar: [D, E, F]
- D çıkar: [E, F]
- E çıkar: [F]
- F çıkar: []

Sonuç: **A, B, C, D, E, F**

### DFS Örneği
Aynı graf:
```
    A
   / \
  B   C
 /|   |
D E   F
```
**DFS Adımları**:
- Yığın: [A]
- A çıkar, komşular eklenir: [C, B]
- B çıkar, komşular eklenir: [C, E, D]
- D çıkar: [C, E]
- E çıkar: [C]
- C çıkar, komşular eklenir: [F]
- F çıkar: []

Sonuç: **A, B, D, E, C, F**

---

## Gerçek Hayatta Kullanımlar
- **BFS**:
  - Navigasyon sistemlerinde en kısa yolu bulmak.
  - Sosyal ağ analizlerinde iki kişi arasındaki en kısa bağlantıyı bulmak.

- **DFS**:
  - Sudoku ve labirent çözümlerinde.
  - Derinlik gerektiren graf analizlerinde.

---

## Kaynaklar
- [GeeksforGeeks: BFS ve DFS](https://www.geeksforgeeks.org/)
- [Vikipedi: Arama Algoritmaları](https://tr.wikipedia.org/wiki/)

