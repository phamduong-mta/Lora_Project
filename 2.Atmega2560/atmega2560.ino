#define ENABLE_PIN_UART1 21  // Chân D21
#define ENABLE_PIN_UART2 22  // Chân D22
#define ENABLE_PIN_UART3 23  // Chân D23
#define BAUD_CHANGE_PIN 3    // Chân D3
#define BAUDRATES_NUM 7      // Số lượng baudrate
unsigned long baudrates[] = { 4800, 9600, 19200, 38400, 57600, 115200, 250000 };
int currentBaudrateIndex = 1;  // Chỉ số baudrate hiện tại, mặc định ban đầu là 115200

void setup() {
  Serial.begin(115200);                            // Khởi tạo cổng UART0 với tốc độ 115200 bps
  Serial1.begin(baudrates[currentBaudrateIndex]);  // Khởi tạo cổng UART1 với baudrate mặc định (115200 bps)
  Serial2.begin(baudrates[currentBaudrateIndex]);  // Khởi tạo cổng UART2 với baudrate mặc định (115200 bps)
  Serial3.begin(baudrates[currentBaudrateIndex]);  // Khởi tạo cổng UART3 với baudrate mặc định (115200 bps)
  // Serial1.begin(115200);  // Khởi tạo cổng UART1 với baudrate mặc định (115200 bps)
  // Serial2.begin(115200);  // Khởi tạo cổng UART2 với baudrate mặc định (115200 bps)
  // Serial3.begin(115200);  // Khởi tạo cổng UART3 với baudrate mặc định (115200 bps)
  pinMode(ENABLE_PIN_UART1, INPUT_PULLUP);  // Chọn chân D21 làm INPUT
  pinMode(ENABLE_PIN_UART2, INPUT_PULLUP);  // Chọn chân D22 làm INPUT
  pinMode(ENABLE_PIN_UART3, INPUT_PULLUP);  // Chọn chân D23 làm INPUT
  pinMode(BAUD_CHANGE_PIN, INPUT_PULLUP);   // Chọn chân D3 làm INPUT
}

void loop() {
  if (Serial.available()) {     // Kiểm tra xem có dữ liệu từ UART0 nhận được không
    char data = Serial.read();  // Đọc ký tự từ UART0

    if (digitalRead(ENABLE_PIN_UART1) == HIGH) {  // Kiểm tra chân ENABLE_PIN_UART1
      Serial1.write(data);                        // Gửi ký tự đến UART1
    }
    if (digitalRead(ENABLE_PIN_UART2) == HIGH) {  // Kiểm tra chân ENABLE_PIN_UART2
      Serial2.write(data);                        // Gửi ký tự đến UART2
    }
    if (digitalRead(ENABLE_PIN_UART3) == HIGH) {  // Kiểm tra chân ENABLE_PIN_UART3
      Serial3.write(data);                        // Gửi ký tự đến UART3
    }
  }

  if (digitalRead(BAUD_CHANGE_PIN) == LOW) {                             // Kiểm tra xem chân BAUD_CHANGE_PIN có bị nhấn hay không
    delay(10);                                                            // Đợi để ổn định tín hiệu
    if (digitalRead(BAUD_CHANGE_PIN) == LOW) {                           // Kiểm tra lại xem chân BAUD_CHANGE_PIN vẫn bị nhấn
      currentBaudrateIndex = (currentBaudrateIndex + 1) % BAUDRATES_NUM;  // Chuyển sang baudrate tiếp theo
      Serial1.begin(baudrates[currentBaudrateIndex]);                     // Thay đổi baudrate của UART1
      Serial2.begin(baudrates[currentBaudrateIndex]);                     // Thay đổi baudrate của UART2
      Serial3.begin(baudrates[currentBaudrateIndex]);                     // Thay đổi baudrate của UART3
    }
    while (digitalRead(BAUD_CHANGE_PIN) == LOW) {}  // Đợi chân BAUD_CHANGE_PIN không còn bị nhấn
  }
}
