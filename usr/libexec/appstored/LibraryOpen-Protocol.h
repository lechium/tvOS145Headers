//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class ASDApp, NSUUID;

@protocol LibraryOpen <NSObject>
- (void)launchApp:(ASDApp *)arg1 withResultHandler:(void (^)(long long))arg2;
- (void)launchApp:(ASDApp *)arg1 onPairedDevice:(NSUUID *)arg2 withResultHandler:(void (^)(long long))arg3;
- (void)launchApp:(ASDApp *)arg1 extensionType:(long long)arg2 withResultHandler:(void (^)(long long))arg3;
@end
