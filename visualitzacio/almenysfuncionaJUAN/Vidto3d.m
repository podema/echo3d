function vol=Vidto3d(name,stru,elem,ITER,filenom, method)
	if method==1
		x = dicomread(name);
		Y=collectFrames(x);
		posicions;
		PosLong=posGest(PosMatrix);
		framesv=montaFrames(Y, PosLong);
		imageSet=montaSet(framesv);
		FINAL=process(imageSet,stru,elem,ITER);
		vol=newvolume(FINAL,stru);
		newshow;
	else
		dicomOutFinal;
		h=surface3d(outEcoMatrix);
	end
end
