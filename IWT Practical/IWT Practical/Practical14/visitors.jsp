<%@ page contentType="text/html; charset=UTF-8" language="java" %>
<html>
<head>
 <title>Visitor Count</title>
</head>
<body>
 <h2>Total Visitor Count</h2>
 <%
 // Retrieve the current visitor count from the application scope
 Integer visitorCount = (Integer) application.getAttribute("visitorCount");
 // If this is the first visitor, initialize the count to 0
 if (visitorCount == null) {
 visitorCount = 0;
 }
 // Increment the count for every new visitor
 visitorCount++;
 // Save the updated count back into the application scope
 application.setAttribute("visitorCount", visitorCount);
 // Display the visitor count
 out.println("<p>Total Visitors: " + visitorCount + "</p>");
 %>
 <hr>
 <a href="visitors.html">Go back to the Home Page</a>
</body>
