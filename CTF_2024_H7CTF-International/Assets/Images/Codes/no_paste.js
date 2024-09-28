function Input()
{ 
    // Remove the readonly attribute.
    document.getElementById('challengeInput').removeAttribute('readonly');
    
    // Set the value of the input to "flag"
    document.getElementById('challengeInput').value = 'bypass123';
}
