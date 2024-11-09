/* Generated by wayland-scanner 1.22.0 */

#ifndef FROG_COLOR_MANAGEMENT_V1_CLIENT_PROTOCOL_H
#define FROG_COLOR_MANAGEMENT_V1_CLIENT_PROTOCOL_H

#include <stdint.h>
#include <stddef.h>
#include "wayland-client.h"

#ifdef  __cplusplus
extern "C" {
#endif

/**
 * @page page_frog_color_management_v1 The frog_color_management_v1 protocol
 * experimental color management protocol
 *
 * @section page_desc_frog_color_management_v1 Description
 *
 * The aim of this color management extension is to get HDR games working quickly,
 * and have an easy way to test implementations in the wild before the upstream
 * protocol is ready to be merged.
 * For that purpose it's intentionally limited and cut down and does not serve
 * all uses cases.
 *
 * @section page_ifaces_frog_color_management_v1 Interfaces
 * - @subpage page_iface_frog_color_management_factory_v1 - color management factory
 * - @subpage page_iface_frog_color_managed_surface - color managed surface
 * @section page_copyright_frog_color_management_v1 Copyright
 * <pre>
 *
 * Copyright © 2023 Joshua Ashton for Valve Software
 * Copyright © 2023 Xaver Hugl
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice (including the next
 * paragraph) shall be included in all copies or substantial portions of the
 * Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.  IN NO EVENT SHALL
 * THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
 * DEALINGS IN THE SOFTWARE.
 * </pre>
 */
struct frog_color_managed_surface;
struct frog_color_management_factory_v1;
struct wl_surface;

#ifndef FROG_COLOR_MANAGEMENT_FACTORY_V1_INTERFACE
#define FROG_COLOR_MANAGEMENT_FACTORY_V1_INTERFACE
/**
 * @page page_iface_frog_color_management_factory_v1 frog_color_management_factory_v1
 * @section page_iface_frog_color_management_factory_v1_desc Description
 *
 * The color management factory singleton creates color managed surface objects.
 * @section page_iface_frog_color_management_factory_v1_api API
 * See @ref iface_frog_color_management_factory_v1.
 */
/**
 * @defgroup iface_frog_color_management_factory_v1 The frog_color_management_factory_v1 interface
 *
 * The color management factory singleton creates color managed surface objects.
 */
extern const struct wl_interface frog_color_management_factory_v1_interface;
#endif
#ifndef FROG_COLOR_MANAGED_SURFACE_INTERFACE
#define FROG_COLOR_MANAGED_SURFACE_INTERFACE
/**
 * @page page_iface_frog_color_managed_surface frog_color_managed_surface
 * @section page_iface_frog_color_managed_surface_desc Description
 *
 * Interface for changing surface color management and HDR state.
 *
 * An implementation must: support every part of the version
 * of the frog_color_managed_surface interface it exposes.
 * Including all known enums associated with a given version.
 * @section page_iface_frog_color_managed_surface_api API
 * See @ref iface_frog_color_managed_surface.
 */
/**
 * @defgroup iface_frog_color_managed_surface The frog_color_managed_surface interface
 *
 * Interface for changing surface color management and HDR state.
 *
 * An implementation must: support every part of the version
 * of the frog_color_managed_surface interface it exposes.
 * Including all known enums associated with a given version.
 */
extern const struct wl_interface frog_color_managed_surface_interface;
#endif

#define FROG_COLOR_MANAGEMENT_FACTORY_V1_DESTROY 0
#define FROG_COLOR_MANAGEMENT_FACTORY_V1_GET_COLOR_MANAGED_SURFACE 1


/**
 * @ingroup iface_frog_color_management_factory_v1
 */
#define FROG_COLOR_MANAGEMENT_FACTORY_V1_DESTROY_SINCE_VERSION 1
/**
 * @ingroup iface_frog_color_management_factory_v1
 */
#define FROG_COLOR_MANAGEMENT_FACTORY_V1_GET_COLOR_MANAGED_SURFACE_SINCE_VERSION 1

/** @ingroup iface_frog_color_management_factory_v1 */
static inline void
frog_color_management_factory_v1_set_user_data(struct frog_color_management_factory_v1 *frog_color_management_factory_v1, void *user_data)
{
	wl_proxy_set_user_data((struct wl_proxy *) frog_color_management_factory_v1, user_data);
}

/** @ingroup iface_frog_color_management_factory_v1 */
static inline void *
frog_color_management_factory_v1_get_user_data(struct frog_color_management_factory_v1 *frog_color_management_factory_v1)
{
	return wl_proxy_get_user_data((struct wl_proxy *) frog_color_management_factory_v1);
}

static inline uint32_t
frog_color_management_factory_v1_get_version(struct frog_color_management_factory_v1 *frog_color_management_factory_v1)
{
	return wl_proxy_get_version((struct wl_proxy *) frog_color_management_factory_v1);
}

/**
 * @ingroup iface_frog_color_management_factory_v1
 */
static inline void
frog_color_management_factory_v1_destroy(struct frog_color_management_factory_v1 *frog_color_management_factory_v1)
{
	wl_proxy_marshal_flags((struct wl_proxy *) frog_color_management_factory_v1,
			 FROG_COLOR_MANAGEMENT_FACTORY_V1_DESTROY, NULL, wl_proxy_get_version((struct wl_proxy *) frog_color_management_factory_v1), WL_MARSHAL_FLAG_DESTROY);
}

/**
 * @ingroup iface_frog_color_management_factory_v1
 *
 */
static inline struct frog_color_managed_surface *
frog_color_management_factory_v1_get_color_managed_surface(struct frog_color_management_factory_v1 *frog_color_management_factory_v1, struct wl_surface *surface)
{
	struct wl_proxy *callback;

	callback = wl_proxy_marshal_flags((struct wl_proxy *) frog_color_management_factory_v1,
			 FROG_COLOR_MANAGEMENT_FACTORY_V1_GET_COLOR_MANAGED_SURFACE, &frog_color_managed_surface_interface, wl_proxy_get_version((struct wl_proxy *) frog_color_management_factory_v1), 0, surface, NULL);

	return (struct frog_color_managed_surface *) callback;
}

#ifndef FROG_COLOR_MANAGED_SURFACE_TRANSFER_FUNCTION_ENUM
#define FROG_COLOR_MANAGED_SURFACE_TRANSFER_FUNCTION_ENUM
/**
 * @ingroup iface_frog_color_managed_surface
 * known transfer functions
 *
 * Extended information on the transfer functions described
 * here can be found in the Khronos Data Format specification:
 *
 * https://registry.khronos.org/DataFormat/specs/1.3/dataformat.1.3.html
 */
enum frog_color_managed_surface_transfer_function {
	/**
	 * specifies undefined, implementation-specific handling of the surface's transfer function.
	 */
	FROG_COLOR_MANAGED_SURFACE_TRANSFER_FUNCTION_UNDEFINED = 0,
	/**
	 * specifies the sRGB non-linear EOTF. An implementation may: display this as Gamma 2.2 for the purposes of being consistent with content rendering across displays, rendering_intent and user expectations.
	 */
	FROG_COLOR_MANAGED_SURFACE_TRANSFER_FUNCTION_SRGB = 1,
	/**
	 * specifies gamma 2.2 power curve as the EOTF
	 */
	FROG_COLOR_MANAGED_SURFACE_TRANSFER_FUNCTION_GAMMA_22 = 2,
	/**
	 * specifies the SMPTE ST2084 Perceptual Quantizer (PQ) EOTF
	 */
	FROG_COLOR_MANAGED_SURFACE_TRANSFER_FUNCTION_ST2084_PQ = 3,
	/**
	 * specifies the scRGB (extended sRGB) linear EOTF. Note: Primaries outside the gamut triangle specified can be expressed with negative values for this transfer function.
	 */
	FROG_COLOR_MANAGED_SURFACE_TRANSFER_FUNCTION_SCRGB_LINEAR = 4,
};
#endif /* FROG_COLOR_MANAGED_SURFACE_TRANSFER_FUNCTION_ENUM */

#ifndef FROG_COLOR_MANAGED_SURFACE_PRIMARIES_ENUM
#define FROG_COLOR_MANAGED_SURFACE_PRIMARIES_ENUM
/**
 * @ingroup iface_frog_color_managed_surface
 * known primaries
 */
enum frog_color_managed_surface_primaries {
	/**
	 * specifies undefined, implementation-specific handling
	 */
	FROG_COLOR_MANAGED_SURFACE_PRIMARIES_UNDEFINED = 0,
	/**
	 * specifies Rec.709/sRGB primaries with D65 white point
	 */
	FROG_COLOR_MANAGED_SURFACE_PRIMARIES_REC709 = 1,
	/**
	 * specifies Rec.2020/HDR10 primaries with D65 white point
	 */
	FROG_COLOR_MANAGED_SURFACE_PRIMARIES_REC2020 = 2,
};
#endif /* FROG_COLOR_MANAGED_SURFACE_PRIMARIES_ENUM */

#ifndef FROG_COLOR_MANAGED_SURFACE_RENDER_INTENT_ENUM
#define FROG_COLOR_MANAGED_SURFACE_RENDER_INTENT_ENUM
/**
 * @ingroup iface_frog_color_managed_surface
 * known render intents
 *
 * Extended information on render intents described
 * here can be found in ICC.1:2022:
 *
 * https://www.color.org/specification/ICC.1-2022-05.pdf
 */
enum frog_color_managed_surface_render_intent {
	/**
	 * perceptual
	 */
	FROG_COLOR_MANAGED_SURFACE_RENDER_INTENT_PERCEPTUAL = 0,
};
#endif /* FROG_COLOR_MANAGED_SURFACE_RENDER_INTENT_ENUM */

/**
 * @ingroup iface_frog_color_managed_surface
 * @struct frog_color_managed_surface_listener
 */
struct frog_color_managed_surface_listener {
	/**
	 * maximum full frame luminance
	 *
	 * Max Full Frame Luminance The max luminance in nits that the
	 * output is capable of rendering for the full frame sustained.
	 *
	 * This value is coded as an unsigned 16-bit value in units of 1
	 * cd/m2, where 0x0001 represents 1 cd/m2 and 0xFFFF represents
	 * 65535 cd/m2.
	 */
	void (*preferred_metadata)(void *data,
				   struct frog_color_managed_surface *frog_color_managed_surface,
				   uint32_t transfer_function,
				   uint32_t output_display_primary_red_x,
				   uint32_t output_display_primary_red_y,
				   uint32_t output_display_primary_green_x,
				   uint32_t output_display_primary_green_y,
				   uint32_t output_display_primary_blue_x,
				   uint32_t output_display_primary_blue_y,
				   uint32_t output_white_point_x,
				   uint32_t output_white_point_y,
				   uint32_t max_luminance,
				   uint32_t min_luminance,
				   uint32_t max_full_frame_luminance);
};

/**
 * @ingroup iface_frog_color_managed_surface
 */
static inline int
frog_color_managed_surface_add_listener(struct frog_color_managed_surface *frog_color_managed_surface,
					const struct frog_color_managed_surface_listener *listener, void *data)
{
	return wl_proxy_add_listener((struct wl_proxy *) frog_color_managed_surface,
				     (void (**)(void)) listener, data);
}

#define FROG_COLOR_MANAGED_SURFACE_DESTROY 0
#define FROG_COLOR_MANAGED_SURFACE_SET_KNOWN_TRANSFER_FUNCTION 1
#define FROG_COLOR_MANAGED_SURFACE_SET_KNOWN_CONTAINER_COLOR_VOLUME 2
#define FROG_COLOR_MANAGED_SURFACE_SET_RENDER_INTENT 3
#define FROG_COLOR_MANAGED_SURFACE_SET_HDR_METADATA 4

/**
 * @ingroup iface_frog_color_managed_surface
 */
#define FROG_COLOR_MANAGED_SURFACE_PREFERRED_METADATA_SINCE_VERSION 1

/**
 * @ingroup iface_frog_color_managed_surface
 */
#define FROG_COLOR_MANAGED_SURFACE_DESTROY_SINCE_VERSION 1
/**
 * @ingroup iface_frog_color_managed_surface
 */
#define FROG_COLOR_MANAGED_SURFACE_SET_KNOWN_TRANSFER_FUNCTION_SINCE_VERSION 1
/**
 * @ingroup iface_frog_color_managed_surface
 */
#define FROG_COLOR_MANAGED_SURFACE_SET_KNOWN_CONTAINER_COLOR_VOLUME_SINCE_VERSION 1
/**
 * @ingroup iface_frog_color_managed_surface
 */
#define FROG_COLOR_MANAGED_SURFACE_SET_RENDER_INTENT_SINCE_VERSION 1
/**
 * @ingroup iface_frog_color_managed_surface
 */
#define FROG_COLOR_MANAGED_SURFACE_SET_HDR_METADATA_SINCE_VERSION 1

/** @ingroup iface_frog_color_managed_surface */
static inline void
frog_color_managed_surface_set_user_data(struct frog_color_managed_surface *frog_color_managed_surface, void *user_data)
{
	wl_proxy_set_user_data((struct wl_proxy *) frog_color_managed_surface, user_data);
}

/** @ingroup iface_frog_color_managed_surface */
static inline void *
frog_color_managed_surface_get_user_data(struct frog_color_managed_surface *frog_color_managed_surface)
{
	return wl_proxy_get_user_data((struct wl_proxy *) frog_color_managed_surface);
}

static inline uint32_t
frog_color_managed_surface_get_version(struct frog_color_managed_surface *frog_color_managed_surface)
{
	return wl_proxy_get_version((struct wl_proxy *) frog_color_managed_surface);
}

/**
 * @ingroup iface_frog_color_managed_surface
 *
 * Destroying the color managed surface resets all known color
 * state for the surface back to 'undefined' implementation-specific
 * values.
 */
static inline void
frog_color_managed_surface_destroy(struct frog_color_managed_surface *frog_color_managed_surface)
{
	wl_proxy_marshal_flags((struct wl_proxy *) frog_color_managed_surface,
			 FROG_COLOR_MANAGED_SURFACE_DESTROY, NULL, wl_proxy_get_version((struct wl_proxy *) frog_color_managed_surface), WL_MARSHAL_FLAG_DESTROY);
}

/**
 * @ingroup iface_frog_color_managed_surface
 */
static inline void
frog_color_managed_surface_set_known_transfer_function(struct frog_color_managed_surface *frog_color_managed_surface, uint32_t transfer_function)
{
	wl_proxy_marshal_flags((struct wl_proxy *) frog_color_managed_surface,
			 FROG_COLOR_MANAGED_SURFACE_SET_KNOWN_TRANSFER_FUNCTION, NULL, wl_proxy_get_version((struct wl_proxy *) frog_color_managed_surface), 0, transfer_function);
}

/**
 * @ingroup iface_frog_color_managed_surface
 */
static inline void
frog_color_managed_surface_set_known_container_color_volume(struct frog_color_managed_surface *frog_color_managed_surface, uint32_t primaries)
{
	wl_proxy_marshal_flags((struct wl_proxy *) frog_color_managed_surface,
			 FROG_COLOR_MANAGED_SURFACE_SET_KNOWN_CONTAINER_COLOR_VOLUME, NULL, wl_proxy_get_version((struct wl_proxy *) frog_color_managed_surface), 0, primaries);
}

/**
 * @ingroup iface_frog_color_managed_surface
 *
 * NOTE: On a surface with "perceptual" (default) render intent, handling of the container's color volume
 * is implementation-specific, and may differ between different transfer functions it is paired with:
 * ie. sRGB + 709 rendering may have it's primaries widened to more of the available display's gamut
 * to be be more pleasing for the viewer.
 * Compared to scRGB Linear + 709 being treated faithfully as 709
 * (including utilizing negatives out of the 709 gamut triangle)
 */
static inline void
frog_color_managed_surface_set_render_intent(struct frog_color_managed_surface *frog_color_managed_surface, uint32_t render_intent)
{
	wl_proxy_marshal_flags((struct wl_proxy *) frog_color_managed_surface,
			 FROG_COLOR_MANAGED_SURFACE_SET_RENDER_INTENT, NULL, wl_proxy_get_version((struct wl_proxy *) frog_color_managed_surface), 0, render_intent);
}

/**
 * @ingroup iface_frog_color_managed_surface
 *
 * Max Frame Average Light Level.
 * This value is coded as an unsigned 16-bit value in units of 1 cd/m2,
 * where 0x0001 represents 1 cd/m2 and 0xFFFF represents 65535 cd/m2.
 */
static inline void
frog_color_managed_surface_set_hdr_metadata(struct frog_color_managed_surface *frog_color_managed_surface, uint32_t mastering_display_primary_red_x, uint32_t mastering_display_primary_red_y, uint32_t mastering_display_primary_green_x, uint32_t mastering_display_primary_green_y, uint32_t mastering_display_primary_blue_x, uint32_t mastering_display_primary_blue_y, uint32_t mastering_white_point_x, uint32_t mastering_white_point_y, uint32_t max_display_mastering_luminance, uint32_t min_display_mastering_luminance, uint32_t max_cll, uint32_t max_fall)
{
	wl_proxy_marshal_flags((struct wl_proxy *) frog_color_managed_surface,
			 FROG_COLOR_MANAGED_SURFACE_SET_HDR_METADATA, NULL, wl_proxy_get_version((struct wl_proxy *) frog_color_managed_surface), 0, mastering_display_primary_red_x, mastering_display_primary_red_y, mastering_display_primary_green_x, mastering_display_primary_green_y, mastering_display_primary_blue_x, mastering_display_primary_blue_y, mastering_white_point_x, mastering_white_point_y, max_display_mastering_luminance, min_display_mastering_luminance, max_cll, max_fall);
}

#ifdef  __cplusplus
}
#endif

#endif