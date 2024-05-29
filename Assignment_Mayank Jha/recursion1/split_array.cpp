class  MyClass:
	def __init__(self):
		self.count=0
	def move(self,r,c,cr,cc,direction):
		if cr>=r or cc>=c:
			return
		if cr==r-1 and cc==c-1:
			print(direction,end=" ")
			self.count+=1
			return
		self.move(r,c,cr+1,cc,direction+'V')
		self.move(r,c,cr,cc+1,direction+'H')
		self.move(r,c,cr+1,cc+1,direction+'D')
r = int(input())
c = int(input())
o = MyClass()
o.move(r,c,0,0,"")
print("")
print(o.count)