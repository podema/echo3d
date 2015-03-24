function binv=binarizevec(v,th)
	long=length(v);
	maxi=max(v);
	for l=1:long
		if v(l)<(th*maxi)
			binv(l)=0;
		else
			binv(l)=1;
		end
	end
end
	
