from Processor import Processor
from Ram import Ram
from Disk import Disk

class PC:
    #untuk menampung data dari processor, disk, ram, dan total harga
    __processor1 = Processor()    
    __ram1 = Ram()                
    __disk1 = Disk()            
    __totalPrice = 0                

    # constructor
    def __init__(self, Processor1, ram1, disk1, totalPrice = 0):
        self.__processor1 = Processor1
        self.__ram1 = ram1
        self.__disk1 = disk1
        self.__totalPrice = totalPrice

    # setter and getter
    def setProcessor(self, processor1):
        self.__processor1 = processor1
    
    def getProcessor(self):
        return self.__processor1

    def setRAM(self, ram1):
        self.__ram1 = ram1

    def getRAM(self):
        return self.__ram1

    def setDisk(self, disk1):
        self.__disk1 = disk1
    
    def getDisk(self):
        return self.__disk1
    
    def setTotalPrice(self, totalPrice):
        self.__totalPrice = totalPrice
    
    def getTotalPrice(self):
        return self.__totalPrice

    # method
    def printPC(self):
        print("==============================")
        self.__processor1.printProcessor()
        self.__ram1.printRAM()
        self.__disk1.printDisk()
        print("Total Harga : Rp " + str(self.getTotalPrice()))
        print("==============================")