function varargout = firststep(varargin)
% FIRSTSTEP MATLAB code for firststep.fig
%      FIRSTSTEP, by itself, creates a new FIRSTSTEP or raises the existing
%      singleton*.
%
%      H = FIRSTSTEP returns the handle to a new FIRSTSTEP or the handle to
%      the existing singleton*.
%
%      FIRSTSTEP('CALLBACK',hObject,eventData,handles,...) calls the local
%      function named CALLBACK in FIRSTSTEP.M with the given input arguments.
%
%      FIRSTSTEP('Property','Value',...) creates a new FIRSTSTEP or raises the
%      existing singleton*.  Starting from the left, property value pairs are
%      applied to the GUI before firststep_OpeningFcn gets called.  An
%      unrecognized property name or invalid value makes property application
%      stop.  All inputs are passed to firststep_OpeningFcn via varargin.
%
%      *See GUI Options on GUIDE's Tools menu.  Choose "GUI allows only one
%      instance to run (singleton)".
%
% See also: GUIDE, GUIDATA, GUIHANDLES

% Edit the above text to modify the response to help firststep

% Last Modified by GUIDE v2.5 17-Dec-2014 09:59:52

% Begin initialization code - DO NOT EDIT
gui_Singleton = 1;
gui_State = struct('gui_Name',       mfilename, ...
                   'gui_Singleton',  gui_Singleton, ...
                   'gui_OpeningFcn', @firststep_OpeningFcn, ...
                   'gui_OutputFcn',  @firststep_OutputFcn, ...
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
% --- Executes just before firststep is made visible.
function firststep_OpeningFcn(hObject, eventdata, handles, varargin)
% This function has no output args, see OutputFcn.
% hObject    handle to figure
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)
% varargin   command line arguments to firststep (see VARARGIN)

% Choose default command line output for firststep
handles.output = hObject;

% Update handles structure
guidata(hObject, handles);

% UIWAIT makes firststep wait for user response (see UIRESUME)
% uiwait(handles.figure1);

global struct; 
global methods;
global f; 
methods =0;
struct=0; 
f='0'; 

end 

% --- Outputs from this function are returned to the command line.
function varargout = firststep_OutputFcn(hObject, eventdata, handles) 
% varargout  cell array for returning output args (see VARARGOUT);
% hObject    handle to figure
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Get default command line output from handles structure
varargout{1} = handles.output;

end 
% --- Executes on selection change in method.
function method_Callback(hObject, eventdata, handles)
% hObject    handle to method (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: contents = cellstr(get(hObject,'String')) returns method contents as cell array
%        contents{get(hObject,'Value')} returns selected item from method

str = get(hObject,'String');
val = get(hObject,'Value');
global methods; 

switch str{val};
       
    case 'IsoSurface'
        methods = 1;
            
    case 'Surface'
        methods = 2; 
end 

end
% --- Executes during object creation, after setting all properties.
function method_CreateFcn(hObject, eventdata, handles)
% hObject    handle to method (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: popupmenu controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end
end 

% --- Executes on selection change in struct.
function struct_Callback(hObject, eventdata, handles)
% hObject    handle to struct (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: contents = cellstr(get(hObject,'String')) returns struct contents as cell array
%        contents{get(hObject,'Value')} returns selected item from struct
structels; 
str = get(hObject,'String');
val = get(hObject,'Value');
global struct; 
switch str{val};
       
    case 'structel4'
        struct = structel4;  
    case 'structel5'
        struct = structel5; 
    case 'structel6'
        struct = structel6;
end 
end 
% --- Executes during object creation, after setting all properties.
function struct_CreateFcn(hObject, eventdata, handles)
% hObject    handle to struct (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: popupmenu controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end

end 
% --- Executes on button press in elegdicom.
function elegdicom_Callback(hObject, eventdata, handles)
% hObject    handle to elegdicom (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)
 global f; 
    f= uigetfile('*','Select the DICOM file');
    
end
% --- Executes on button press in nextstep.
function nextstep_Callback(hObject, eventdata, handles)
% hObject    handle to nextstep (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)
global methods; 
global struct;
global f; 

%if ((methods ~=1)|| (methods ~= 2) || (f =='0' ))
 %   msgbox('You must choose a method or a file');
% else

setappdata(0,'method',methods);
setappdata(0,'struct', struct);
setappdata(0,'elegdicom', f);
close firststep;
funcionapliss; 


end


% --- Executes on selection change in popupmenu3.
function popupmenu3_Callback(hObject, eventdata, handles)
% hObject    handle to popupmenu3 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: contents = cellstr(get(hObject,'String')) returns popupmenu3 contents as cell array
%        contents{get(hObject,'Value')} returns selected item from popupmenu3

str = get(hObject,'String');
val = get(hObject,'Value');
global methods; 

switch str{val};
       
    case 'IsoSurface'
        methods = 1;
            
    case 'Surface'
        methods = 2; 
end
end
% --- Executes during object creation, after setting all properties.
function popupmenu3_CreateFcn(hObject, eventdata, handles)
% hObject    handle to popupmenu3 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: popupmenu controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end
end

% --- Executes on selection change in popupmenu4.
function popupmenu4_Callback(hObject, eventdata, handles)
% hObject    handle to popupmenu4 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: contents = cellstr(get(hObject,'String')) returns popupmenu4 contents as cell array
%        contents{get(hObject,'Value')} returns selected item from popupmenu4
structels; 
str = get(hObject,'String');
val = get(hObject,'Value');
global struct; 
switch str{val};
       
    case 'structel4'
        struct = structel4;  
    case 'structel5'
        struct = structel5; 
    case 'structel6'
        struct = structel6;
end 
end

% --- Executes during object creation, after setting all properties.
function popupmenu4_CreateFcn(hObject, eventdata, handles)
% hObject    handle to popupmenu4 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: popupmenu controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end
end
