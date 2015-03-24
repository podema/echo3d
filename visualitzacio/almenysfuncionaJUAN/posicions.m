numLinies;
numLines=numLines/2;
PosArray=textread(filenom,'%f');
TL=length(PosArray);
longLin=TL/numLines;
for i=1:numLines
	for j=1:longLin
		index=((i-1)*longLin)+j;
		PosMatrix(i,j)= PosArray(index);
	end
end
	
