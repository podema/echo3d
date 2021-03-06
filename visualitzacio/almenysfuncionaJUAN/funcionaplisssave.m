function varargout = funcionapliss(varargin)
% FUNCIONAPLISS MATLAB code for funcionapliss.fig
%      FUNCIONAPLISS, by itself, creates a new FUNCIONAPLISS or raises the existing
%      singleton*.
%
%      H = FUNCIONAPLISS returns the handle to a new FUNCIONAPLISS or the handle to
%      the existing singleton*.
%
%      FUNCIONAPLISS('CALLBACK',hObject,eventData,handles,...) calls the local
%      function named CALLBACK in FUNCIONAPLISS.M with the given input arguments.
%
%      FUNCIONAPLISS('Property','Value',...) creates a new FUNCIONAPLISS or raises the
%      existing singleton*.  Starting from the left, property value pairs are
%      applied to the GUI before funcionapliss_OpeningFcn gets called.  An
%      unrecognized property name or invalid value makes property application
%      stop.  All inputs are passed to funcionapliss_OpeningFcn via varargin.
%
%      *See GUI Options on GUIDE's Tools menu.  Choose "GUI allows only one
%      instance to run (singleton)".
%
% See also: GUIDE, GUIDATA, GUIHANDLES

% Edit the above text to modify the response to help funcionapliss

% Last Modified by GUIDE v2.5 12-Dec-2014 18:58:30

% Begin initialization code - DO NOT EDIT
gui_Singleton = 1;
gui_State = struct('gui_Name',       mfilename, ...
                   'gui_Singleton',  gui_Singleton, ...
                   'gui_OpeningFcn', @funcionapliss_OpeningFcn, ...
                   'gui_OutputFcn',  @funcionapliss_OutputFcn, ...
                   'gui_LayoutFcn',  [] , ...
                   'gui_Callback',   []);
if nargin && ischar(varargin{1})
    gui_State.gui_Callback = str2func(varargin{1});
end

if nargout
    [varargout{1:nargout}] = gui_mainfcn(gui_State, varargin{:});
else
    gui_mainfcn(gui_State, varargin{:});
end
% End initialization code - DO NOT EDIT

end
% --- Executes just before funcionapliss is made visible.
function funcionapliss_OpeningFcn(hObject, eventdata, handles, varargin)
% This function has no output args, see OutputFcn.
% hObject    handle to figure
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)
% varargin   command line arguments to funcionapliss (see VARARGIN)

% Choose default command line output for funcionapliss
%handles=guidata(hObject); 
%handles.output = hObject;
   %%to inicialize the pic, 3d graph
% % Update handles structure
structels;
elems; 
global f; 
global struct; 
global methods;
struct= getappdata(0,'struct');
methods= getappdata(0,'method');
f= getappdata(0,'elegdicom');
global ini;
ini=50;


 if methods==1
     handles.output=Vidto3dIsosurface(f,struct,elem3,1,'posicio');
 end
 if methods==2
    handles.output=Vidto3dSurface(f,struct,elem3,1);
end

%%set current data value
%%END
% Update handles structure
guidata(hObject, handles);
global n; %variable global per rotaci� 
n=1;
global s;
global az;
global el;
global tot;
global m;
az = 180;
el = 85;
s=1;
tot=10;
m=0;

end
% UIWAIT makes funcionapliss wait for user response (see UIRESUME)
%uiwait(handles.figure1);


% --- Outputs from this function are returned to the command line.
function varargout = funcionapliss_OutputFcn(hObject, eventdata, handles) 
% varargout  cell array for returning output args (see VARARGOUT);
% hObject    handle to figure
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Get default command line output from handles structure
varargout{1} = handles.output;



end
% --- Executes on selection change in saveas.
function saveas_Callback(hObject, eventdata, handles)
% hObject    handle to saveas (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: contents = cellstr(get(hObject,'String')) returns saveas contents as cell array
%        contents{get(hObject,'Value')} returns selected item from saveas
str = get(hObject,'String');
val = get(hObject,'Value');

switch str{val};
       
    case 'Screenshot'
        B = questdlg('You are about to save an screenshot, are you sure?','Yes','No');
        if (strcmp (B, 'Yes'))
            set(gcf,'PaperPositionMode','auto'); %per fer screenshot de tot
            filename = 'Screenshot';
            [file,path] = uiputfile('','Save this file as',filename);
            saveas(gca,fullfile(path,file),'png');
        end
        
            
    case 'Longitudinal view'
        C = questdlg('You are about to save the Longitudinal view, are you sure?','Yes','No');
        if (strcmp (C,'Yes'))
            f = getframe(handles.axes1);             %Capture screenshot
            [im,map] = frame2im(f);
            filename = 'Longitudinal';
            [file,path] = uiputfile('','Save this file as',filename);
            file=strcat(file,'.png');
            imwrite(im,fullfile(path,file),'png');
        end 
            
    case '3D'
        D = questdlg('You are about to save the 3D view, are you sure?','Yes','No');
        if (strcmp (D,'Yes'))
            f = getframe(handles.axes3);  %Capture screenshot of axes3
            [im,map] = frame2im(f);
            filename = '3D';
            [file,path] = uiputfile('','Save this file as',filename);
            file=strcat(file,'.fig');
            fig=figure;
            axesH=handles.axes3;          
            copyobj(axesH,fig);
            hgsave(axesH,fullfile(path,file));
            %saveas(handles.axes3,fullfile(path,file),'fig'); 
        end

    case 'Transversal view'
            E = questdlg('You are about to save the Transversal view, are you sure?','Yes','No');
            if (strcmp (E,'Yes'))
            f = getframe(handles.axes2);              %Capture screenshot
            [im,map] = frame2im(f);
            filename = 'Transversal';
            [file,path] = uiputfile('','Save this file as',filename);
            file=strcat(file,'.png');
            imwrite(im,fullfile(path,file),'png');
        end
        
        
end
guidata(hObject,handles)

end
% --- Executes during object creation, after setting all properties.
function saveas_CreateFcn(hObject, eventdata, handles)
% hObject    handle to saveas (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: popupmenu controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end

end
% --- Executes on button press in exit.
function exit_Callback(hObject, eventdata, handles)
% hObject    handle to exit (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)
close all; 

end
% --- Executes when figure1 is resized.
function figure1_ResizeFcn(hObject, eventdata, handles)
% hObject    handle to figure1 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)
end 
% --- Executes on key press with focus on figure1 and none of its controls.
function figure1_KeyPressFcn(hObject, eventdata, handles)
% hObject    handle to figure1 (see GCBO)
% eventdata  structure with the following fields (see FIGURE)
%	Key: name of the key that was pressed, in lower case
%	Character: character interpretation of the key(s) that was pressed
%	Modifier: name(s) of the modifier key(s) (i.e., control, shift) pressed
% handles    structure with handles and user data (see GUIDATA)
    
    keypress = double(get(handles.figure1, 'CurrentCharacter'));

        zlim = get (handles.axes3, 'ZLim');
        z_scale = (zlim(2)-zlim(1))/20;
        handles.enable_zoom=1;
        handles.in_axes=1;
        global n 
        global az
        global el
        global s; 
        global tot;
        global m;
        global f;

        
        if handles.enable_zoom & handles.in_axes % & -isempty{keypress}
            switch keypress
                 case 97
                      view (az, el)
                      %reposicionar(100, 60, 125);
                      hold off
                      az=az+2
                      el=el+2                      
                     ' "a" keypressed' %esquerra 
                     
                 case 100                
                      view (az, el)
                      hold off
                      az=az-2
                      el=el-2
                      ' "d" keypressed' %dreta
                      
                 case 119
                      set(handles.axes3, 'ZLim', [zlim(1)-z_scale zlim(2)-z_scale]);
                      hold on
                         if m==1
                            removepla(500,350,tot-s);
                            m=0;
                         end
                      CrearPla(500,350,tot);
                      axes(handles.axes2);
                      Pelpla(f, tot);
                      hold off
                      %s = s-1;
                      tot=tot-1;
                      hold off
                      m=1;
                      ' "w" keypressed' %enrere

                      
                 case 115 
                      set(handles.axes3, 'ZLim', [zlim(1)+z_scale zlim(2)+z_scale]); 
                      hold on
                      
%                         if m==1
%                             removepla(500,350,tot-s);
%                             m=0;
%                         end
                      CrearPla(500,350,tot);
                      axes(handles.axes2);
                      Pelpla(f, tot);
                      %hold off 
                      tot=tot+1;
                      hold off
                      m=1;
                      ' "s" keypressed' %endavant 

                 case 32
                     msgbox('loading...');
                     
                 case 112
                      ' "p" keypressed' 
                      
            end
        end 
end
function info_Callback(hObject, eventdata, handles)
% hObject    handle to info (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

msgbox('Prototip');
end

