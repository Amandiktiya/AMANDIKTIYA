<%@ page contentType="text/html; charset=UTF-8" %>
<%
// Create a cookie named "username" with the value "Aman diktiya" Cookie c = new Cookie("username", "Aman diktiya");
// Set the cookie to expire after 1 day (60 seconds × 60 minutes × 24 hours) c.setMaxAge(60 * 60 * 24);
// Send the cookie to the browser response.addCookie(c);
%>
<p>Cookie has been set: username = Aman diktiya</p>
<a href="read.jsp">Read Cookie</a>
