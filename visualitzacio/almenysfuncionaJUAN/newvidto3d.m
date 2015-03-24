%function vol=Vidto3d(name,stru,elem,ITER)
function vol=newvidto3d(name,stru,in)
	x = dicomread(name);
	Y=collectFrames(x,in);
	%FINAL=process(Y,stru,elem,ITER);
	vol=newvolume(Y,stru,in);
	newshow;
end