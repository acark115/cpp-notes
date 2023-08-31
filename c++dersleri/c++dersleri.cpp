// c++dersleri.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
//

#include <iostream>/*standarttır input ve output işlemlerini gerçekleştirir*/
using namespace std;/*sürekli std yazmamak için kullanılır*/
#include <string>
#include <locale.h>
//FONKSİYONLAR
void selamver() {
    cout << "kullanici sisteme girdi"<<endl;
}
void anasayfayagotur() {
    cout << "kullanici ana sayfaya gidiyor"<<endl;
}
void anasayfa() {
    cout << "kullanici anasayfadadir"<<endl;
}
int main()
{
    setlocale(LC_ALL, "Turkish");
    std::cout << "Hello World!\n";/*cout: ekranda gösterilecek yani buradaki yazıyı ekrana ver demek istiyor endl: bu yazıdan sonra bir alt satıra geç demektir*/
    std::cout << "2\n"; /*std: std bir isim uzayıdır yani tüm yazılar değişkenler hepsi std tutulucak demektir*/
    /*peki sürekli std yazmak zorundamıyız hayır bunun için include nin altına "using namespace std;" kodunu ekledik */
    cout << "merhaba dunya\n";
    cout << "merhaba github," << "sa," << "....\n";/*istediğiniz kadar yazabilirsiniz*/

    //------------------------------------------------------------DEĞİŞKENLER---------------------------------------------------------------------------
    int ilksayi = 15;
    cout << ilksayi << endl; // ilksayi'nin değerini yazdır ve alt satıra geç

    int ikincisayi = 3;
    cout << "ikinci sayi:" << ikincisayi << endl; // metni ve ikincisayi'nin değerini yazdır, sonra alt satıra geç
    
    /*int tam sayıları tutar ve tam sayı değişkenlerinin başına int yazılır*/
    
    double ucuncusayi = 2.15;
    cout <<"ucuncu sayi degeri:" << ucuncusayi << endl;
    /*double ondalıklı sayı tutar*/

    char isminbasharfi = 't';
    cout << "ismin bas harfi:" << isminbasharfi << endl;
    /*char tek bir harf tutabilir ve tek tırnakla yazılır*/

    /*stringi c ve c++ dillerinde tek başına yazamıyoruz bu yüzden yukarıya string kütüphanesi ekliyoruz*/

    string isim = "kerem arda ";
    string soyisim = "acar";
    cout << "ismin ve soyismin ne:" << isim << soyisim << endl;

    bool adminmi = true;
    

    //----------------------------İNPUT İŞLEMLERİ--------------------------------------------------------
    string isim2;/*boş bir isim değişkeni tanımladık bunu kullanıcıya tanımlayacağız*/
    string soyad;
    cout << "lutfen isminizi giriniz:";
    cin >> isim2;/*kullanıcı girdiği ismi isim değişkenine kaydediyor*/
    cout << "lutfen soy isminizi giriniz: ";
    cin >> soyad;
    cout << "kullanici adi:" << isim2 << endl;
    cout << "soyisim:" << soyad << endl;

    //----------------------İNPUT SAYİSAL İŞLEMLER-------------------
    int sayi2;
    int sayi3;
    cout << "ilk sayiyi giriniz:";
    cin >> sayi2;
    cout << "ikinci sayiyi giriniz:";
    cin >> sayi3;
    int topla = sayi2 + sayi3;
    cout << "toplamlari:" << topla << endl;
    printf("enes patos");

    //--------------------------OPEROTÖRLER-------------------------------------

    int sayi7 = 2;  // sayi7 değişkenini 2 olarak tanımladık
    sayi7 = 5;      // sayi7 değişkeninin değerini 5 yaptık
    sayi7 += 5;     // sayi7 değişkenine 5 ekledik
    sayi7 -= 2;     //sayi7 değişkeninden 2 çıkardık
    sayi7 *= 2;     //sayi7 değişkeninin değerini 2 ile çarptık
    cout << sayi7;

    int sayibir = 5, sayiiki = 2;
    (sayibir > sayiiki);//bunun çıktısı 1 olacaktır yani doğru demektir
    (sayibir < sayiiki);//bunun çıktısı 0 olacaktır yani yanlış demektir

    /*int sayi9 = 5, sayi10 = 2;
    bool sonuc;
    sonuc=(sayi9 > sayi10);
    cout << sonuc;//sonucu 1 veriyor yani sonuc değeri 1 oldu*/
    
    /*int sayi9 = 5, sayi10 = 5;
    bool sonuc;
    sonuc = (sayi9==sayi10);
    cout << sonuc;//sonucu 1 veriyor yani sonuc değeri 1 oldu*/
   
    /*int sayi9 = 5, sayi10 = 5;
    bool sonuc;
    sonuc = (sayi9 != sayi10);
    cout << sonuc;// ünlem eşittir bu iki sayı birbirine eşit değilmidir diye sorar ve 0 değerini verir*/

    int sayi9 = 5, sayi10 = 5;
    bool sonuc;
    sonuc = (sayi9 >= sayi10);
    cout << sonuc;//>= işareti 5 5 ten büyük eşit ise 1 değil ise 0 değeri verir
   

    //-----------------------------------------MATH KÜTÜPHANESİ----------------------------------------------

    int sayi78 = 5;
    int sayi87 = 2;
    cout << max(sayi78, sayi87);//max math kütüphanesinden gelir maxın görevi parantezlerin içine parametre dediğimiz iki değer gönderiyoruz göndereceğimiz bu iki değer biri sayi78 ve sayi87 bunların değerlerine bakıyor ve hangisi büyükse onu ekrana yazdırıyor
    //aynı şekilde max yerine minde yazılabilir min de ise en küçük değeri yazdırır 


    //--------------------İF-&&-ELSEİF-&&-ELSE-----------------------------


    int x = 5;
    int y = 2;

    if (x>y)
    {
        cout << "x>y" << endl;
    }
    else
    {
        cout << "x<y" << endl;
    }


    //örnek:
    int sifre;
    cout << "sifreyi giriniz" << endl;
    cin >> sifre;
    if (sifre==0)
    {
        cout << "giris yapildi" << endl;
    }
    else {
        cout << "giris yapilamadi" << endl;
    }

    //örnek:
    string username = "kullanici";
    string password = "sifre";

    string inputUsername;
    string inputPassword;

    cout << "Kullanici Adi: ";
    cin >> inputUsername;

    cout << "Sifre: ";
    cin >> inputPassword;

    if (inputUsername == username && inputPassword == password) {
        cout << "Giris basarili" << endl;
    }
    else {
        cout << "Giris basarisiz" << endl;
    }
    //Conditionals da string ifadeler 

    string kerem ;
    int p ;
    cout << "lütfen kullanıcı adınızı giriniz";
    cin >> kerem;
    cout << "lütfen şifrenizi giriniz";
    cin >> p;
    if(kerem == "kerem" && p == 1234) {
        cout << "Giriş başarılı";
    }
    else
    {
        cout << "hatalı giriş yapıldı";
    }
    // SWİTCH
    int y;
    cout << "lütfen günü sayı şeklinde giriniz";
    cin >> y;
    switch (y) {
    case 1:
        cout << "pazartesi";
        break;
    case 2:
        cout<<"sali";
        break;
    case 3:
        cout << "çarşamba";
        break;
    case 4:
        cout << "perşembe";
        break;
    case 5:
        cout << "cuma";
        break;
    case 6:
        cout << "cumartesi";
        break;
    case 7:
        cout << "pazar";
        break;
    default:
        cout << "hatalı bir işlem yapıldı";
        
    }
    cout <<endl<< "işlem bitti";
    /*break işlemin bittiğini söyler .Eğer örneğin 8 girişi yapıldığı zaman default çıktısı üretir*/
   
    //uygulama
    int sayi01, sayi02, tercih;
    cout << "sayi1 i giriniz:";
    cin >> sayi01;
    cout << "sayı 2 yi giriniz";
    cin >> sayi02;
    cout << "lütfen yapmak istediğiniz işlemi seçiniz" << endl;
    cout << "toplama islemi icin 1 e basınız" << endl << "çıkarma işlemi için 2 ye basınız" << endl;
    cin >> tercih;
    switch (tercih) {
    case 1:
        cout << "toplama işlemi sonucu:"<<sayi01+sayi02;
        break;
    case 2:
        cout << "çıkarma işlemi sonucu:"<<sayi01-sayi02;
        break;
    default:
        cout << "hatalı tercih";
    }
    // EHLİYET ALMA UYGULAMASI
    int yas1;
    cout << "yaşınızı giriniz:";
    cin >> yas1;
    if (yas1 >= 18) {
        cout << "ehliyet alabilirsiniz";
    }
    else
    {
        cout << "ehliyet alamazsınız";
    }
    //--------------------------------WHİLE DÖNGÜSÜ--------------------------------
    int i = 0;
    while (i<5){
        cout <<i<< endl;
        i++;//i=i+1
    }//ekrana dongu değeri yazıldıktan sonra 5 e kadar devam edicek

    //---------------FOR DÖNGÜSÜ-------------------
    for (int a = 0; a < 10; a=a+2)//sadece bu süslü parantezlerin içinde çalışan bir değişken atadık
    {
        cout << a << endl;
    }//a değişkeni yaptık ve şart sağlanıyorsa değeri arttıracak
    //a=a+1 ile tüm sayıları,a=a+2 ile ile çift sayıları çekeriz



    //DİZİLER
    int q[3] = {1,12,27};
    cout << q[1];
    string w[3] = { "tolgahan","kerem","arda" };
    cout << w[2];
    //FONKSİYONLAR
    selamver();
    anasayfayagotur();
    anasayfa();

    //PARAMETRELER VE FONKSİYONLAR

}

//Çıktılarda türkçe karakter almak için locale.h kütüphanesini ekleyin ve mainin içine setlocale(LC_ALL, "Turkish"); kodunu ekleyin
// Programı çalıştır: Ctrl + F5 veya Hata Ayıkla > Hata Ayıklamadan Başlat menüsü
// Programda hata ayıkla: F5 veya Hata Ayıkla > Hata Ayıklamayı Başlat menüsü

// Kullanmaya Başlama İpuçları: 
//   1. Dosyaları eklemek/yönetmek için Çözüm Gezgini penceresini kullanın
//   2. Kaynak denetimine bağlanmak için Takım Gezgini penceresini kullanın
//   3. Derleme çıktısını ve diğer iletileri görmek için Çıktı penceresini kullanın
//   4. Hataları görüntülemek için Hata Listesi penceresini kullanın
//   5. Yeni kod dosyaları oluşturmak için Projeye Git > Yeni Öğe ekle veya varolan kod dosyalarını projeye eklemek için Proje > Var Olan Öğeyi Ekle adımlarını izleyin
//   6. Bu projeyi daha sonra yeniden açmak için Dosya > Aç > Proje'ye gidip .sln uzantılı dosyayı seçin
//   7./**/bu yorum satırıdır
