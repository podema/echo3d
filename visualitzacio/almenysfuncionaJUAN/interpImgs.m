function D=interpImgs(X,vecin,vecout)
	L=length(X);
	for i=1:L
		j=i;
		while vecout(j)<vecin(i)
			D{j}=X{i};		
			j=j+1;
	end
	D{j}=X{i};
	i=j;
end
