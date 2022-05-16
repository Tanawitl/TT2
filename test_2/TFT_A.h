
void TFT_AA(){

tft.fillScreen(tft.color24to16(0xFFFFFF));
tft.fillRect(150, 5, 200, 70, tft.color24to16(0x6699FF));//ระยะ
tft.setTextColor(tft.color24to16(0xFFFFFF));//สีข้อความ
tft.setTextSize(2);//ขนาดข้อความ
tft.drawString("Phase", 155, 10);//ข้อความ
tft.drawString("MM", 320, 60);//ข้อความ

tft.drawFastHLine(0, 80, 480, tft.color24to16(0x6699FF));//เส้นบน
tft.drawFastHLine(0, 185, 480, tft.color24to16(0x6699FF));//เส้นล่าง

tft.fillRect(0, 190, 160, 195, tft.color24to16(0x6699FF));//หัวใจ
tft.setTextColor(tft.color24to16(0xFFFFFF));//สีข้อความ
tft.setTextSize(2);//ขนาดข้อความ
tft.drawString("Heart rate", 10, 195);//ข้อความ
tft.drawString("rpm", 120, 300);//ข้อความ

tft.fillRect(165, 190, 155, 195, tft.color24to16(0x6699FF));//ออกซิเจน
tft.setTextColor(tft.color24to16(0xFFFFFF));//สีข้อความ
tft.setTextSize(2);//ขนาดข้อความ
tft.drawString("Spo2", 170, 195);//ข้อความ
tft.drawString("%", 300, 300);//ข้อความ

tft.fillRect(325, 190, 480, 195, tft.color24to16(0x6699FF));//อุณหภูมิ
tft.setTextColor(tft.color24to16(0xFFFFFF));//สีข้อความ
tft.setTextSize(2);//ขนาดข้อความ
tft.drawString("Temp", 330, 195);//ข้อความ
tft.drawString("C", 460, 300);//ข้อความ

/*//ทดสอบข้อความ
tft.setTextColor(tft.color24to16(0x33FFFF));//สีข้อความ
tft.setTextSize(5);//ขนาดข้อความ
tft.drawString("BALANCE", 145, 130);//ข้อความ*/

}



  
  
  
  
  
