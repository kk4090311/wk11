#include <BluetoothSerial.h>
BluetoothSerial BT;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  BT.begin("110919038Esp32");//請改名
  pinMode(13, OUTPUT);
  pinMode(14, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(27, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  while (BT.available()) {
    //讀取藍芽資料
    String BTdata=BT.readString();
    if(BTdata == "p1 is 1"){
      digitalWrite(13, HIGH);
    }else if(BTdata == "p1 is 2"){
      digitalWrite(12, HIGH);
    }else if(BTdata == "p2 is 1"){
      digitalWrite(14, HIGH);
    }else if(BTdata == "p2 is 2"){
      digitalWrite(27, HIGH);
    }else if(BTdata == "rewind"){
      digitalWrite(13, LOW);
      digitalWrite(12, LOW);
      digitalWrite(14, LOW);
      digitalWrite(27, LOW);
    }
    //顯示在序列視窗
    Serial.println(BTdata);
  }
  delay(1);
}
