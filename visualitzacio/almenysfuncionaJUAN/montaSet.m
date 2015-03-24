function imageSet= montaSet(framesv)
	L=length(framesv);
	for i=1:L
		vecin(i)=framesv{i}.position;
	end
	vecout(1)=framesv{1}.position;
	j=2;
	for i=2:L
		while framesv{i}.position>vecout(j-1)+0.001
			vecout(j)=vecout(j-1)+1;
			j=j+1;
		end
		vecout(j)=framesv{i}.position;
		j=j+1;
	end;
	for i=1:L
		frames{i}=framesv{i}.image;
	end
	imageSet=interpImgs(frames,vecin,vecout);
end
