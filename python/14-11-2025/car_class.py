class Car:
    def __init__(self, brand, color):
        self.brand = brand
        self.color = color

    def display(self):
        print("My car is a", self.color, self.brand)

c1 = Car("Toyota", "Red")
c2 = Car("Honda", "Blue")

c1.display()
c2.display()
