#!/usr/bin/python
# -*- coding: utf-8 -*-
import time
import sys
import serial
import serial.tools.list_ports as list
import socket
import threading
import scipy
import scipy.integrate as integrate
from pykeyboard import PyKeyboard
import MatlabSender

#inicialitzem el teclat
k=PyKeyboard()
#inicialtzem la interficie amb matlab
p2m=MatlabSender.MatlabSender()

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
            a=[[],[],[]]
            pos=[]            
            while(1):
                aux=s.readline()
                #print aux
                #print 'posicio llegida'
                if(aux[0]=='c'):
                    k.tap_key(aux[8])
                    if(aux[8]==' '):
                        pos=[]
                        a=[[],[],[]]
                        
                elif(aux[0]=='d'):
                    #print 'dada llegida'
                    d=p2m.str2num(aux[6:])
                    #print d
                    if(scipy.size(a[0])>1):
                        for i in range(3):
                            #print 'dins bucle'
                            a[i].append(d[i])
                            #print a[i]
                            pos[i]=integrate.simps(integrate.cumtrapz(a[i]))
                        print pos
                    #p2m.send(aux[6:]+'\r\n')
                    
                    p2m.send(p2m.num2str(pos))
                
    except: # catch *all* exceptions
        pass
    
print 'arduino port not found'
p2m.close()
s.close()
