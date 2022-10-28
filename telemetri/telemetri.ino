 #include <Wire.h>
void setup() {
  Serial.begin(9600); // seri portu 96000 baud rate ile başlat
  Wire.begin(5); // Wire haberleşmeyi 5 nolu slave cihaz ID'si ile başlat
  Wire.onReceive(veriOku); // Wire ile gelen veriler veriOku fonksiyonu ile okunacak
}
 
void loop() {
  delay(100);
}
 
void veriOku(){
  while(Wire.available()>0){ // Eğer gelen veri varsa
    int 
    veri =  Wire.read(); // cihaza gelen veriyi oku ve "veri" değişkenine aktar
    Serial.print(veri); // veri değişkeni değerini seri porta yazdır
  }
}
