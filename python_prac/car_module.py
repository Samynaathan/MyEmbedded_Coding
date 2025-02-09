class Car:
    def __init__(self, model, year, colour, for_sale):
        self.model = model  #intance variables
        self.year = year
        self.colour = colour
        self.for_sale = for_sale

    def driving(self):
        print(f"you drive the {self.colour} {self.model}")

    def stop(self):
        print(f"you stop the {self.colour} {self.model}")

    def describe(self):
        print(f"{self.year} {self.colour} {self.model}")
