from datetime import datetime
import time
i = float(input())
b = float(input())
c = float(input())
start_time = datetime.now()
summa = 0.
for x in range(1,100000001):
    summa += b*2+c-i
z = i + summa
print(z)
time.sleep(1)
print(datetime.now() - start_time)