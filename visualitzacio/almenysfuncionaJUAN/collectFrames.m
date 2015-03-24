function Y=collectFrames(x)
	[a b c d]=size(x);
	for i=1:d
		Y{i} = rgb2gray(x(:,:,:,i));
		Y{i} = Y{i}(46:400,86:596);
	end
end
