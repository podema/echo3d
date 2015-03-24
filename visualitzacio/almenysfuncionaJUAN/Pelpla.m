function  Pelpla(x,n)
    m = dicomread(x);
    l=dicominfo(x);
    nframe=l.NumberOfFrames();
    imshow(m(:,:,n), []);
    hold off
end