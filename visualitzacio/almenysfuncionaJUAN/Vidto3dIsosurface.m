function vol=Vidto3dIsosurface(name,stru,elem,ITER,filenom)
	x = dicomread(name);
	Y=collectFrames(x);
	size(Y)
	posicions;
	PosLong=posGest(PosMatrix);
	size(PosLong)
	framesv=montaFrames(Y, PosLong);
	imageSet=montaSet(framesv);
	length(framesv)
	FINAL=process(imageSet,stru,elem,ITER);
	size(FINAL)
	vol=newvolume(FINAL,stru);
	newshow;
end
