#pragma once

typedef long _lock_t;

#ifdef __cplusplus
extern "C" {
#endif
    void _lock_init(_lock_t *lock);
    void _lock_init_recursive(_lock_t *lock);
    void _lock_close(_lock_t *lock);
    void _lock_close_recursive(_lock_t *lock); // __attribute__((alias("_lock_close")));
    void _lock_acquire(_lock_t *lock);
    void _lock_acquire_recursive(long *lock);
    int _lock_try_acquire(_lock_t *lock);
    int _lock_try_acquire_recursive(_lock_t *lock);
    void _lock_release(_lock_t *lock);
    void _lock_release_recursive(_lock_t *lock);
#ifdef __cplusplus
}
#endif
