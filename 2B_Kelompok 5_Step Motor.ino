#include <M5Stack.h>          //untuk inisialisasi dari library M5Stack.h

const int MOTOR_A_A = 2;      //untuk menginisialisasi MOTOR_A_A pada pin 2
const int MOTOR_A_B = 5;      //untuk menginisialisasi MOTOR_A_B pada pin 5
const int MOTOR_A_C = 12;     //untuk menginisialisasi MOTOR_A_C pada pin 12
const int MOTOR_A_D = 13;     //untuk menginisialisasi MOTOR_A_D pada pin 13
void setup() {      //untuk mengeksekusi perintah dari program yang dibuat hanya berjalan satu kali pada awal program
  M5.begin();
  pinMode(MOTOR_A_A, OUTPUT);   //untuk mengkonfigurasi pin MOTOR_A_A sebagai output
  pinMode(MOTOR_A_B, OUTPUT);   //untuk mengkonfigurasi pin MOTOR_A_B sebagai output
  pinMode(MOTOR_A_C, OUTPUT);   //untuk mengkonfigurasi pin MOTOR_A_C sebagai output
  pinMode(MOTOR_A_D, OUTPUT);   //untuk mengkonfigurasi pin MOTOR_A_D sebagai output
}
void loop() {      //untuk mengeksekusi perintah dari program yang dibuat secara berulang
  digitalWrite(MOTOR_A_A, HIGH);  //untuk mengeset MOTOR_A_A ke kondisi HIGH atau NYALA
  digitalWrite(MOTOR_A_B, HIGH);  //untuk mengeset MOTOR_A_B ke kondisi HIGH atau NYALA
  digitalWrite(MOTOR_A_C, LOW);   //untuk mengeset MOTOR_A_C ke kondisi LOW atau MATI
  digitalWrite(MOTOR_A_D, LOW);   //untuk mengeset MOTOR_A_D ke kondisi LOW atau MATI
  delay(2);    //untuk memberikan waktu jeda pada perintah sebelumnya dengan selanjutnya dengan waktu 2 detik
  digitalWrite(MOTOR_A_A, LOW);   //untuk mengeset MOTOR_A_A ke kondisi LOW atau MATI
  digitalWrite(MOTOR_A_B, HIGH);  //untuk mengeset MOTOR_A_B ke kondisi HIGH atau NYALA
  digitalWrite(MOTOR_A_C, HIGH);  //untuk mengeset MOTOR_A_C ke kondisi HIGH atau NYALA
  digitalWrite(MOTOR_A_D, LOW);   //untuk mengeset MOTOR_A_D ke kondisi LOW atau MATI
  delay(2);    //untuk memberikan waktu jeda pada perintah sebelumnya dengan selanjutnya dengan waktu 2 detik
  digitalWrite(MOTOR_A_A, LOW);   //untuk mengeset MOTOR_A_A ke kondisi LOW atau MATI
  digitalWrite(MOTOR_A_B, LOW);   //untuk mengeset MOTOR_A_B ke kondisi LOW atau MATI
  digitalWrite(MOTOR_A_C, HIGH);  //untuk mengeset MOTOR_A_C ke kondisi HIGH atau NYALA
  digitalWrite(MOTOR_A_D, HIGH);  //untuk mengeset MOTOR_A_D ke kondisi HIGH atau NYALA
  delay(2);    //untuk memberikan waktu jeda pada perintah sebelumnya dengan selanjutnya dengan waktu 2 detik
  digitalWrite(MOTOR_A_A, HIGH);  //untuk mengeset MOTOR_A_A ke kondisi HIGH atau NYALA
  digitalWrite(MOTOR_A_B, LOW);   //untuk mengeset MOTOR_A_B ke kondisi LOW atau MATI
  digitalWrite(MOTOR_A_C, LOW);   //untuk mengeset MOTOR_A_C ke kondisi LOW atau MATI
  digitalWrite(MOTOR_A_D, HIGH);  //untuk mengeset MOTOR_A_D ke kondisi HIGH atau NYALA
  delay(2);    //untuk memberikan waktu jeda pada perintah sebelumnya dengan selanjutnya dengan waktu 2 detik
}
