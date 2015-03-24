function PROCESSED=postprocessing(Y,threshold,selection)
	[a b]=size(Y{1});
	L=length(Y);
	for j=1:a
		for k=1:b
			for i=1:L
				x(i)=Y{i}(j,k);
			end
			binaria=binarizevec(x,threshold);
			oberta=imopen(binaria,selection);
			oberta=oberta+0;
			for i=1:L
				PROCESSED{i}(j,k)=oberta(i)*x(i);
			end
		end
	end
end
		
