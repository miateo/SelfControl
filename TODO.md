
TODOS
- [ ] TODO: Figure out file structure -> All urls in a same file that gets pushed to the firewall every time at login
- [ ] TODO: Understand how to save the right time left while on use and when shut down
            -> Only one general countdown -> when it finishes or start -> push to firewall {
            like if I start adding time from a 00:00 countdown then every time I add time the programs pushes the blocked
            urls to the firewall with like a function that does block(url1,url2,url3) and unblock(url1, url2, url3) when the
            timers finishes.
            }

- [ ] TODO: Crate simple termUi
            -> maybe 2 functions: Add urls and Add time; menu similar to the one on nvim at start (alpha) that shows the timer
            with time left that is prassing in real-time and the functions with the commands to execute them --> make sure that
            when the instance is closed the program continues to be executed on background (it just keeps the timer going down
            since the websites stays blocked if there's no add or the timer don't finishes)
- [ ] TODO: Make the program run as a service -> see upper note
- [R] TODO: Search how to block links on the firewall
- [ ] TODO: Start making function for url 'grep'

NOTES
