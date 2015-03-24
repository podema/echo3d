fid=fopen(filenom);
fseek(fid,0,'eof');
fileSize = ftell(fid);
frewind(fid);
So = fread(fid, fileSize, 'uint8');
numLines = sum(So == 10);
fclose(fid);
