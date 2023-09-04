#if !defined(HAVE_IBUF_DATA)

void *
ibuf_data(struct ibuf *buf)
{
	return (ibuf_seek(buf, 0, 0));
}
#endif /* !defined(HAVE_IBUF_DATA) */
