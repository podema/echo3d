function h=surface3d(outEcoMatrix)
	eco = outEcoMatrix(:,:,81:100);
	[a b c]= size(outEcoMatrix);
	h = vol3d('cdata',eco, 'xdata',[0 b], 'ydata', [0 a], 'zdata', [0 20]);
	view(3);
    box on;
	axis equal off;  
    daspect([1 1 .4])
	alphamap('rampup');
	colormap gray;
	set(gcf, 'color', 'k');
end

