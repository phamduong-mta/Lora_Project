import time
import serial

com_port = '/dev/ttyUSB1'  # Đường dẫn đến cổng COM
baud_rate = 9600  # Tốc độ baud của cổng COM
ser = serial.Serial(com_port, baud_rate, timeout=1)

value = 1

while value <= 5000:
    data = f"Data receive from Slave_1 is: {value}"
    ser.write(data.encode())

    value += 1
    time.sleep(5)
    
ser.close()

