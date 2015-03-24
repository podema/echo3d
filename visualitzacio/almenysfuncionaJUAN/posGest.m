function PosLongOK=posGest(PosMatrix)
	[a b]=size(PosMatrix);
	PosLongKO(1)=PosMatrix(1,1);
	i=2;
	while PosMatrix(i,1)>=PosLongKO(i-1)
		PosLongKO(i)=PosMatrix(i,1);
		i=i+1;
		if i>a
			PosMatrix(i,1)=0;
		end
	end
	L=length(PosLongKO);
	PosLongOK(1)= PosLongKO(1);
	count=1;
	for i=2:L
		if PosLongKO(i)==PosLongKO(i-1)
			count=count+1;
		else
			if count>1
				diff=PosLongKO(i)-PosLongKO(i-count);
				step=diff/count;
				for j=1:count-1
					ix=i-count+j;
					PosLongOK(ix)=PosLongOK(ix-1)+step;
				end
				count=1;
			end
			PosLongOK(i)=PosLongKO(i);
		end
	end
end
