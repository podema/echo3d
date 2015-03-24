import java.net.*
import java.io.*
ss=ServerSocket(7777);
s=ss.accept();
t=1:99;
out=PrintWriter(s.getOutputStream(),true);
t=mat2str(t);
out.println(t);
