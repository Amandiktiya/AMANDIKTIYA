$(document).ready(function() {
    let firstClickTime = null;

    // Event handler for the click event on the paragraph
    $('#click-paragraph').click(function() {
        if (firstClickTime === null) {
            // Record the time of the first click
            firstClickTime = new Date().getTime();
            $('#output').text("First click registered. Please click again.");
        } else {
            // Record the time of the second click
            let secondClickTime = new Date().getTime();
            let timeDifference = secondClickTime - firstClickTime;
            
            // Show the time difference in milliseconds
            $('#output').text("Time between clicks: " + timeDifference + " milliseconds.");
            
            // Reset the first click time to allow for a new measurement
            firstClickTime = null;
        }
    });
});
