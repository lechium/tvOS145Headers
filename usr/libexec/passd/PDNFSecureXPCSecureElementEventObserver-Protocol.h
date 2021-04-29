//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol PDNFSecureXPCSecureElementEventObserver <NSObject>

@optional
- (void)secureElementRadioStateChanged;
- (void)secureElementExpressConfigurationDidFail;
- (void)secureElementExpressConfigurationNeedsUpdate;
- (void)secureElementDidUpdateAppletStateForApplicationIdentifier:(NSString *)arg1 keyIdentifier:(NSString *)arg2;
- (void)secureElementDidRunScriptsFromTSM;
@end

