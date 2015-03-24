function framesv= montaFrames(Y, PosLong)
	Ly=length(Y);
	Lp=length(PosLong);
	L=min(Ly,Lp);
	for i=1:L
		framesv{i}=frameObj;
		framesv{i}.image=Y{i};
		framesv{i}.position=PosLong(i);
	end
end
