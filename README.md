# Workshop: GitHub Actions for Enterprises

## Resources & Tutorials

- [Overview](https://github.com/features/actions)
- [Quickstart](https://docs.github.com/en/actions/quickstart)
- [Getting started with GitHub Actions](https://resources.github.com/whitepapers/github-actions-cheat/)
- [Actions Cheat Sheet (New)](https://assets.ctfassets.net/wfutmusr1t3h/0HWtwIjwrnhdV3m50ZV87/5d0092144f32beeec76fb26ea17abfd8/_downloads_GitHub_Actions-Cheat-Sheet-One-Pager.pdf)
- [Actions Cheat Sheet (Old)](https://github.github.io/actions-cheat-sheet/actions-cheat-sheet.pdf)
- [GitHub Git Basics](https://training.github.com/downloads/github-git-cheat-sheet/)
- [Git Cheat Sheet (GitHub)](https://education.github.com/git-cheat-sheet-education.pdf)
- [Git Cheat Sheet (Atlassian)](https://www.atlassian.com/git/tutorials/atlassian-git-cheatsheet)

## Used Tools

- [Word Clouds](https://www.mentimeter.com)
- [Quiz](https://kahoot.com/)
- [Code Snipet Formatting](https://carbon.now.sh)

## Sources

- [What is GitHub?](https://www.youtube.com/watch?v=pBy1zgt0XPc)
- [Workflow Basics](https://docs.github.com/en/actions/using-workflows/about-workflows)
- [Introducing GitHub Actions to your enterprise](https://docs.github.com/en/enterprise-server@3.3/admin/github-actions/getting-started-with-github-actions-for-your-enterprise/introducing-github-actions-to-your-enterprise)
- [Migrating from Jenkins to GitHub Actions](https://docs.github.com/en/actions/migrating-to-github-actions/migrating-from-jenkins-to-github-actions)
- [Migrating from CircleCI to GitHub Actions](https://docs.github.com/en/actions/migrating-to-github-actions/migrating-from-circleci-to-github-actions)

### Mentioned Repositories

- [Robotica - SoFa](https://github.com/FontysVenlo/SOFA_2022_Robotica_Inther)
- [FOSS Plant Insights - PIOT](https://github.com/grevend/fontys-piot-flatdata-test)
- [Shamir’s Secret-Sharing Scheme](https://github.com/grevend/shamirs-secret-sharing)


# Shamir’s Secret-Sharing Scheme

A preponderance of the open-source Shamir’s Secret-Sharing Scheme implementations operate on a finite field $\mathbb{F}_q$, where $q$ is dependent on both the secret size as well as the number of shares, thus requiring both the search for a sufficiently large prime as well as the support of a large enough number representation or chunking of the secret. This implementation outlines an optimized low-level c and inline assembly-based alternative that uses the Galois field $2^8$, referred to as GF(256), along with a Reed-Solomon inspired encoding approach and a hardware-accelerated entropy sourced secure number generator to offer the theoretical capacity to process secrets up to 8 Exabytes.
