//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSDictionary, NSString;

@protocol Device <NSObject>
@property(readonly) NSString *productVersion;
@property(readonly) NSArray *productVariants;
@property(readonly) NSString *iOSSupportVersion;
@property(readonly, getter=isHRNMode) _Bool HRNMode;
@property(readonly) NSString *deviceName;
@property(readonly) NSString *deviceGUID;
@property(readonly, getter=isAppleSiliconMac) _Bool appleSiliconMac;
- (NSDictionary *)copyThinningHeaders;
@end

