eco = dicomread(name);
[a b c d]=size(eco);
for i=1:d
	Zb{i} = rgb2gray(eco(:,:,:,i));
end
Zp=process(Zb,structel,elem,ITER);
for i=1:d
	outEcoMatrix(:,:,i) = Zp{i}(46:400,86:596);  	
end
