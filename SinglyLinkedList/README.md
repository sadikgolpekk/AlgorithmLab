# Tek Yönlü Bağlı Liste (Singly Linked List) Örneği

Bu proje, **tek yönlü bağlı liste** (Singly Linked List) veri yapısının temel işlemlerini gerçekleştiren bir C programını içermektedir. Program, dinamik bellek yönetimi kullanarak bağlı liste üzerinde eleman ekleme, araya ekleme, başa ekleme, sona ekleme ve eleman silme işlemlerini göstermektedir.

## Özellikler

1. **Eleman Ekleme**:
   - Yeni bir düğüm oluşturup listeye ekler.

2. **Araya Ekleme**:
   - Listenin herhangi bir yerine yeni bir düğüm ekler.

3. **Başa Ekleme**:
   - Listeye yeni bir düğüm ekleyerek onu ilk eleman yapar.

4. **Sona Ekleme**:
   - Listenin sonuna yeni bir düğüm ekler.

5. **Eleman Silme**:
   - Listeden belirtilen bir düğümü siler.

## Çalışma Prensibi

### Bağlı Liste Yapısı

Her düğüm (node):
- **Veri** (data) alanı içerir (`yas` değişkeni).
- **Bir Sonraki Düğümü Gösteren İşaretçi** (next pointer) içerir.

### İşlemler

1. **Eleman Ekleme**:
   - Yeni bir düğüm oluşturulur.
   - Mevcut listenin sonundaki düğümün `next` işaretçisi bu yeni düğümü gösterecek şekilde ayarlanır.

2. **Araya Ekleme**:
   - Yeni düğüm oluşturulur.
   - Yeni düğümün `next` işaretçisi, eklenmek istenen pozisyondaki mevcut düğüme bağlanır.
   - Bir önceki düğümün `next` işaretçisi bu yeni düğümü gösterecek şekilde değiştirilir.

3. **Başa Ekleme**:
   - Yeni bir düğüm oluşturulur.
   - Yeni düğümün `next` işaretçisi mevcut ilk düğümü gösterecek şekilde ayarlanır.
   - Liste başlangıcı (`root`) bu yeni düğümü gösterecek şekilde güncellenir.

4. **Sona Ekleme**:
   - Listenin sonuna gidilir.
   - Yeni bir düğüm oluşturulur ve son düğümün `next` işaretçisi bu yeni düğümü gösterecek şekilde ayarlanır.

5. **Eleman Silme**:
   - Silinecek düğüme ulaşılır.
   - Silinecek düğümün bir önceki düğümünün `next` işaretçisi, silinecek düğümün bir sonrasını gösterecek şekilde ayarlanır.
   - Silinen düğümün belleği serbest bırakılır.

## Kullanım Alanları

- **Dinamik Veri Yönetimi**:
  Bağlı listeler, veri yapılarının boyutunun önceden bilinmediği durumlarda dinamik bir çözüm sunar.
  
- **Sıralı Veriler**:
  Bağlı listeler, elemanların sıralı tutulması gereken veri yönetimi durumlarında kullanılabilir.
  
- **Stack ve Queue Uygulamaları**:
  Bağlı listeler, yığın (stack) ve kuyruk (queue) veri yapılarının temelini oluşturur.

## Derleme ve Çalıştırma

1. Kodu bir `.c` dosyasına kaydedin (örneğin: `linked_list.c`).
2. Derlemek için şu komutu kullanın:
   ```bash
   gcc linked_list.c -o linked_list
