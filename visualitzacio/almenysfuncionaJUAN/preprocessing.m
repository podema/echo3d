function cleaned= preprocessing(IMG, treshold, structel)
	binar=im2bw(IMG, treshold);
	opening=imopen(binar,structel);
	opening=opening+0;
	cleaned=filterimagedots(IMG,opening);
	imshow(cleaned,[min(min(cleaned)) max(max(cleaned))])
end
