//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface CKAppLaunchMonitor : NSObject
{
    NSString *_foregroundAppBundleId;	// 8 = 0x8
}

+ (id)sharedInstance;	// IMP=0x0000000100002378
- (void).cxx_destruct;	// IMP=0x0000000100002548
@property(retain, nonatomic) NSString *foregroundAppBundleId; // @synthesize foregroundAppBundleId=_foregroundAppBundleId;
- (void)stopListening;	// IMP=0x00000001000024f4
- (void)startListening;	// IMP=0x00000001000024b4
- (void)dealloc;	// IMP=0x0000000100002468
- (id)init;	// IMP=0x0000000100002414

@end
