$(document).ready(function() {
    // Disable the submit button if the form is incomplete
    $('#name, #email').on('input', function() {
        let name = $('#name').val();
        let email = $('#email').val();
        
        if (name && email) {
            $('#submitBtn').prop('disabled', false); // Enable the submit button
        } else {
            $('#submitBtn').prop('disabled', true); // Disable the submit button
        }
    });

    // Enable the submit button when the "Enable Submit Button" button is clicked
    $('#enableBtn').click(function() {
        $('#submitBtn').prop('disabled', false);
    });

    // Disable the submit button when the "Disable Submit Button" button is clicked
    $('#disableBtn').click(function() {
        $('#submitBtn').prop('disabled', true);
    });

    // Blinking text effect: already handled with CSS animation
});