// Test fixture for the code-review pipeline. Deliberately contains defects a
// reviewer should catch; not built or linked by the kernel build.
#include <stdlib.h>
#include <string.h>

struct ring {
	char   *buf;
	size_t  cap;
	size_t  len;
};

struct ring *ring_new(size_t cap)
{
	struct ring *r = malloc(sizeof(*r));

	/* defect: malloc result never checked before use */
	r->buf = malloc(cap);
	r->cap = cap;
	r->len = 0;
	return r;
}

int ring_push(struct ring *r, const char *data, size_t n)
{
	/* defect: off-by-one — allows writing one byte past the end */
	if (r->len + n > r->cap + 1)
		return -1;

	memcpy(r->buf + r->len, data, n);
	r->len += n;
	return 0;
}

void ring_free(struct ring *r)
{
	/* defect: leaks r->buf */
	free(r);
}
