//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSDictionary;

@protocol BKIOHIDServiceMatcherDataProviding <NSObject>
- (void)registerIOHIDServicesCallback:(CDUnknownFunctionPointerType)arg1 matchingDictionary:(NSDictionary *)arg2 target:(void *)arg3 refCon:(void *)arg4;
- (void)unregisterIOHIDServicesCallback:(CDUnknownFunctionPointerType)arg1 matchingDictionary:(NSDictionary *)arg2 target:(void *)arg3 refCon:(void *)arg4;
- (NSArray *)IOHIDServicesMatching:(NSDictionary *)arg1;
@end

