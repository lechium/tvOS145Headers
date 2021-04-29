//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class GKGameSettingsInternal, NSNumber, NSString;

@protocol GKGameService <NSObject>
- (oneway void)resetTCCAuthorization:(void (^)(void))arg1;
- (oneway void)checkTCCAuthorization:(void (^)(_Bool))arg1;
- (oneway void)getPerGameFriendsForBundleID:(NSString *)arg1 handler:(void (^)(NSArray *, NSError *))arg2;
- (oneway void)setPerGameSettings:(GKGameSettingsInternal *)arg1 handler:(void (^)(NSError *))arg2;
- (oneway void)getPerGameSettingsForBundleID:(NSString *)arg1 handler:(void (^)(GKGameSettingsInternal *, NSError *))arg2;
- (oneway void)getArcadeHighlightForAdamID:(NSNumber *)arg1 count:(long long)arg2 handler:(void (^)(NSArray *, NSError *))arg3;
@end

