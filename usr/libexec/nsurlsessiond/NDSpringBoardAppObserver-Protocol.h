//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol NDSpringBoardAppObserver <NSObject>
- (void)applicationNoLongerInForeground:(NSString *)arg1;
- (void)applicationEnteredForeground:(NSString *)arg1;
- (void)applicationWasSuspended:(NSString *)arg1;
- (void)applicationBackgroundUpdatesTurnedOn:(NSString *)arg1;
- (void)applicationBackgroundUpdatesTurnedOff:(NSString *)arg1;
- (void)applicationWasQuitFromAppSwitcher:(NSString *)arg1;
@end

