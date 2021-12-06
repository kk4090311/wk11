#include <BluetoothSerial.h>
BluetoothSerial BT;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  BT.begin("110919038Esp32");//請改名
  pinMode(13,OUTPUT);
}

void loop() {
  
  // put your main code here, to run repeatedly:
  while (BT.available())
  {
    //讀取藍芽資料
    String BTdata=BT.readString();
    //顯示在序列視窗
    Serial.println(BTdata);
  
    if (BTdata=="A")
      {
        digitalWrite(13,HIGH);
      }
      if (BTdata=="B")
      {
        digitalWrite(13,LOW);
      }
  }
  delay(1);
}
