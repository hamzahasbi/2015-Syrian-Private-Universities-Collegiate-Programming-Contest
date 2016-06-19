t=gets.to_i
while(t>0)
    tmp=gets.split.map(&:to_i)
	x=tmp[0]
	y=tmp[1]
	puts x.to_i*y.to_i
	t=t-1
end