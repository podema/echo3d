function [ ] = CrearPla( x1, y1, z1 )
%UNTITLED2 Summary of this function goes here
%   Detailed explanation goes here

 pointA = [x1,y1,z1]; % x, y, z
 pointB = [0,y1,z1]; % x, y, 0
 pointC = [0, 0,z1] ; % 0, y, z
 pointD = [x1,0,z1];
 
points = [pointA' pointB' pointC' pointD'];
fill3(points(1,:), points(2,:), points(3,:),'r')
grid on
alpha(0.3)
hold off


end
