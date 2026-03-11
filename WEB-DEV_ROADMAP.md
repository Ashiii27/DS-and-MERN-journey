# 🌐 Full Stack Web Dev Roadmap — Placement Prep 

> **Resource:** Chai aur Code — Full Course (Hitesh Choudhary)  
> **Stack:** HTML · CSS · Tailwind · JavaScript · Node.js · MongoDB · SQL · React · Next.js · Docker  
> **Target:** Full Stack SDE roles — August 2026

---

## Why This Order

Frontend before backend. Fundamentals before frameworks. Understand what a tool solves before you pick it up. Build something real at the end of every major section — not a clone, something you thought of.

---

## Phase 1 — Frontend Foundation
· The layer every user sees

### 1. HTML
The skeleton of the web. Semantic HTML matters more than most beginners think — interviewers notice it and accessibility tools depend on it.

**Topics**
- Document structure and DOCTYPE
- Semantic elements — header, main, section, article, footer, nav, aside
- Forms — input types, labels, validation attributes
- Tables and their proper use cases
- Media — images, video, audio, figure
- Metadata — head, title, link, script, meta tags
- Accessibility basics — alt text, ARIA roles, tab order
- SEO fundamentals — heading hierarchy, semantic meaning

---

### 2. CSS
The most underestimated skill in frontend development. The candidates who truly understand CSS stand out — because most don't.

**Topics**
- Box Model — content, padding, border, margin
- Display — block, inline, inline-block, none
- Positioning — static, relative, absolute, fixed, sticky
- Flexbox — axes, alignment, wrapping, grow/shrink/basis
- CSS Grid — template columns/rows, areas, auto-fill, auto-fit
- Specificity and Cascade — how the browser resolves conflicts
- Pseudo-classes and Pseudo-elements
- CSS Variables (Custom Properties)
- Responsive Design — media queries, mobile-first approach
- Transitions and Animations
- CSS Transforms — translate, rotate, scale, skew
- Typography — font-face, line-height, letter-spacing
- Overflow and Clipping
- Stacking Context and z-index

---

### 3. Tailwind CSS
Utility-first CSS framework. Once you understand CSS deeply, Tailwind feels like a natural extension of it.

**Topics**
- Utility class mental model — why utility-first
- Layout utilities — container, display, position, float
- Flexbox and Grid utilities
- Spacing — margin and padding scale
- Sizing — width, height, min/max variants
- Typography utilities
- Color system and opacity
- Borders, shadows, rounded corners
- Responsive prefixes — sm, md, lg, xl, 2xl
- Dark mode with Tailwind
- Hover, focus, active state modifiers
- Arbitrary values with square bracket syntax
- Component extraction with @apply
- Tailwind config — extending the theme

---

## Phase 2 — JavaScript
· The most important section of the entire course

JavaScript deeply understood is what separates candidates who clear frontend rounds from those who don't. This section deserves more time than any other.

### 4. JavaScript Foundation
**Topics**
- Variables — var, let, const and their scoping rules
- Data types — primitives vs reference types
- Type coercion — implicit and explicit
- Operators — arithmetic, comparison, logical, nullish coalescing
- Control flow — if/else, switch, ternary
- Loops — for, while, do-while, for...of, for...in
- Functions — declarations, expressions, arrow functions
- Default parameters and rest parameters
- Scope — global, function, block
- Hoisting — how it works for var, let, const, and functions
- Closures — what they are, how they trap scope, practical uses
- The Temporal Dead Zone

---

### 5. JavaScript — OOP
**Topics**
- Object literals and property shorthand
- this keyword — how it changes with context
- Constructor functions
- Prototype and Prototype Chain
- Object.create()
- ES6 Classes — class syntax, constructor, methods
- Inheritance with extends and super
- Static methods and properties
- Encapsulation patterns
- Getters and Setters
- Mixin patterns
- Factory functions vs Constructor functions vs Classes

---

### 6. JavaScript in the Browser — DOM and BOM
**Topics**
- Document Object Model — tree structure
- Selecting elements — querySelector, querySelectorAll, getElementById
- Traversing the DOM — parent, children, siblings
- Creating and inserting elements
- Modifying content — innerHTML, textContent, innerText
- Modifying attributes and classes
- Event model — addEventListener, removeEventListener
- Event bubbling and capturing
- Event delegation pattern
- Browser Object Model — window, location, history, navigator
- localStorage and sessionStorage
- Cookies basics
- URL manipulation with History API

---

### 7. Advanced JavaScript
The interviews test this section the hardest. Every concept here has been asked directly in fresher technical rounds at product companies.

**Topics**
- Execution Context and Call Stack
- Event Loop — how JavaScript is single-threaded yet async
- Web APIs and the Task Queue
- Microtask Queue — Promise callbacks vs setTimeout
- Callbacks and Callback Hell
- Promises — states, chaining, error handling
- async / await — syntactic sugar over Promises
- Promise combinators — Promise.all, Promise.race, Promise.allSettled, Promise.any
- Error handling — try/catch/finally with async code
- Generators and Iterators
- Symbol type and well-known symbols
- WeakMap and WeakSet
- Proxy and Reflect
- Currying and Partial Application
- Memoization
- Debounce and Throttle — implementation from scratch
- Deep Clone vs Shallow Clone
- Spread and Rest in depth
- Destructuring — objects, arrays, nested, defaults
- Modules — import/export, named vs default, dynamic import

---

### 8. JavaScript Projects
Apply everything above in real projects. Do not skip this. This is where it actually gets retained.

**Project Types to Build**
- DOM manipulation project — something interactive without any framework
- Async project — fetches real API data and handles loading/error states
- OOP project — built around classes and proper encapsulation
- Module-based project — split into multiple files with imports/exports

---

## Phase 3 — Version Control
> Alongside Phase 2 — Week 1

### 9. Git and GitHub
Non-negotiable. Interviewers literally look at your GitHub profile during interviews. Your commit history is a signal.

**Topics**
- Git internals — how commits, trees, and blobs work
- init, clone, add, commit, push, pull
- Branching — create, switch, merge, delete
- Merge strategies — fast-forward, 3-way, squash
- Rebase — interactive rebase, rebase vs merge
- Conflict resolution
- Stash — save and restore work in progress
- .gitignore — patterns and use cases
- Remote repositories — origin, upstream, fetch vs pull
- Pull Requests — workflow and code review process
- GitHub features — Issues, Projects, Actions basics
- Semantic commit messages
- Forking workflow

---

## Phase 4 — Backend with Node.js
· The server side

### 10. Node.js Foundation and Projects
**Topics**
- What Node.js is — V8 engine, libuv, event loop on the server
- Module system — CommonJS require vs ES Modules import
- Built-in modules — fs, path, os, http, events, stream
- npm — init, install, scripts, package.json, package-lock.json
- npx and global vs local packages
- Creating a raw HTTP server
- Understanding streams and buffers
- Environment variables with dotenv
- Error handling in Node.js

---

### 11. Express.js — Backend Framework
**Topics**
- Express setup and application structure
- Routing — GET, POST, PUT, PATCH, DELETE
- Route parameters and query strings
- Middleware — built-in, third-party, custom
- Request and Response objects in depth
- Error handling middleware
- Static file serving
- Template engines overview
- Organizing routes with Router
- CORS handling
- Rate limiting basics

---

### 12. REST API Design
**Topics**
- REST principles — stateless, uniform interface, resource-based
- HTTP methods and their correct usage
- HTTP status codes — which to use when
- Request and Response structure
- API versioning strategies
- Pagination — offset-based and cursor-based
- Filtering, sorting, searching patterns
- API documentation basics

---

## Phase 5 — Databases


### 13. Introduction to Databases
**Topics**
- Relational vs Non-relational — when to use which
- ACID properties — Atomicity, Consistency, Isolation, Durability
- Transactions
- Indexing — what it is, how it speeds up queries, trade-offs
- Primary key, Foreign key, Constraints
- Normalization — 1NF, 2NF, 3NF, BCNF
- CAP Theorem basics

---

### 14. MongoDB
**Topics**
- Document model — collections, documents, BSON
- CRUD operations in depth
- Query operators — comparison, logical, element, array
- Projection and sorting
- Schema design — embedding vs referencing
- Mongoose ODM — schemas, models, validation, middleware
- Relationships — one-to-one, one-to-many, many-to-many patterns
- Indexing in MongoDB — single field, compound, text
- Aggregation Pipeline — $match, $group, $project, $sort, $lookup, $unwind
- Advanced aggregation operators
- Transactions in MongoDB
- Connection pooling

---

### 15. SQL — MySQL and PostgreSQL
**Topics**
- DDL — CREATE, ALTER, DROP, TRUNCATE
- DML — INSERT, UPDATE, DELETE
- DQL — SELECT in depth
- WHERE, ORDER BY, GROUP BY, HAVING
- Joins — INNER, LEFT, RIGHT, FULL OUTER, CROSS, SELF
- Subqueries — correlated and non-correlated
- Window Functions — ROW_NUMBER, RANK, DENSE_RANK, LAG, LEAD, PARTITION BY
- CTEs — Common Table Expressions with WITH
- Indexes — types and when to create them
- Views
- Stored Procedures and Functions basics
- Transactions and Isolation Levels
- Difference between MySQL and PostgreSQL — when to choose which

---

## Phase 6 — Authentication and Security
> Alongside backend sections

### 16. Authentication System
**Topics**
- Authentication vs Authorization
- Session-based auth — cookies, session storage
- Token-based auth — JWT structure, signing, verification
- OAuth 2.0 flow — how third party login works
- Passport.js strategies
- bcrypt — password hashing and salting
- Refresh tokens and access tokens
- HTTP-only cookies vs localStorage for token storage
- Role-based access control (RBAC)
- Common auth vulnerabilities — CSRF, session hijacking, token theft

---

## Phase 7 — React
> The most placement-relevant frontend framework

### 17. React — Core Concepts
**Topics**
- Why React — Virtual DOM, reconciliation, diffing algorithm
- JSX — what it compiles to
- Components — functional components
- Props — passing data down, prop types
- State — useState, when to use local state
- Event handling in React
- Conditional rendering patterns
- Lists and keys — why keys matter
- Component composition patterns
- Lifting state up

---

### 18. React — Hooks
**Topics**
- useState — state updates, batching
- useEffect — dependency array, cleanup, common mistakes
- useContext — avoiding prop drilling
- useRef — DOM access and mutable values
- useMemo — memoizing expensive computations
- useCallback — memoizing functions
- useReducer — complex state logic
- Custom hooks — extracting and reusing stateful logic

---

### 19. React — Advanced
**Topics**
- React Router — BrowserRouter, Routes, Route, Link, NavLink
- Dynamic routing and nested routes
- Code splitting with React.lazy and Suspense
- Error Boundaries
- React Query / TanStack Query — server state management
- Zustand or Redux Toolkit — global client state
- Form handling — controlled components, React Hook Form
- Performance optimization — memo, lazy loading, virtualization
- React Dev Tools profiling

---

### 20. React Projects
Build 10 projects as part of the course. Each one should be pushed to GitHub with a proper README.

**Project Complexity Progression**
- Basic — static components, props, simple state
- Intermediate — API calls, loading states, error handling, routing
- Advanced — authentication, global state, real database, deployed

---

## Phase 8 — Next.js and Full Stack
> Post-React

### 21. Next.js Foundation
**Topics**
- Why Next.js over plain React — SSR, SSG, file-based routing
- App Router vs Pages Router — understanding the shift
- File-based routing — pages, layouts, loading, error files
- Server Components vs Client Components — when to use each
- Data fetching — fetch in server components, revalidation strategies
- Static Generation (SSG) and Server-Side Rendering (SSR)
- Incremental Static Regeneration (ISR)
- API Routes — building backend inside Next.js
- Middleware in Next.js
- Image and Font optimization
- Metadata API for SEO

---

### 22. Full Stack Projects with Next.js
**Projects covered in course**
- Full stack authentication system with MongoDB
- Full stack QnA system with Appwrite

**What to focus on in each**
- Database schema design decisions
- API route structure
- Authentication flow end to end
- State management across server and client components
- Deployment pipeline

---

## Phase 9 — Deployment and Infrastructure
> Final phase

### 23. Docker and Containers
**Topics**
- What containers solve — environment consistency
- Docker architecture — daemon, client, images, containers, registry
- Dockerfile — FROM, RUN, COPY, WORKDIR, EXPOSE, CMD, ENTRYPOINT
- Docker images — building, tagging, pushing to Docker Hub
- Docker containers — run, stop, start, logs, exec
- Docker volumes — persisting data
- Docker networking — bridge, host, custom networks
- Docker Compose — multi-container applications
- Docker Compose for full stack app — frontend + backend + database together
- .dockerignore

---

### 24. Deployment
**Topics**
- Environment variables in production
- Deploying Node.js backend — Railway, Render, or VPS
- Deploying React/Next.js — Vercel (primary), Netlify
- Deploying MongoDB — MongoDB Atlas
- Domain and DNS basics
- HTTPS and SSL certificates
- CI/CD basics — what it is, GitHub Actions simple pipeline
- Monitoring basics — logs, uptime, error tracking

---

## Phase 10 — AI-Powered Project
> Final capstone

### 25. AI Integration
**Topics**
- OpenAI API / Anthropic API — how to call LLMs from your backend
- Prompt engineering basics
- Streaming responses
- Building AI features into existing full stack apps
- Prisma ORM — schema, migrations, queries
- NeonDB — serverless PostgreSQL
- Full stack SAAS architecture overview

---

## What to Build Alongside the Course

At the end of each major section, build one original project. Not a tutorial clone — something you thought of.

**After JavaScript** — a frontend-only tool that solves a real problem for you  
**After Backend + MongoDB** — a REST API with full CRUD, auth, and proper error handling  
**After React** — a React app that consumes your own API  
**After Next.js** — a full stack deployed application that is live and accessible via URL  

The deployed full stack project is what you show in interviews. It is worth more than everything else combined.

---

## GitHub Habits

- Push after every single session — even if it is 10 lines
- Write meaningful commit messages — not "update" or "fix"
- Every project gets a README with what it does, tech stack, and how to run it locally
- Pin your best 4 to 6 repositories on your GitHub profile
- Keep your contribution graph consistently green

---

## Placement-Critical Sections

If time becomes tight before August 2026, these sections have the highest interview return:

1. JavaScript Advanced — closures, event loop, promises, async/await
2. React Core + Hooks — asked in almost every frontend round
3. REST API Design with Express — explain your API decisions confidently
4. MongoDB + SQL — at least one will be tested in every full stack interview
5. Git — non-negotiable, always tested

---

## End Goal — August 2026

- A deployed full stack application live on the internet with a real URL
- GitHub profile with consistent green commits and pinned projects
- Ability to walk an interviewer through every technical decision you made
- Comfortable discussing tradeoffs — why MongoDB over SQL for this project, why React Query over Redux here
- JWT auth flow explainable end to end from memory
