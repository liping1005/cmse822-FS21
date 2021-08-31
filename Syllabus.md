---
layout: page
title: Syllabus
---

# CMSE 822, Fall 21
## Parallel Programming

### Background:
Calculus at the level of MTH 133. Ability to program proficiently in
C/C++, basic understanding of data structures and algorithms (both at
the level of CSE 232). Basic linear algebra and differential
equations.

### Description:
Core principles, techniques, and use of parallel computation using
modern supercomputers. Parallel architectures. Parallel programming
models. Principles of parallel algorithm design. Performance analysis
and optimization. 

### Objectives

The focus of the coures will be:

*   Learn introductory concepts of parallel programming
*   Briefly review C++ programming and related issues (build, profile,
    optimize, etc.)
*   Review basic hardware/software issues that affect parallel programming
*   Work with existing tools for programming threads, shared memory,
    distributed memory and SIMD (GPU)
*   Apply what we learn to some basic problems in physics, CS and
    other sciences to see how well we can speed up calculation.

### Instructor

[Dr. Bill Punch](http://www.egr.msu.edu/~punch)

Office:  Engineering 2501

Office Hours: after class or by appointment

Phone: 517-432-0458

Personal Zoom: [https://msu.zoom.us/my/wfpunch](https://msu.zoom.us/my/wfpunch)

email: punch at msu dot edu

email is _by far_ the best way to contact me

### Course Web Site

I try to run all of the course material out of the CMSE 822 at:
[https://github.com/msu-cmse-courses/cmse822-FS21](https://github.com/msu-cmse-courses/cmse822-FS21). Check
there for announcements, resources and the like
  
Discussion boards will also be on Slack at
[https://cmse-courses.slack.com/archives/C029BK8HJFR](https://cmse-courses.slack.com/archives/C029BK8HJFR). This
is a good place to ask questions as I, the TA and your fellow
classmates can all see it and try to answer.

### Covid Policy
At the time of this syllabus's writing, we are operating under the
policy listed at [MSU Together we Will](https://msu.edu/together-we-will/faqs/). These
directives include: 

* Wearing a mask when indoors, regardless of vaccination status
* Everyone must be vaccinated, receiving at least one does of a
  two-dose vaccine by 8/31/2021 unless you have been specfically
  exempted.
* [Vaccine Status Form](go.msu.edu/covidvaccinestatus). You are required to complete the form and to revisit it if your vaccination status changes over the next few weeks. All members of our campus communities must complete this form by Tuesday, Aug. 31, even if they previously completed the university’s vaccine survey. 
* Exemption forms are available at [Exemption link](https://msu.edu/together-we-will/covid19-vaccine/exemptions.html?utm_source=reopening-email&utm_medium=email&utm_campaign=faculty-staff)
* You may also request an exemption through the [Resource Center for
  Persons of Disabilities](https://www.rcpd.msu.edu/) 


### Course Textbook

We are going to work with some publically available material. They are:
* [Intro to HPC](https://pages.tacc.utexas.edu/~eijkhout/istc/html/index.html). You can also download a [pdf version](https://web.corral.tacc.utexas.edu/CompEdu/pdf/stc/EijkhoutIntroToHPC.pdf)
* [Parallel  Programming](https://pages.tacc.utexas.edu/~eijkhout/pcse/html/index.html). You can also download a [pdf version](https://web.corral.tacc.utexas.edu/CompEdu/pdf/pcse/EijkhoutParallelProgramming.pdf)

### Conduct of the Course
Class is in-person, Tu Thu 10:20 to 11:40 in EB 1230. Your attendance
is required and will be monitored. 

There will be a **pre-class** exercise and an **in-class** exercise
associated with most class periods. You must complete the pre-class portion and turn
it in to D2L **before** the class starts. You will submit your work
done during in-class before you leave the class or soon thereafter.

### Course Grades

Each student's course grade will be based on the sum of the points earned in the following categories:

assignment |  percentage
-----------|------------
pre-class  |  10%
in-class   |  10%
Homeworks (5) | 50%
Final Project | 30%


The following table gives the scale for course grades:  
  
Grade | Points
------|-------
4.0   | 90% or more of points
3.5   | 85% of points available
3.0   | 80% of points available
2.5   | 75% of points available
2.0   | 70% of points available
1.5   | 65% of points available
1.0   | 60% of points available

  
The instructor reserves the right to adjust the scale for course grades, if necessary.  
  
### Important Dates
---------------

See: [Academic Calendar 2018/18](https://reg.msu.edu/ROInfo/Calendar/academic.aspx) for complete dates, but note that:

*   the last day to add a class without intervention: September 8th
*   the last day to drop with a full refund: September 27th
*   the last day a student can drop with no grade: October 20th


### Inclusive classroom behavior:  Respectful and responsible behavior
is expected at all times, which includes not interrupting other
students, turning your cell phone off, refraining from
non-course-related use of electronic devices, and not using offensive
or demeaning language in our discussions. Flagrant or repeated
violations of this expectation may result in ejection from the
classroom, grade-related penalties, and/or involvement of the
university Ombudsperson. In particular, behaviors that could be
considered discriminatory or harassing, or unwanted sexual attention,
will not be tolerated and will be immediately reported to the
appropriate MSU office (which may include the MSU Police Department). 

In addition, MSU welcomes a full spectrum of experiences, viewpoints,
and intellectual approaches because they enrich the conversation, even
as they challenge us to think differently and grow. However, we
believe that expressions and actions that demean individuals or groups
comprise the environment for intellectual growth and undermine the
social fabric on which the community is based. These demeaning
behaviors are not welcome in this classroom.

### Academic Honesty:  Intellectual integrity is the foundation of the
scientific enterprise. In all instances, you must do your own work and
give proper credit to all sources that you use in your papers and oral
presentations – any instance of submitting another person’s work,
ideas, or wording as your own counts as plagiarism. This includes
failing to cite any direct quotations in your essays, research paper,
class debate, or written presentation. The MSU College of Natural
Science adheres to the policies of academic honesty as specified in
the General Student Regulations 1.0, Protection of Scholarship and
Grades, and in the all-University statement on Integrity of
Scholarship and Grades, which are included in Spartan Life: Student
Handbook and Resource Guide. Students who plagiarize will receive a
0.0 in the course. In addition, University policy requires that any
cheating offense regardless of the magnitude of the infraction or
punishment decided upon by the professor, be reported immediately to
the dean of the student's college. 

It is important to note that plagiarism in the context of this course
includes, but is not limited to, directly copying another student’s
solutions to assignments that are expected to be completed
individually (pre-class assignments, homework problems),
copying materials from online sources, textbooks, or other reference
materials without citing those references in your source code or
documentation, or having somebody else do your individual assignments
(pre-class assignments, homework problems, and exams) on your
behalf. Any work that is done in collaboration with other students
should state this explicitly, and their names as well as yours should
be listed clearly. When collaborating with other students, you should
still be coding/writing your own solutions to the assignments and
should limit your collaboration to conceptual discussions about how
one might go about solving the problems, not sharing exact solutions. 

More broadly, we ask that students adhere to the Spartan Code of Honor
academic pledge, as written by the Associated Students of Michigan
State University (ASMSU): “As a Spartan, I will strive to uphold
values of the highest ethical standard. I will practice honesty in my
work, foster honesty in my peers, and take pride in knowing that honor
is worth more than grades. I will carry these values beyond my time as
a student at Michigan State University, continuing the endeavor to
build personal integrity in all that I do.” 

### Accommodations:  If you have a university-documented learning
difficulty or require other accommodations, please provide me with
your VISA as soon as possible and speak with me about how I can assist
you in your learning.  If you do not have a VISA but have been
documented with a learning difficulty or other problems for which you
may still require an accommodation, please contact MSU’s Resource
Center for People with Disabilities (355-9642) in order to acquire
current documentation.
