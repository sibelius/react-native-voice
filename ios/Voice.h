
#ifdef RCT_NEW_ARCH_ENABLED
#import "RNVoiceSpec.h"

@interface Voice : NSObject <NativeVoiceSpec>
#else
#import <React/RCTBridgeModule.h>

@interface Voice : NSObject <RCTBridgeModule>
#endif

@end
