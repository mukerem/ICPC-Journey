import threading 
def mytimer(): 
   print("Python Program\n") 
my_timer = threading.Timer(3000.0, mytimer) 
my_timer.start() 
print("Cancelling timer\n") 
my_timer.cancel() 
print("Bye\n") 
