# İkili Arama Ağacı (Binary Search Tree) ve İşlemleri

Bu proje, ikili arama ağacı (Binary Search Tree) veri yapısını oluşturmak ve bu yapı üzerinde çeşitli işlemleri gerçekleştirmek için bir uygulamadır.

## Özellikler

1. **Eleman Ekleme**: Ağaca yeni düğümler ekleyerek ikili arama ağacını oluşturur.
2. **Küçükten Büyüğe Sıralama**: `Inorder Traversal` yöntemiyle düğümleri küçükten büyüğe sıralar.
3. **Eleman Arama**: Ağacın içinde belirli bir elemanın var olup olmadığını kontrol eder.
4. **Maksimum ve Minimum Değer Bulma**: Ağacın en büyük ve en küçük elemanını bulur.
5. **Düğüm Silme**: Ağacın içinden belirli bir düğümü siler ve ağacın yapısını korur.

## Kullanılan Fonksiyonlar

### 1. `node *ekle(node *agac, int x)`
- Ağaca yeni bir düğüm ekler.
- Eğer ağaç boşsa, kök düğümü oluşturur.
- Yeni elemanı ağaca uygun şekilde (küçükse sola, büyükse sağa) yerleştirir.

### 2. `void dolas(node *agac)`
- `Inorder Traversal` yöntemini kullanarak ağacı küçükten büyüğe sıralar.
- Sıralama sırası: **Sol Alt Ağaç → Kök → Sağ Alt Ağaç**

### 3. `int bul(node *agac, int aranan)`
- Verilen değeri ağacın içinde arar.
- Bulursa `1`, bulamazsa `-1` döner.

### 4. `int max(node *agac)`
- Ağacın en büyük değerini bulur.
- En sağdaki düğüme giderek bu değeri döndürür.

### 5. `int min(node *agac)`
- Ağacın en küçük değerini bulur.
- En soldaki düğüme giderek bu değeri döndürür.

### 6. `node *sil(node *agac, int x)`
- Ağacın içinden belirli bir düğümü siler.
- Silme işleminde üç farklı durumu ele alır:
  1. Silinecek düğüm yaprağıdır (alt düğümü yoktur).
  2. Silinecek düğümün bir alt düğümü vardır.
  3. Silinecek düğümün iki alt düğümü vardır.

## Kullanım

Kodun ana dosyasında örnek bir ağaç oluşturulmuş ve işlemler gerçekleştirilmiştir:

- Ağaç elemanları eklenmiş.
- Elemanlar sıralanmış (`Inorder Traversal`).
- Bir eleman aranmış.
- Ağacın maksimum ve minimum değerleri bulunmuş.
- Belirli bir eleman silinmiş.

### Örnek Çıktı

```plaintext
Kucukten buyuge siralama: (Left,Node,Right: InOrder): 12 18 24 26 27 28 56 190 200 213
Arama sonucu: 1
max 213 min 12
Eleman silme: 12 18 24 26 27 28 190 200 213
