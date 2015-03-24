import socket
import threading
import time

class MatlabSender():
    def send(self,data):
        self._data=data
    
    def _worker(self,c):
        c.send(self._data)
        self._data=0
        c.close()
        
    def _start_server(self):
        while 1:        
            host, port= 'localhost',7777
            s=socket.socket()
            s.setsockopt(socket.SOL_SOCKET, socket.SO_REUSEADDR, 1)
            s.bind((host, port))        
            s.listen(port)                
            while(self._data==0):
                pass
            c, addr = s.accept()
            threading.Thread(target=self._worker,args=(c,)).start()    
        
    def __init__(self):
        self._data=0
        self._t=threading.Thread(target=self._start_server)
        self._t.start()
    
    def close(self):
        self._t.join()
    
    def num2str(self,vec):
        s=''        
        for num in vec:
            s=s+`num`+' '
        return s
    
    def str2num(self,s):
        vec=[]        
        snums=s.split()
        for num in snums:
            vec.append(float(num))
        return vec
"""
m=MatlabSender()
i=1
while 1:
    m.add_data(`i`+' '+`2*i`+" "+`3*i`+'\r\n')
    i=i+1
    time.sleep(1)
"""
