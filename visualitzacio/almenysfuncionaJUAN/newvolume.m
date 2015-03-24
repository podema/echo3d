function VOL=newvolume(Y,stru)
	d=length(Y);
	for i=1:d
		temp=double(Y{i});
		imgbefore = 25*((temp(:,:,1)>=15)+0) + 75*((temp(:,:,1)>=40)+0) + 150*((temp(:,:,1)>=70)+0);
		VOL(:,:,i)=imopen(imgbefore,stru);
	end
end
