#import <Foundation/Foundation.h>

#if __has_attribute(swift_private)
#define AC_SWIFT_PRIVATE __attribute__((swift_private))
#else
#define AC_SWIFT_PRIVATE
#endif

/// The "GaneshJi" asset catalog image resource.
static NSString * const ACImageNameGaneshJi AC_SWIFT_PRIVATE = @"GaneshJi";

/// The "Original" asset catalog image resource.
static NSString * const ACImageNameOriginal AC_SWIFT_PRIVATE = @"Original";

/// The "Sinhgad" asset catalog image resource.
static NSString * const ACImageNameSinhgad AC_SWIFT_PRIVATE = @"Sinhgad";

/// The "goi" asset catalog image resource.
static NSString * const ACImageNameGoi AC_SWIFT_PRIVATE = @"goi";

/// The "md" asset catalog image resource.
static NSString * const ACImageNameMd AC_SWIFT_PRIVATE = @"md";

#undef AC_SWIFT_PRIVATE