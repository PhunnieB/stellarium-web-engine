/* Stellarium Web Engine - Copyright (c) 2018 - Noctua Software Ltd
 *
 * This program is licensed under the terms of the GNU AGPL v3, or
 * alternatively under a commercial licence.
 *
 * The terms of the AGPL v3 license can be found in the main directory of this
 * repository.
 */

/* File: assets.h
 *
 * Used to load resources from url.  This is an abstraction over loader,
 * with the additional features:
 * - Support statically defined assets (with asset:// prefix).
 * - When an asset is not used anymore, it is removed from the cache.
 *
 * All the data returned is owned by the asset manager.
 *
 * XXX: still a bit experimental, and some features (like the local cache)
 * are duplicated in loader.  Maybe I should make loader private and only
 * use asset in the code?
 */
void asset_register(const char *url, const void *data, int size,
                    bool compressed);
const void *asset_get_data(const char *url, int *size, int *code);

#define ASSET_REGISTER(id_, name_, data_, comp_) \
    static void register_asset_##id_(void) __attribute__((constructor)); \
    static void register_asset_##id_(void) { \
        asset_register("asset://" name_, data_, sizeof(data_), comp_); }

#define ASSET_ITER(base_, path_) \
    for (void *i_ = NULL; (path_ = asset_iter_(base_, &i_)); )
const char *asset_iter_(const char *base, void **i);
