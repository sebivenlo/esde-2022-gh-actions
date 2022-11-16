# Fix Repository Task

As you might have already noticed, some of this repository's workflows are
failing or behaving very strangely. Therefore we have decided that it is now
your mission to identify, understand and resolve the following checklist of
issues in the next 20 minutes:

- [ ] Deno CI does not trigger on the main branch like all the other workflows.
  _(Tip: Check the workflow triggers)_

- [ ] There also seems to be an issue that none of the code files can be found in
  the execution context for that workflow (Deno CI). _(Tip: git checkout)_

- [ ] Currently, the release setup only creates builds for `macos`. Enhance the
  workflow with support for `ubuntu`. _(Tip: Is Neo "The One"?)_

We did not expect you to be this quick, but luckily we prepared a few extra
tasks just in case:

- [ ] Your copy of the template repository appears to be suffering from resource
  loss. Investigate how to satisfy the MoSCoW Prioritization's label
  requirements using the `Actions` tab, `Summary` section and error message.

- [ ] Feel free to integrate any action of your choosing from the GitHub
  Marketplace.
