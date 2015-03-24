function CLEAN= filterimagedots(IMG,DETE)
	[A B]=size(IMG);
	for i=1:A
		for j=1:B
			CLEAN(i,j)=IMG(i,j)*DETE(i,j);
		end
	end
end
