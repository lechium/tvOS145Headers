//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData;

@interface OutboundMessage : NSObject
{
    NSData *_data;	// 8 = 0x8
    unsigned long long _offset;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000100014744
@property(nonatomic) unsigned long long offset; // @synthesize offset=_offset;
@property(retain, nonatomic) NSData *data; // @synthesize data=_data;
- (id)initWithData:(id)arg1;	// IMP=0x00000001000146a8

@end
