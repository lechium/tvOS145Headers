//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class APSOutgoingMessage, APSOutgoingMessageQueue;

@protocol APSOutgoingMessageQueueDelegate <NSObject>
- (_Bool)shouldForceShortTimeouts;
- (void)outgoingMessageQueueShortMessageTimeoutExceeded:(APSOutgoingMessageQueue *)arg1;
- (void)outgoingMessageQueue:(APSOutgoingMessageQueue *)arg1 requestCriticalMessageFlushWithPaddingLength:(unsigned long long)arg2;
- (void)outgoingMessageQueue:(APSOutgoingMessageQueue *)arg1 lateAcknowledgmentForCriticalOutgoingMessage:(APSOutgoingMessage *)arg2;
@end

