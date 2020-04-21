# Cplusplus-Program
CS-210


# Summarize the project and what problem it was solving.
This project related to investments and compounding interest. The primary focus was to allow users to see how compounding interest impacts their financial goals. More specifically, it allowed a user to view their compounding interest if they continuously made monthly deposits, or if they only did an initial deposit.

# What did you do particularly well?
I believe I did a good job of reusing functions and organizing the calculation code. I think I could do a better job of organizing the code, but the use of get, set, and the calculations I felt were proficient for my level.

# Where could you enhance your code? How would these improvements make your code more efficient, secure, and so on?
I certainly could've done a better job on user input validation. For instance, creating a loop on an input where if invalid, present the user with a message of their invalid input and prompt them for a value again. It would make the user experience more user friendly and create less error-prone code.

# Did you find writing any piece of this code challenging, and how did you overcome this? What tools and/or resources are you adding to your support network?
I kept having issues with user input around cin and it's behavior. I ended up having to read several sites including but not limited to: tutorialspoint, cplusplus, and stackoverflow to allow for better user input management. These are three sets of resources i've been using for a while, so they aren't necessarily new. However, it's good to see that the resources I am using continue to unblock me or educate me.

# What skills from this project will be particularly transferable to other projects and/or course work?
The cin management is transferable for sure. I think I did a reasonable job of organizing my code in a class as well.

# How did you make this program maintainable, readable, and adaptable?
Most if not all of the calculations are done via class member operations so if a developer needs to adjust anything, they simply update it in the member function and it's impacted everywhere. For readability, I've added comments where necessary to explain steps and have 'chunked' code so that relevant items are grouped together. For adaptability, I'm not sure how to best represent this. I guess it's important that I did not create code that was specific to an OS. For instance, there's a clear screen function that only works on windows, but what has been recommended is using string(100, '\n') since that is OS agnostic.
