//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "ADAnnouncementRequest.h"

@class AFSiriIncomingCall;

@interface ADAnnounceIncomingCallRequest : ADAnnouncementRequest
{
    AFSiriIncomingCall *_call;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000010028c8c0
@property(copy, nonatomic) AFSiriIncomingCall *call; // @synthesize call=_call;
- (id)initWithCall:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010028c808

@end

