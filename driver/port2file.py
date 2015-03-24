# -*- coding: utf-8 -*-
"""
Created on Tue Dec  9 14:33:44 2014

@author: joanpallaressado
"""

#!/usr/bin/python
# -*- coding: utf-8 -*-
import time
import sys
import serial
import serial.tools.list_ports as list
import socket
import threading
from pykeyboard import PyKeyboard
#import MatlabSender

#inicialitzem el teclat
k=PyKeyboard()
#inicialtzem la interficie amb matlab
#p2m=MatlabSender.MatlabSender()

#iterem sobre els ports serie per a executar un protocol de comunicació.
devices=list.comports()
for d in devices:
    try:
        s=serial.Serial(d[0],9600)
        time.sleep(2) #esperem a que s'inicialitzi la connexió        
        s.write('who')
        time.sleep(2)
        if 'arduino' in s.readline():
            s.write('OK') #arduino detectat, indiquem que podem rebre dades
            time.sleep(2)            
            print 'arduino port found:',d[0]
            while(1):
                aux=s.readline()
                print aux
                
                if(aux[0]=='c'):
                    k.tap_key(aux[8])
                elif(aux[0]=='d'):
                    #p2m.send(aux[6:]+'\r\n')
                    file=open('posicio','a')
                    file.write(aux[6:]+'\r\n')
                    file.close()
                #time.sleep(1/30)
    except: # catch *all* exceptions
        pass
print 'arduino port not found'
#p2m.close()
s.close()

