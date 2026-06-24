// Theme toggle
const toggle = document.getElementById('theme-toggle');
const body   = document.body;

const savedTheme = localStorage.getItem('theme') || 'light';
body.classList.remove('light', 'dark');
body.classList.add(savedTheme);

toggle.addEventListener('click', () => {
    const next = body.classList.contains('dark') ? 'light' : 'dark';
    body.classList.remove('light', 'dark');
    body.classList.add(next);
    localStorage.setItem('theme', next);
});

// Tab switching
document.querySelectorAll('[data-tabs]').forEach(tabGroup => {
    const groupId = tabGroup.dataset.tabs;
    const tabs    = tabGroup.querySelectorAll('.tab');

    tabs.forEach(tab => {
        tab.addEventListener('click', () => {
            const target = tab.dataset.tab;

            tabs.forEach(t => t.classList.remove('active'));
            tab.classList.add('active');

            document.querySelectorAll(`[id^="${groupId}-"]`).forEach(panel => {
                panel.classList.remove('active');
            });

            const panel = document.getElementById(`${groupId}-${target}`);
            if (panel) panel.classList.add('active');
        });
    });
});

// Fade-in on scroll
const observer = new IntersectionObserver(
    entries => entries.forEach(e => {
        if (e.isIntersecting) {
            e.target.classList.add('visible');
            observer.unobserve(e.target);
        }
    }),
    { threshold: 0.1 }
);

document.querySelectorAll(
    '.feature-card, .step, .api-card, .example-card, .ns-table-wrap'
).forEach(el => {
    el.classList.add('fade-in');
    observer.observe(el);
});

// Smooth active nav link
const sections = document.querySelectorAll('section[id]');
const navLinks = document.querySelectorAll('.nav-links a');

const navObserver = new IntersectionObserver(
    entries => {
        entries.forEach(e => {
            if (e.isIntersecting) {
                navLinks.forEach(a => a.style.color = '');
                const link = document.querySelector(`.nav-links a[href="#${e.target.id}"]`);
                if (link) link.style.color = 'var(--primary)';
            }
        });
    },
    { rootMargin: '-40% 0px -55% 0px' }
);

sections.forEach(s => navObserver.observe(s));
