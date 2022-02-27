from Processor import Processor
from Ram import Ram
from Disk import Disk
from PC import PC

cpu = Processor("Core i7 8th Gen", 120000)
memory = Ram("64GB", 300000)
storage = Disk("SSHD", "1TB", 500000)
totalHarga = cpu.getPrice() + memory.getPrice() + storage.getPrice()

laptop = PC(cpu, memory, storage, totalHarga)

#menampilkan keluaran
laptop.printPC()