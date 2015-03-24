function FINAL=process(Y,structel,elem,ITER)
	d=length(Y);
	for j=1:ITER
		for i=1:d
			CLEAN{i}=preprocessing(Y{i},0.09,structel);
		end
		%PROCESSED=postprocessing(Y,0.5,elem);
	end
	%FINAL=PROCESSED;
	FINAL=CLEAN;
end
