colormap(gray);
drawnow




%load the file with the preprocessed images

%the original images were had-colored by region to one of 7 colors

%patch smoothing factor
rfactor = 0.125; 
%isosurface size adjustment
level = .8;
%useful string constants
c2 = 'facecolor';
c1 = 'edgecolor';

%build one isosurface for each of 7 different levels
%The "slice" matrix takes on one of 7 integer values,
%so each of the following converts the data to a binary
%volume variable, then computes the isosurface between the
%1 and 0 regions

p=patch(isosurface(smooth3(vol==25),level));
reducepatch(p,rfactor)
set(p,c2,[1,1,1],c1,'none','FaceAlpha',0.1);

p=patch(isosurface(smooth3(vol==75),level));
reducepatch(p,rfactor)
set(p,c2,[0,1,0],c1,'none');

p=patch(isosurface(smooth3(vol==100),level));
reducepatch(p,rfactor)
set(p,c2,[1,1,0],c1,'none','FaceAlpha',0.5);

p=patch(isosurface(smooth3(vol==150),level));
reducepatch(p,rfactor)
set(p,c2,[0,0,1],c1,'none');

p=patch(isosurface(smooth3(vol==175),level));
reducepatch(p,rfactor)
set(p,c2,[1,0,1],c1,'none');

p=patch(isosurface(smooth3(vol==225),level));
reducepatch(p,rfactor)
set(p,c2,[0,1,1],c1,'none');

p=patch(isosurface(smooth3(vol==250),level));
reducepatch(p,rfactor)
set(p,c2,[0,0,1],c1,'none');

set(gca,'projection','perspective')
box on
lighting phong
light('position',[1,1,1])
light('position',[-1,-1,-1])
light('position',[-1, 1,-1])
light('position',[ 1,-1,-1])
daspect([1,1,1])
axis on
set(gca,'color',[1,1,1]*.6)

view(-30,30)

rotate3d off
