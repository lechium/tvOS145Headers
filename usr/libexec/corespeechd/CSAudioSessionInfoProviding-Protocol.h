//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;
@protocol CSAudioSessionInfoProvidingDelegate;

@protocol CSAudioSessionInfoProviding <NSObject>
- (unsigned int)audioSessionIdForDeviceId:(NSString *)arg1;
- (void)unregisterObserver:(id <CSAudioSessionInfoProvidingDelegate>)arg1;
- (void)registerObserver:(id <CSAudioSessionInfoProvidingDelegate>)arg1;
@end

