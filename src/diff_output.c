	git_diff_data_fn line_cb;
	git_diff_range range;
		memcpy(&info->range, &range, sizeof(git_diff_range));

			info->cb_data, info->delta, &info->range, origin, bufs[1].ptr, bufs[1].size) < 0)
				info->cb_data, info->delta, &info->range, origin, bufs[2].ptr, bufs[2].size);
	git_diff_data_fn line_cb)
		if (delta->status == GIT_DELTA_UNMODIFIED &&
			(diff->opts.flags & GIT_DIFF_INCLUDE_UNMODIFIED) == 0)
					if ((diff->opts.flags & GIT_DIFF_INCLUDE_UNMODIFIED) == 0)
						goto cleanup;
	git_diff_data_fn print_cb;
	return pi->print_cb(pi->cb_data, delta, NULL, GIT_DIFF_LINE_FILE_HDR, git_buf_cstr(pi->buf), git_buf_len(pi->buf));
	git_diff_data_fn print_cb)
	int result;
	if (!oldpfx)
		oldpfx = DIFF_SRC_PREFIX_DEFAULT;

	if (!newpfx)
		newpfx = DIFF_DST_PREFIX_DEFAULT;

		newpfx = "";
		newpath = "/dev/null";
    result = pi->print_cb(pi->cb_data, delta, NULL, GIT_DIFF_LINE_FILE_HDR, git_buf_cstr(pi->buf), git_buf_len(pi->buf));
    if (result < 0)
        return result;

    if (delta->binary != 1)
        return 0;
	return pi->print_cb(pi->cb_data, delta, NULL, GIT_DIFF_LINE_BINARY, git_buf_cstr(pi->buf), git_buf_len(pi->buf));
	return pi->print_cb(pi->cb_data, d, r, GIT_DIFF_LINE_HUNK_HDR, git_buf_cstr(pi->buf), git_buf_len(pi->buf));
	git_diff_range *range,
	return pi->print_cb(pi->cb_data, delta, range, line_origin, git_buf_cstr(pi->buf), git_buf_len(pi->buf));
	git_diff_data_fn print_cb)
	git_diff_data_fn line_cb)