# No Paste

In this challenge, we come across a login web page prompting us to "Bypass The Restriction". 

/Images/1.png
![1](https://github.com/user-attachments/assets/be7183b4-757b-4eb4-98b1-fbb261292951)

The first thing to do here is to try playing around with the form by providing inputs to see how it reacts. When we try to give  an input, we notice that not only does it prevent us from pasting, it even restrict us from focusing (interacting/typing) on the input filed. So the next step that comes to mined is to investigate the source code to understand what is going on.

Looking at the page source, we notice a constraint in place set by the **readonly** atrribute. According to the MDN documentation: "The Boolean readonly attribute, when present, makes the element not mutable, meaning the user can not edit the control."

/Images/2.png
![2](https://github.com/user-attachments/assets/2c09dd02-7c0f-4269-99bc-fa58a82eba7b)

So, we cannot manually edit it as users, but we can programmatically get rid of that restriction by using JavaScript and running it in our browser's console. By targeting the input field by its ID (challengeInput), we set the input value to "flag" to test whether we can bypass the restriction. And voila! We bypass it, but our input was not correct one.

```Javascript
function Input()
{ 
    // Remove the readonly attribute.
    document.getElementById('challengeInput').removeAttribute('readonly');
    
    // Set the value of the input to "flag"
    document.getElementById('challengeInput').value = 'flag';
}

Input()
```

/Images/3.png
![3](https://github.com/user-attachments/assets/0de44536-94fd-4848-9193-1b36d094e97a)


So, we need to investigate further to find the correct input. We go back to the page source, but this time we focus on the JavaScript (.js) file. After going through the code, which is mostly obfuscated, we carefully notice a string that says "bypass123".

/Images/4.png
![4](https://github.com/user-attachments/assets/4bc1a672-d27b-466c-96f2-b8f88ac1b504)

We go ahead, try it out, and congratulations to us. We made it to the flag!

/Images/5.png
![5](https://github.com/user-attachments/assets/298f0e06-5338-433d-bad6-0dcf39c06b50)

**The Flag:** H7CTF{h@ck_th3_sy$t3m}
