<%@ page contentType="text/html; charset=UTF-8" language="java" %>
<html>
<head>
    <title>Open Source Definitions</title>
</head>
<body>
<h2>Enter Names of Open Source Technologies</h2>
<form method="get">
    Item 1: <input type="text" name="itemName1"><br><br>
    Item 2: <input type="text" name="itemName2"><br><br>
    Item 3: <input type="text" name="itemName3"><br><br>
    Item 4: <input type="text" name="itemName4"><br><br>
    Item 5: <input type="text" name="itemName5"><br><br>
    <input type="submit" value="Get Definitions">
</form>
<hr>

<%
    String[] names = {"HTML", "MySQL", "CSS", "Python", "JavaScript"};
    String[] defn = {
        "HTML is the fundamental language for creating web pages.",
        "MySQL is a relational database management system.",
        "CSS is a stylesheet language used to describe the presentation of a document written in HTML or XML.",
        "Python is a high-level programming language.",
        "JavaScript is a versatile, dynamic programming language primarily used to add interactivity and dynamism to web pages and applications."
    };

    for (int i = 1; i <= 5; i++) {
        String itemName = request.getParameter("itemName" + i);
        if (itemName != null && !itemName.trim().isEmpty()) {
            boolean found = false;
            for (int j = 0; j < names.length; j++) {
                if (names[j].equalsIgnoreCase(itemName.trim())) {
                    out.println("<p><strong>" + names[j] + "</strong>: " + defn[j] + "</p>");
                    found = true;
                    break;
                }
            }
            if (!found) {
                out.println("<p style='color:red;'><strong>" + itemName + "</strong>: No definition found.</p>");
            }
        }
    }
%>
</body>
</html>
