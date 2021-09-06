## TODO
- [ ] symbol name and stack frame are no longer captured since switching to
  iterative method
- [ ] Setup a test script to roughly recreate the feature cache oom scenario
- [ ] Introduce binary output format (json files getting too big)
- [ ] Add ini setting to auto-dump on OOM (and path)

## Completed
- [x] Attempt to dump heap during feature flag cache OOM crash
- [x] Convert recursive traversal with iterative + stack
- [x] Vendor or write simple stack data structure
- [x] Fix json comma after frame name
- [x] Replace zend HashTable with hashset.c
