<%@ page contentType="text/html; charset=UTF-8" %>
 <%
 // Get all cookies from the request
 Cookie[] cookies = request.getCookies();
 // Default message if cookie is not found
 String name = "Cookie not found";
 // If cookies exist, check for the one named "username"
 if (cookies != null) {
 for (Cookie c : cookies) {
 if (c.getName().equals("username")) {
 name = c.getValue(); // Get the value of the cookie
 }
 }
 }
%>
 <!-- Display the cookie value -->
 <p>Cookie value: <strong><%= name %></strong></p>
 <a href="delete.jsp">Delete