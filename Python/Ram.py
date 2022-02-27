class Ram:
    #menampung kapasitas dan harga
    __capacity = "" 
    __price = 0     

    # constructor
    def __init__(self, capacity = "", price = 0):
        self.__capacity = capacity
        self.__price = price

    # setter and getter
    def setCapacity(self, capacity):
        self.__capacity = capacity

    def getCapacity(self):
        return self.__capacity
    
    def setPrice(self, price):
        self.__price = price
    
    def getPrice(self):
        return self.__price

    # method
    def printRAM(self):
        print("Kapasitas RAM : " + str(self.getCapacity()))
        print("Harga RAM : Rp " + str(self.getPrice()))