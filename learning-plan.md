# Your Claude Learning Path — Fall '26 Prep

## What this is

Hey Alex — this is an 8-week summer plan to get you fluent in **Claude Code** and **Claude Cowork** before Fall 2026 starts. Each week you'll build something or produce something, then walk your dad through it. By the time classes start, you should be comfortable using these tools as a study and coding partner — not a homework-doing machine.

Your Fall 2026 schedule:

| Course | Title | Language |
|---|---|---|
| CS 1428 | Foundations of Computer Science I | C++ |
| CS 3354 | Object-Oriented Design & Programming | Java (prereq CS 3358 completed Spring '26 ✓) |
| CS 3378 | Theory of Automata | Conceptual |
| CS 4371 | Computer System Security | Mixed |
| MATH 3323 | Differential Equations | — |

## The one rule that matters most

**Claude is your tutor, not your ghostwriter.** You type your own code. Claude explains, reviews, asks you questions, and catches your mistakes — but it doesn't write your work for you. There's a `CLAUDE.md` file in this repo that tells Claude to behave this way automatically. Don't delete it.

Why this matters: if you let Claude write your code now, you'll get to your real CS assignments in August and have no idea what's happening. Worse, submitting AI-generated work as your own is academic dishonesty and will get you in real trouble at Texas State. Build the habits now.

## How to deliver work

- **Code** goes into a GitHub repo called `learn-claude-fall2026`. One folder per week (`week-01/`, `week-02/`, etc.). Use your existing GitHub account.
- **Research, study notes, written work** go into a shared Google Drive folder your dad will set up.
- **Each week**, schedule a 15-minute call or in-person walkthrough with your dad. Show him what you built. He'll ask questions to make sure you actually understand it.

---

## Week 1 — Setup & first conversation

**What you'll learn:** how to install Claude Code and the desktop app, set up a git repo, and have your first real Claude conversation.

**Resources:**
- Claude Code install docs: https://docs.claude.com/en/docs/claude-code/overview
- Claude desktop app (for Cowork): https://claude.ai/download
- Git install: on Mac, run `xcode-select --install` in Terminal. On Windows, https://git-scm.com
- VS Code (editor): https://code.visualstudio.com
- C++ compiler: Mac gets `g++` automatically with Xcode CLI Tools. Windows: install MinGW or use WSL

**Do this:**
1. Install everything above.
2. Create a new public GitHub repo called `learn-claude-fall2026`. Initialize it with a README. Clone it to your laptop.
3. Copy this repo's `CLAUDE.md` into the root of `learn-claude-fall2026/` and commit it.
4. Open the repo folder in a terminal. Run `claude` to start Claude Code. Ask: *"I'm brand new to git. Walk me through what `git status`, `git add`, `git commit`, and `git push` do, and quiz me after."*
5. With Claude's help, write a `README.md` listing your Fall 2026 classes and what you want to learn. **You type it.** Commit and push.
6. Open the Claude desktop app and try Cowork on something simple like "summarize Texas State's CS undergraduate degree requirements." Get a feel for how it's different from regular chat.

**Show your dad:** the GitHub repo URL with the README, and explain in your own words the difference between Claude Code and Cowork.

---

## Week 2 — Reading code with Claude

**What you'll learn:** the most valuable thing Claude does isn't write code — it explains code. You'll practice using it to understand something unfamiliar.

**Resources:**
- C++ algorithm examples: https://github.com/TheAlgorithms/C-Plus-Plus (pick ONE file, e.g. something under `sorting/`)
- Claude Code workflows: https://docs.claude.com/en/docs/claude-code/common-workflows

**Do this:**
1. In your repo, create a `week-02/` folder. Copy in one C++ file from the algorithms repo above. Add a comment at the top citing where it came from.
2. Start Claude Code in that folder. Ask it to explain the file line by line. Ask follow-up questions when something doesn't click. **Rule: don't move on until you can re-explain a section to Claude in your own words.**
3. In Cowork (desktop app), have it produce a 1-page study sheet on the algorithm — what problem it solves, time complexity, when you'd use it.
4. Write your own summary in `week-02/notes.md` (not Claude's — yours). Commit it.
5. Save the Cowork study sheet to the shared Drive folder.

**Show your dad:** pick one function from the file and explain what it does to him live, without looking at notes.

---

## Week 3 — Your first real program (CS 1428 prep)

**What you'll learn:** how to build a working C++ program from scratch with Claude as a tutor. This is the closest thing to what CS 1428 will feel like.

**Resources:**
- LearnCpp.com (free, beginner-friendly): https://www.learncpp.com — read chapters 1-2 before starting
- C++ reference (look things up here): https://en.cppreference.com

**Do this:**
1. **Project:** a command-line unit converter. User picks a category (temperature, length, or weight) and converts between units. Written in C++.
2. Before writing any code, describe the program to Claude Code in plain English. Ask it to suggest a structure — what functions you'll need, what inputs/outputs they have. Claude proposes the structure; **you type it.**
3. Write the code yourself. When you get stuck, ask Claude. Per `CLAUDE.md`, it won't paste solutions — it'll ask you leading questions instead. Sit with that frustration — that's where the learning happens.
4. Once it works, ask Claude to **review your code**. Bugs, typos, edge cases (what happens if the user types "abc" instead of a number?), style. Fix what it finds.
5. Commit everything to `week-03/`.

**Show your dad:** run the program live. Walk him through one function in detail, and explain one bug Claude caught during review.

---

## Week 4 — Cowork for studying (Automata / Diff Eq prep)

**What you'll learn:** how to use Cowork to turn dense reading into useful study materials — and why you still have to read the original.

**Resources:**
- Automata intro: JFLAP tutorials at https://www.jflap.org, or search for a free chapter of Sipser's *Introduction to the Theory of Computation*
- ODE intro: Paul's Online Notes — https://tutorial.math.lamar.edu/Classes/DE/DE.aspx

**Do this:**
1. Pick one short chapter from each topic (one automata, one ODEs).
2. In Cowork, ask it to: (a) summarize the chapter in 1 page, (b) generate 10 flashcard-style Q&A pairs, (c) flag the 3 hardest concepts.
3. **Now read the original chapter yourself.** Then go back to Cowork's output and annotate it: what's accurate, what's oversimplified, what's missing or wrong. This is the key step — Cowork can hallucinate confidently, and the only defense is checking its work against the source.
4. Save both the original output and your annotated version to the shared Drive folder.

**Show your dad:** the annotated study guide. Pick one flashcard and explain the answer in your own words — without reading from the card.

---

## Week 5 — Object-Oriented Design (CS 3354 prep)

**What you'll learn:** classes and objects in Java, and using Claude as a design reviewer.

**Resources:**
- Java install: https://adoptium.net (download Temurin LTS — the free, standard Java)
- Java basics: https://dev.java/learn/
- OOP concepts: search YouTube for "MIT 6.0001 lecture 8 object oriented programming"

**Do this:**
1. **Project:** a tiny library system in Java. A `Book` class (with title, author, year), a `Library` class that holds a collection of books, and a `main` method that creates a library, adds 3 books, and prints them.
2. **Before writing code:** sketch the class diagram on paper. What classes? What fields and methods does each have? Take a photo, drop it in Cowork, and ask Cowork to critique your design.
3. Write the Java code yourself, with Claude Code as tutor (same rules as Week 3).
4. Once it works, ask Claude Code for a **code review focused on OOP principles** — encapsulation (are fields private?), naming, single responsibility (does each class do one thing?). Address each finding.
5. Commit to `week-05/`.

**Show your dad:** the class diagram, the working program, and one before/after of an OOP review fix you made.

---

## Week 6 — Security thinking (CS 4371 prep)

**What you'll learn:** how to research a security topic with Cowork, and what a real vulnerability looks like in code.

**Resources:**
- OWASP Top 10 (the standard list of common web vulnerabilities): https://owasp.org/www-project-top-ten/
- CVE database (real-world reported vulnerabilities): https://www.cve.org

**Do this:**
1. Pick one OWASP Top 10 item. Suggestion: **SQL injection** or **buffer overflow** — both have visceral, easy-to-understand examples.
2. Use **Cowork** to produce a 1-page explainer: what it is, a real-world incident example (with a citation), how to defend against it. **Fact-check at least one claim** by clicking through to a source.
3. Use **Claude Code** to write two tiny code snippets: one that's vulnerable, one that's fixed. You type both. Have Claude explain why the fix actually works.
4. Commit the code to `week-06/`. Save the writeup to Drive.

**Show your dad:** teach him the vulnerability like you're the professor. Walk through the diff between the vulnerable and fixed code.

---

## Week 7 — Math with Claude as a checker (Diff Eq prep)

**What you'll learn:** for math, **you solve, Claude checks.** Never the other way around. This will save you in MATH 3323.

**Resources:**
- ODE practice problems: https://tutorial.math.lamar.edu/Problems/DE/DE.aspx
- WolframAlpha (for cross-checking final answers): https://www.wolframalpha.com

**Do this:**
1. Pick 3 first-order ODE practice problems from Paul's Notes.
2. **Solve each one on paper.** Show your work.
3. Take a photo of each solution. In Cowork, upload the photo and ask Claude to **verify your steps** — flag any errors, point out where you made an arithmetic mistake or skipped a step. **Do not ask Claude to solve the problem.** If it tries to, tell it to stop and just check your work.
4. Cross-check your final answer in WolframAlpha.
5. Save the photos + Claude's feedback + your corrections to Drive.

**Show your dad:** the three problems, your work, and one mistake Claude caught — *or* one place where Claude was wrong and you were right. (That happens with math. Claude is not infallible.)

---

## Week 8 — Capstone: a personal project, end-to-end

**What you'll learn:** how to scope and build a small project using **plan mode** in Claude Code. This is the workflow you'll use for the rest of your CS career.

**Resources:**
- Claude Code plan mode docs: https://docs.claude.com/en/docs/claude-code/overview
- Python install: https://www.python.org/downloads/ (Python is much easier than C++ or Java for small scripts)

**Do this:**
1. **Pick a personal project.** Some ideas:
   - A Python script that organizes your Downloads folder by file type
   - A study-time tracker that logs how long you study each subject to a CSV
   - A command-line flashcard quizzer that reads from the flashcards you made in Week 4
   - Something else you actually want — that's even better
2. In Claude Code, **enter plan mode** (type `/plan` or follow the docs). Have a back-and-forth with Claude until the plan is clear. Review and approve the plan before any code gets written.
3. Implement it with Claude tutoring (same rules — you type, Claude explains).
4. Write a README in `week-08/` explaining what it does, how to run it, and what you learned. Commit.

**Show your dad:** live demo. Explain how plan mode changed how you approached the problem compared to Week 3 (when you just started coding).

---

## After the 8 weeks — when classes start

Once you're in your real Fall classes:

- **Keep using Claude as a tutor.** The `CLAUDE.md` rules still apply. They're more important once you have grades on the line.
- **Read every syllabus carefully.** Most CS professors have written policies about AI use. Some allow it as a study aid; some prohibit it for graded work; some require disclosure. Follow what your professor says, not what's convenient.
- **When in doubt, ask the professor.** "Can I use Claude to help me understand the assignment / explain concepts / review my code after I write it?" is a perfectly fine question to ask in office hours. It's a much better question to ask than explaining yourself in an academic integrity meeting.
- **For Cowork:** great for organizing your notes, building flashcards from your own material, drafting outlines for written assignments. Not for writing your assignments.

---

## How your dad will validate each week

He's going to check three things:
1. **The artifact exists** — code is in the GitHub repo, docs are in Drive.
2. **You can explain it** — 5-10 minute walkthrough, no notes. If you can't explain it, that's a sign Claude wrote too much of it, and we'll retighten the rules.
3. **A spot-check** — he'll pick one line of code or one paragraph and ask "why this?" If you understood it, you'll know.

If something looks too polished for where you are in the learning curve, he might ask you to redo a piece without Claude open, in front of him. That's not a punishment — it's the fastest way to know whether the learning actually stuck.

Good luck. Have fun with it.
