<%@ page contentType="text/html; charset=UTF-8" language="java" %>
 <html>
 <head>
 <title>Data Uploaded</title>
 </head>
 <body>
 <h2>Uploaded Data:</h2>
 <p><strong>Name:</strong>
 <%= request.getParameter("name") %>
 </p>
 <p><strong>Roll No:</strong>
 <%= request.getParameter("roll") %>
 </p>
 <p><strong>Course:</strong>
 <%= request.getParameter("course") %>
 </p>
 <p><strong>Email:</strong>
 <%= request.getParameter("email") %>
 </p>
</body>
</html