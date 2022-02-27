class Disk:
    #varibel untuk menampung tipe, kapasitas, dan harga
    __type = ""     
    __capacity = "" 
    __price = 0     

    # constructor
    def __init__(self, type = "", capacity = "", price = 0):
        self.__type = type
        self.__capacity = capacity
        self.__price = price

    # setter and getter
    def setType(self, type):
        self.__type = type
    
    def getType(self):
        return self.__type

    def setCapacity(self, capacity):
        self.__capacity = capacity

    def getCapacity(self):
        return self.__capacity
    
    def setPrice(self, price):
        self.__price = price
    
    def getPrice(self):
        return self.__price

    # method
    def printDisk(self):
        print("Tipe Disk : " + str(self.getType()))
        print("Kapasitas Disk : " + str(self.getCapacity()))
        print("Harga Disk : Rp " + str(self.getPrice()))