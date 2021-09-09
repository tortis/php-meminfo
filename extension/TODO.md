## TODO
- [x] Add ini setting to auto-dump on OOM (and path)
    - [ ] Browse "main_symbol_table" on oom (execution stack is lost at this point)
    - [x] Update README to document new settings
- [ ] Introduce binary output format (json files getting too big)
- [ ] Look meminfo_browse_class_static_members memory usage
- [ ] Add ini setting to optionally include static class values in dump

## Completed
- [x] symbol name and stack frame are no longer captured since switching to
  iterative method
- [x] Setup a test script to roughly recreate the feature cache oom scenario
- [x] Attempt to dump heap during feature flag cache OOM crash
- [x] Convert recursive traversal with iterative + stack
- [x] Vendor or write simple stack data structure
- [x] Fix json comma after frame name
- [x] Replace zend HashTable with hashset.c
