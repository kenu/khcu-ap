class Bicycle:
    color = ''
    
    def setColor(self, _color):
        self.color = _color
    
    def printColor(self):
        print("color: " + self.color)

if  __name__ =='__main__':
    mtb = Bicycle()
    mtb.setColor('blue')
    mtb.printColor()
