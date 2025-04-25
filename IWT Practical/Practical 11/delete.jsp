<%@ page contentType="text/html; charset=UTF-8" %>
<%
 // To delete the cookie, set its max age to 0
 Cookie c = new Cookie("username", "");
 c.setMaxAge(0); // Immediately expires the cookie
 response.addCookie(c); // Send the updated cookie to the browser
%>
<!-- Display message -->
<p>Cookie has been deleted ✅</p>
<a href="read.jsp">Read Again</a>