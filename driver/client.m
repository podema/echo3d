function out=client()
import java.net.*
import java.io.*
s=Socket('localhost',7777);
in=BufferedReader(InputStreamReader(s.getInputStream()));
line=in.readLine();
out=str2mat(line);
end
