class Processor:
    #variabel untuk menampung nama prosesor dan harganya
    __name = ""
    __price = 0

    # constructor
    def __init__(self, name = "", price = 0):
        self.__name = name
        self.__price = price

    # setter and getter
    def setName(self, name):
        self.__name = name
    
    def getName(self):
        return self.__name

    def setPrice(self, price):
        self.__price = price

    def getPrice(self):
        return self.__price

    # method
    def printProcessor(self):
        print("Nama Processor : " + str(self.getName()))
        print("Harga Processor : Rp " + str(self.getPrice()))