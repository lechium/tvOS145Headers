//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "MRCompanionLinkClientEvent.h"

@class NSDate;

@interface MRCompanionLinkClientRequest : MRCompanionLinkClientEvent
{
    NSDate *_date;	// 40 = 0x28
    CDUnknownBlockType _callback;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000001000b2b3c
@property(copy, nonatomic) CDUnknownBlockType callback; // @synthesize callback=_callback;
@property(retain, nonatomic) NSDate *date; // @synthesize date=_date;

@end

