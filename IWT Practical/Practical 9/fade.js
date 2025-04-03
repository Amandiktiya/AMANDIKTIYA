$(document).ready(function() {
    // Fade In all div elements when the "Fade In All Divs" button is clicked
    $('#fade-in-btn').click(function() {
        $('.box').fadeIn(1000);  // 1000 milliseconds (1 second)
    });

    // Fade Out all div elements when the "Fade Out All Divs" button is clicked
    $('#fade-out-btn').click(function() {
        $('.box').fadeOut(1000);  // 1000 milliseconds (1 second)
    });
});
