//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "AKGrandSlamRequestProvider.h"

@class NSString;
@protocol AKFollowUpProvider;

@interface AKLivenessRequestProvider : AKGrandSlamRequestProvider
{
    NSString *_event;	// 8 = 0x8
    NSString *_pushToken;	// 16 = 0x10
    id <AKFollowUpProvider> _followUpProvider;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000100075db4
@property(retain, nonatomic) id <AKFollowUpProvider> followUpProvider; // @synthesize followUpProvider=_followUpProvider;
@property(copy, nonatomic) NSString *pushToken; // @synthesize pushToken=_pushToken;
@property(copy, nonatomic) NSString *event; // @synthesize event=_event;
- (id)authKitBody;	// IMP=0x0000000100075150

@end

